#include <bits/stdc++.h>
using namespace std;

int main()
{

    // problem statement
    // https://www.youtube.com/watch?v=5co5Gvp_-S0

    string ss{"aaaabbbbcccd"};
    map<char, int> counting;

    for (int i = 0; i < ss.length(); i++)
    {
        counting[ss[i]]++;
    }

    for (auto itr = counting.begin(); itr != counting.end(); itr++)
    {
        if (itr->second == 1)
            cout << itr->first << " is the first non-repeating character " << endl;
    }

    return 0;
}