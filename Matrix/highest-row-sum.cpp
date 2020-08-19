#define N 5
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr{{1, 2, 3, 4, 5},
                            {5, 3, 1, 4, 2},
                            {5, 6, 7, 8, 9},
                            {0, 6, 3, 4, 12},
                            {9, 7, 12, 4, 2}};

    int sum{0}, max{0}, best_indx{0};

    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
        if (sum > max)
        {
            max = sum;
            best_indx = i;
        }
    }

    cout << "The Row with the highest index is : " << best_indx << " with value of : " << max << endl;

    return 0;
}