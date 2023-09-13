#include<bits/stdc++.h>
using namespace std;
int n, c, mid, temp, cows, ans;
vector<int> arr;

bool check(int k){
    cows=1;
    temp = arr[1];
    for(int i =2; i<=n; i++){
        if(arr[i]-temp>=k){
            cows++;
            temp = arr[i];
        }
    }
    if(cows>=c) return true;
    return false;
}

int bs (int start, int end){
    while(start<=end){
        mid =start+(end-start)/2;
        if(check(mid)){
            ans = mid;
            start = mid+1;
        }
        else end = mid-1;
    }
    return ans;
}

int main(){
int t;
cin>>t;
while(t--){
cin>>n>>c;
arr.clear();
arr.resize(n);
for(int i = 1; i<=n; i++){
    cin>>arr[i];
}
sort(arr.begin(), arr.end());
int final = bs(1, n);
cout<<final<<endl;
}
return 0;
}