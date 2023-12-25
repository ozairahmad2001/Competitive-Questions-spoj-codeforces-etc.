#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
cin>>str;
vector<char> v;
for(int i = 0; i<str.length(); i++){
    if(str[i]!='+') v.push_back(str[i]);
}
sort(v.begin(), v.end());
for(int i = 0; i<v.size()-1; i++){
    cout<<v[i]<<'+';
}
cout<<v[v.size()-1];

return 0;
}