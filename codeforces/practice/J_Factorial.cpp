#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

void solve()
{
    int n;
    cin >> n;
    cout << factorial(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}