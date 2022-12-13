#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> res;
        for (int i = 0; i < s.size(); i++)
        {
            res[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (res[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
    }
}