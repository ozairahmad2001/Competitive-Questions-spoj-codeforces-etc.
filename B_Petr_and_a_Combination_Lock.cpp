#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag =0;
int n;
cin>>n;
vector<int>container(n);
for(int i = 0; i<n; i++){
    cin>>container[i];
}
int end = pow(2,n);
end = end-1;
for(int i = 1; i<=end; i++){
    int number = i;
    int counter = 0;
    int sum = 0;
    cout<<number<<endl;
    while(number>0){
        if((number&1)>0){
            sum+=container[counter];
        }
        else {
            sum-=container[counter];
        }
        counter++;
        number=(number>>1);
        cout<<sum<<" "<<number<<endl;
    }
    if(sum==0||sum==360||sum==-360){
        cout<<"YES"<<endl;
        flag =1;
        break;
    }
    
}
if(flag == 0) {
    cout<<"NO"<<endl;
}
return 0;
}