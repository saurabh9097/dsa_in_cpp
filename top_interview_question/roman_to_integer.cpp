#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;
        map<char, int> c;
        c['I'] = 1;
        c['V'] = 5;
        c['X'] = 10;
        c['L'] = 50;
        c['C'] = 100;
        c['D'] = 500;
        c['M'] = 1000;
        map<char, int> val;
        val['I'] = 0;
        val['V'] = 1;
        val['X'] = 2;
        val['L'] = 3;
        val['C'] = 4;
        val['D'] = 5;
        val['M'] = 6;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (i == s.size() - 1)
                res += c[s[i]];
            else
            {
                if (val[s[i]] < val[s[i + 1]])
                    res -= c[s[i]];
                else
                    res += c[s[i]];
            }
        }
        return res;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    Solution solution;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<solution.romanToInt(s)<<endl;


    }
}