#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int i =0;
    while(i<=5){
        if(x.find(s) != string::npos){
            cout<<i<<endl;
            break;
        }
        x+=x;
        i++;
    }
    if(i>5) cout<<"-1"<<endl;
}
return 0;
}