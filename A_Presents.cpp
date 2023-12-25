// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// vector<int>v;
// int x;
// for(int i =1; i<=n; i++){
//     cin>>x;
//     v.push_back(x);
// }
// for(int i=1; i<=n; i++){
//     auto it = find(v.begin(), v.end(),i);

//     if(it != v.end()){
//         int index = it-v.begin()+1;
//         cout<<index<<" ";
//     }
    
// }


// return 0;
// }

//or 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
}