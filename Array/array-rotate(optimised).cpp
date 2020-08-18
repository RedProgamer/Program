#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int rotate, n = arr.size(), m;

    cin >> rotate;

    m = rotate % n;

    for (int i = 0; i < n; i++)
    {
        cout << arr[(m + i) % n] << " ";
    }
    cout << endl;

    return 0;
}