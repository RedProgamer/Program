#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 7, 10, 30, 47, 100};

    int start{0}, target{0};
    int end = arr.size() - 1;
    bool found = false;

    cin >> target;

    while (start <= end)
    {
        int midpoint = start + (end - start) / 2;
        if (arr[midpoint] == target)
        {
            found = true;
        }
        else if (arr[midpoint] > target)
        {
            start = midpoint - 1;
        }
        else if (arr[midpoint] < target)
        {
            end = midpoint + 1;
        }

        if (found)
            cout << "Value is found" << endl;
        else
            cout << "Value is not found" << endl;

        return 0;
    }
}