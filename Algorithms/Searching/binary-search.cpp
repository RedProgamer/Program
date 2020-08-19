#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left{0};
    int right = arr.size() - 1;
    int midpoint{0};

    while (left <= right)
    {
        midpoint = left + (right - left) / 2;
        if (arr[midpoint] == target)
            return midpoint;
        else if (arr[midpoint] > target)
            right = midpoint - 1;
        else if (arr[midpoint] < target)
            left = midpoint + 1;
    }
    return -1;
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 7, 10, 30, 47, 100};
    int t = 4;

    int index = binarySearch(arr, t);

    if (index >= 0)
    {
        cout << "The value was found at : " << index << endl;
    }
    else
        cout << "The value was not found." << endl;

    return 0;
}