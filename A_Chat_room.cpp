#include<iostream>
using namespace std;

int main(){
string str1;
string str2 = "hello";
cin>>str1;
if(str1.find(str2)!=string::npos){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
return 0;
}