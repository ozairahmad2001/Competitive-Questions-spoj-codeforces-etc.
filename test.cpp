#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n, vector<int>& ans, int sum, int target, int i){ 
    if(i>=n){
        if(sum==target){
            for(int j=0; j<ans.size(); j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(sum==target){
            for(int j=0; j<ans.size(); j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
             return;
    }


    ans.push_back(arr[i]);
    sum+=arr[i];
    solve(arr, n, ans, sum, target, i+1);
    ans.pop_back();
    sum-=arr[i];
    solve(arr, n, ans, sum, target, i+1);
    // for(int i = 0; i<arr.size(); i++){

    //     cout<<arr[i]<<" ";
    // }
}

int main(){
int target;
cin>>target;
int n;
cin>>n;
vector<int> arr(n);
for (int i=0; i<n; i++){
    cin>>arr[i];
}
vector<int> ans;
vector<vector<int>> res;
int sum=0;
solve(arr,n, ans,sum, target, 0);
return 0;
}