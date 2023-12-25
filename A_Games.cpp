#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
pair <int,int> p;
vector<pair<int,int>> v;
for(int i=0; i<n; i++){
    cin>>p.first;
    cin>>p.second;
    v.push_back(p);
}
int count = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(v[i].first == v[j].second) count++;
    }
}
cout<<count;
return 0;
}