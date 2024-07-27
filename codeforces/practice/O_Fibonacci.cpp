#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

int Fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
}
void solve()
{
    int n;
    cin >> n;
    cout << Fibonacci(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}