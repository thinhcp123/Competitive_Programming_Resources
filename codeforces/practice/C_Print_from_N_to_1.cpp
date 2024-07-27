#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void printNto1(int i)
{
    if (i == 0)
    {
        return;
    }
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {

        cout << i << " ";
    }
    printNto1(i - 1);
}
void solve()
{
    int n;
    cin >> n;
    printNto1(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}