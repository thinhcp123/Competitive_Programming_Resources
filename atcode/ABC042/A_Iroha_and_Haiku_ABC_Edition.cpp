#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    vi n(3);
    cin >> n[0] >> n[1] >> n[2];
    sort(n.begin(), n.end());
    if (n[0] == n[1] && n[2] > n[1])
        cout
            << "YES";
    else
        cout << "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}