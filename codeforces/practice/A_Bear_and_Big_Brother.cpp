#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void solve()
{
    int n, k, count = 0;
    cin >> n >> k;
    if (n == k)
        cout << ++count;
    else
    {
        while (n <= k)
        {
            n = n * 3;
            k = k * 2;
            ++count;
        }

        cout << count;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}