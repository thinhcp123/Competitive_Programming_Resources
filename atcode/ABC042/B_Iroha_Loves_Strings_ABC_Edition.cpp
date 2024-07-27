#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;
string arr[100];
void solve()
{
    int n, l;
    cin >> n, cin >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}