#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;
int n;
int arr[1000];

void printEvenIndices(int s)
{
    if (s >= n)
    {
        return;
    }
    printEvenIndices(s + 2);
    cout << arr[s] << " ";
}
void solve()
{
    cin >> n;
    for (int &i : arr)
    {
        cin >> i;
    }

    printEvenIndices(0);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}