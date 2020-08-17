#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    vector<int> temp;
    int rotate, n = arr.size(), i;

    cin >> rotate;

    for (i = 0; i < rotate; i++)
    {
        temp.push_back(arr[i]);
    }
    arr.erase(arr.begin(), arr.begin() + i);

    for (auto elem : temp)
    {
        cout << elem << " ";
    }
    cout << endl;

    arr.insert(temp.begin(), temp.end(), temp.end());

    for (auto elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}