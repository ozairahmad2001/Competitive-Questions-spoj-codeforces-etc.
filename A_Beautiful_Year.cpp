#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int arr[3][3];
// int result [3][3]={1,1,1,
//                    1,1,1,
//                    1,1,1};
// // for(int i=0; i<3; i++){
// //     for(int j =0; j<3; j++){
// //         cout<<result[i][j];
// //     }
// //     cout<<endl;
// // }
// for(int i =0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>arr[i][j];
//     }
// }

// for(int i =0; i<3; i++){
//     for(int j=0; j<3; j++){
//         int t = arr[i][j];
//         while(t--){
//             result[i][j]^=1;
//             if(i>0) result[i-1][j]^=1;
//             if(j>0) result[i][j-1]^=1;
//             if(i<3) result[i+1][j]^=1;
//             if(j<3) result[i][j+1]^=1;
//         }
//     }
// }
// for(int i=0; i<3; i++){
//     for(int j =0; j<3; j++){
//         cout<<result[i][j];
//     }
//     cout<<endl;
// }
// return 0;
// }