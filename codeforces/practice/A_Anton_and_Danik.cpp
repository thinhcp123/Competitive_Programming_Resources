#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void solve()
{
    int n, count1 = 0, count2 = 0;
    string k;
    cin >> n >> k;
    for (char i : k)
    {
        if (i == 'A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if (count1 > count2)
        cout << "Anton";
    else if (count1 < count2)
        cout << "Danik";
    else
    {
        cout << "Friendship";
    }
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