

#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    int left = 0;
    int right = 0;
    vector<int> Union;

    while (left < n && right < m)
    {
        if (arr1[left] <= arr2[right])
        {
            if (Union.size() == 0 || Union.back() != arr1[left])
                Union.push_back(arr1[left]);
            left++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[right])
                Union.push_back(arr2[right]);
            right++;
        }
    }
    while (left < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[left])
            Union.push_back(arr1[left]);
        left++;
    }
    while (right < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[right])
            Union.push_back(arr2[right]);
        right++;
    }
    return Union;
}

int main()

{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}
