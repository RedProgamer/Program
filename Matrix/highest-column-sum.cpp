#define N 5
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<vector<int>> arr {{ 1, 2, 3, 4, 5 },
                             { 5, 3, 1, 4, 2 },
                             { 5, 6, 7, 8, 9 },
                             { 0, 6, 3, 4, 12 },
                             { 9, 7, 12, 4, 3 }};

    vector<int> result;
    int sum {0}, max {0}, col_index {0};

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            sum = sum + arr[j][i];
            if(sum > max) {
                max = sum;
                col_index = i;
            }
        }
        sum = 0;
    }

    cout << "Column : " << col_index + 1 << endl;
    cout << "Value : " << max << endl;


//    printVec(result);

    return 0;
}