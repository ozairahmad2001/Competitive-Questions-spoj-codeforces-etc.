#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int count = 0;
    int money = 0;
    int j = 0;
    while (money <= (sum / 2))
    {
        money += arr[j];
        count++;
        j++;
    }
    cout << count << endl;
    return 0;
}