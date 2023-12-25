#include<bits/stdc++.h>
using namespace std;

int main(){
int n, t;
cin>>n>>t;
vector<char> students(n);
for(int i =0; i<n; i++) {
    cin>>students[i];
}
cout<<endl;
while (t--)
{
    for(int i = 0; i<n; i++){
        if(students[i]=='B'&&students[i+1]=='G'){
            swap(students[i],students[i+1]);
            i++;
        }
    }
}
for(auto i : students){
    cout<<i;
}


return 0;
}