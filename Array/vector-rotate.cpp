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
    for (int i = 0; i < k; i++)
    {
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
}

int main()
{

    vector<int> clean{1, 2, 3, 4, 5};
    //rotate = 2
    //output: 3 4 5 1 2

    int rotate{0};
    cin >> rotate;

    rotateArray(clean, rotate);
    printVec(clean);

    return 0;
}