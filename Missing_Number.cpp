#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n, num, sum=0;
cin>>n;
for(int i =0; i<n-1; i++){
    cin>>num;
    sum+=num;
}
cout<<(n*(n+1))/2-sum<<endl;
return 0;
}