#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}