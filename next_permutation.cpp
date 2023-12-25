#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;
    void solve(vector<int>& nums,vector<int>&per,int c){
        if(c==nums.size()){
            ans.push_back(per);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(per[i]==11){
                per[i]=nums[c];
                solve(nums,per,c+1);
                per[i]=11;
            }
        }
    }

int main(){
vector<int> nums = {1,2,3};
bool found = 0;
        int n = nums.size();
        int i;
        for(i = n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                found = 1;
                break;
            }
        }
        int j=0;
        if(found){
            int c=0;
            int minC = INT_MAX;
            for( j = i+1; j<n; j++){
                if(nums[j]>nums[i]) c=nums[j];
                if(c<minC) minC=c;

            }
cout<<minC<<endl;
            swap(nums[i],minC);
            // swap(minC, nums[i]);
            // sort(nums.begin()+i, nums.end());
        }
        else{
            reverse(nums.begin(), nums.end());
        }
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
return 0;
}