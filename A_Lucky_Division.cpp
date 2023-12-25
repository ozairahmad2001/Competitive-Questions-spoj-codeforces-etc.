#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;
    int x = n;
    int rem;
    while (x > 0)
    {

        rem = x % 10;

        x = x / 10;

        if (rem != 7 && rem != 4)
            flag = false;
    }
    if ((n % 47 == 0) || (n % 4 == 0) || (n % 7 == 0) || (flag))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}