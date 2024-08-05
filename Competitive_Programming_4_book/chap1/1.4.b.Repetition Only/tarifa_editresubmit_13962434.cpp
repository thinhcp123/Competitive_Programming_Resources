#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = n;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ans += (n - x);
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}