#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int n = s.size();
string ans = "";
for(int i =0; i<n; i++){
    if(s[i]=='.'){
        ans+='0';
    }
    else{
        if(s[i+1]=='.'){
            ans+='1';
            i++;
        }
        else{
            ans+='2';
            i++;
        }
    }
}
cout<<ans;
return 0;
}