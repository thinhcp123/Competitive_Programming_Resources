#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int s, cnt = 0;
    cin >> s;
    for (int i = 1; i <= s; i++)
    {
        if (s % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}