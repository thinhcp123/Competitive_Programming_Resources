#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void towerOfHanoi(int a, int b, int c, int n)
{
    if (n == 0)
        return;
    towerOfHanoi(a, c, b, n - 1);
    cout << a << ' ' << c << endl;
    towerOfHanoi(b, a, c, n - 1);
}

void solve()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    towerOfHanoi(1, 2, 3, n);
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