#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> d(10);
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        d[x]++;
    }

    for (int i = n;; i++)
    {
        string s = to_string(i);
        bool ok = true;
        for (int j = 0; j < s.size(); j++)
        {
            if (d[s[j] - '0'])
                ok = false;
        }
        if (ok)
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}