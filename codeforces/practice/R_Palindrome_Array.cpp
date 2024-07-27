#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

int checkPalindromeArray(int arr[], int begin, int end)
{
    if (begin >= end)
    {
        return 1;
    }

    if (arr[begin] == arr[end])
    {
        return checkPalindromeArray(arr, begin + 1, end - 1);
    }
    else
    {
        return 0;
    }
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &i : arr)
    {
        cin >> i;
    }
    if (checkPalindromeArray(arr, 0, n - 1) == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}