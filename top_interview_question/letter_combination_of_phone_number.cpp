#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        vector<string> result = {""};
        map<char, string> pad{{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, 
                              {'8',"tuv"}, {'9', "wxyz"}};
        for (auto digit : digits)
        {
            vector<string> tmp;
            for (auto candidate : pad[digit])
            {
                for (auto s : result)
                {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
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