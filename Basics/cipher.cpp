#include <bits/stdc++.h>
using namespace std;

int main()
// Problem statement
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
{

    string s;

    getline(cin, s);

    int k;

    cin >> k;

    string ans = "";

    for (int i = 0; i < s.length(); i++)

    {

        if (isalpha(s[i]))

        {

            if (isupper(s[i]))

            {

                ans += ((((s[i] - 65) + k) % 26) + 'A');
            }

            if (islower(s[i]))

            {

                ans += ((((s[i] - 97) + k) % 26) + 'a');
            }

            continue;
        }

        if (isdigit(s[i]))

        {

            int ch = (((s[i] - '0') + k) % 10);

            ans += ch + '0';

            continue;
        }

        else

        {

            ans += s[i];
        }
    }

    cout << ans;
}