#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;
using vi = vector<int>;

void solve()
{
    string n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '0' || n[i] == '1')
        {
            st.push(n[i]);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
    }
    vector<char> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}