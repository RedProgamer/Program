#include <bits/stdc++.h>
using namespace std;

int main()
{

    // O(n) complexity

    vector<int> arr{10, 72, 321, 40, 5, 100, 38, 49, 3975, 281, 333};
    int value{5}, index{-1}; // searches for the value

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            index = i;
        }
    }

    if (index >= 0)
        cout << "The value was found at index : " << index << endl;
    else
        cout << "The value was not found" << endl;

    return 0;
}