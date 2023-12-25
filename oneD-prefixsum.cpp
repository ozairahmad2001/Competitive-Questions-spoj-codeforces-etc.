#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> arr(n,0);
for(int i=0; i<n; i++){
    cin>>arr[i];
}
vector<int> sum(n, 0);
sum[0]=arr[0];
for(int i=1; i<n; i++){
    sum[i] = sum[i-1]+arr[i];
}
int q;
cin>>q;
while(q--){
    int start, end;
    cin>> start;
    cin>> end;
    if(start == 0)
    {
        cout<< sum[end]<<endl;
    }
    else{
        cout<< sum[end]-sum[start-1]<< endl;
    }

}
return 0;
}