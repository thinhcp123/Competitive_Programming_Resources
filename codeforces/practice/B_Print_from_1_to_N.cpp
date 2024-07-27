#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void print1toN(int i, int j)
{
    if (i > j)
    {
        return;
    }
    cout << i << endl;
    print1toN(i + 1, j);
}
void solve()
{
    int n;
    cin >> n;
    print1toN(1, n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}