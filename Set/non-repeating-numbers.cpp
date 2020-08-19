#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> repeated_nums{1, 1, 3, 45, 1, 45, 12, 2, 4, 5};
    set<int> clean_nums;

    for (auto elem : repeated_nums)
    {
        clean_nums.insert(elem);
    }

    for (auto nums : clean_nums)
    {
        cout << nums << " ";
    }
    cout << endl;

    return 0;
}