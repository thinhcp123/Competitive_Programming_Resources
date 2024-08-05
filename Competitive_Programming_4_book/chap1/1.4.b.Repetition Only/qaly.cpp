#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        float x, y;
        cin >> x >> y;
        ans += x * y;
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}