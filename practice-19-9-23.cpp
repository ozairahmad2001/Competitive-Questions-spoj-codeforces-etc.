#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int>& arr, int target, int sum, int i, vector<int>& ans){
//     if(i>=arr.size()){
//         if(sum==target){
//             return ans.size();
//         }
//         return 0;
//     }
//     // if(sum>target) return 0;

//     int count = INT_MAX;

//     ans.push_back(arr[i]);
//     cout<<arr[i]<<"<-oushing this "<<endl;
//     sum+=arr[i];
//     int inc = solve(arr, target, sum, i+1, ans);
//     if(inc<count && inc!=0) count=inc;
//     cout<<"after pushing count : "<<count<<endl;
//     int a = ans.back();
//     ans.pop_back();
//     cout<<"popping this <- "<<a<<endl;
//     sum-=arr[i];
//     int exc = solve(arr, target, sum, i+1, ans);
//     if(exc<count && exc!=0) count=exc;
//     cout<<"after popping count : "<<count<<endl;
//     return count;
// }

int solve(vector<int>& arr, int i, int sum, int& maxi){
    if(i>=arr.size()) {
        maxi=max(sum, maxi);
        return maxi;
    }
    solve(arr, i+2, sum+arr[i], maxi);
    solve(arr, i+1, sum, maxi);

    return maxi;
}

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i =0; i<n; i++){
    cin>>arr[i];
}
// int target;
// cin>>target;
vector<int>ans;
int maxi = INT_MIN;
int min = solve(arr, 0, 0, maxi);
cout<<min<<endl;
return 0;
}