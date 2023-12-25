#include<bits/stdc++.h>
using namespace std;

int main(){
string str1;
cin >> str1;
string str2= "WUB";
int start = 0;

vector<string>v;
while(true){
    int end = str1.find(str2,start);
    if(end == string::npos){
        v.push_back(str1.substr(start,end));
        break;
    }
    if(start !=end){
        v.push_back(str1.substr(start, end - start));
    }
    start = end+3;
}
if(!v.empty()){
    cout<<v[0];
}
for(int i =1; i<v.size(); i++){
    cout<<" "<<v[i];
}

return 0;
}
