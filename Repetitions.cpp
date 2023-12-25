#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxCount = 1;
    int currCount = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
            currCount++;
        else
        {
            maxCount = max(currCount, maxCount);
            currCount = 1;
        }
    }

    cout << maxCount << endl;
    return 0;
}