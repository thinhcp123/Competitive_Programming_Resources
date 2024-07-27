#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void weirdAlgorithm(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    else if (n % 2 == 0)
    {
        weirdAlgorithm(n / 2);
    }
    else
    {
        weirdAlgorithm(n * 3 + 1);
    }
}

void solve()
{
    int n;
    cin >> n;
    weirdAlgorithm(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}