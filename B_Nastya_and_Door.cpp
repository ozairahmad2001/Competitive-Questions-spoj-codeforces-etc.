#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i =1; i<=n; i++){
        cin>>arr[i];
    }
    int i = 1;
    int j = k;
    int peaks = 0;
    int maxPeaks = 0;
    int l = i;
    int p = 0;
    while(j<=n){
        p = i+1;
        while(p<j){
            if(arr[p]>arr[p-1]&&arr[p]>arr[p+1]){
                peaks++;
            }
            p++;
        }
        if(peaks>maxPeaks){
         maxPeaks = peaks;
         if(i>l) l = i;
        }
        peaks = 0;
        i++;
        j++;
    }
    cout<<maxPeaks+1<<" "<<l<<endl;
}
return 0;
}