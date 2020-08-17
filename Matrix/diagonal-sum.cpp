#define N 5
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> matrix{{2, 9, 1, 4, -2},
                               {6, 7, 2, 11, 4},
                               {4, 2, 9, 2, 4},
                               {1, 9, 2, 4, 4},
                               {0, 2, 4, 2, 5}};

    int sum{0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}