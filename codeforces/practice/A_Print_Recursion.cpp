#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using vi = vector<int>;

void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    cout << "I love Recursion" << endl;
    hello(i - 1);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    hello(n);
}