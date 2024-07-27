#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    for (int e = -100; e <= 100; ++e)
    {
        int cost = 0;
        for (int i = 0; i < n; ++i)
        {
            cost += (a[i] - e) * (a[i] - e);
        }
        ans = min(ans, cost);
    }
    cout << ans << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}