#define N 5
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void rotateArray(vector<int> &arr, int k)
{
    int temp{0}, i;

    for (int j = 0; j < k; j++)
    {
        temp = arr[0], i = 0;
        for (i = 0; i < arr.size() - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[i] = temp;
    }
}

int main()
{

    vector<int> clean{1, 2, 3, 4, 5};
    //rotate = 2
    //output: 3 4 5 1 2

    printVec(clean);
    int rotate{0};
    cin >> rotate;

    rotateArray(clean, rotate);
    printVec(clean);

    return 0;
}