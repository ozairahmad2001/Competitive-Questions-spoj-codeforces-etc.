#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;

    int mini = min(a, min(b, c));
    bool flag = true;
    int count = 0;
    if(a%mini!=0 || b%mini!=0 || c%mini!=0) flag = false;
    while(a!=mini){
        if(a%mini!=0 || count>3) {
            flag = false;
            break;
        }
        a-=mini;
        count++;
    }

    while(b!=mini){
        if(b%mini!=0 || count>3) {
            flag = false;
            break;
        }
        b-=mini;
        count++;
    }

    while(c!=mini){
        if(c%mini!=0 || count>3) {
            flag = false;
            break;
        }
        c-=mini;
        count++;
    }

    if(count>3) flag = false;
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}