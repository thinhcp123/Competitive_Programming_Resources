#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int n, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res += i;
    }
    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}