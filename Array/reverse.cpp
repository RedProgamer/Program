#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, num;
    vector<int> arr;
    cin >> t;

    while (t--)
    {
        cin >> num;
        arr.push_back(num);
    }

    reverse(arr.begin(), arr.end());

    for (int elem : arr)
    {
        cout << elem << endl;
    }

    return 0;
}
