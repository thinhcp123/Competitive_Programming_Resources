
#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n)
{
    bool check = false;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            check = true;
        }
    }
    return check;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    printf("%s", isSorted(arr, n) ? "True" : "False");
}
