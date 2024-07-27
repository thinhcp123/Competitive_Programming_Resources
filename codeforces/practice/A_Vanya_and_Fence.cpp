#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (auto &i : arr)
    {
        cin >> i;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}