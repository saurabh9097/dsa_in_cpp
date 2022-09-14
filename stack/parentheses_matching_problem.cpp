#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool match_parentheses(string a)
    {
        stack<char> s;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '{' || a[i] == '(' || a[i] == '[')
            {
                s.push(a[i]);
            }
            else
            {
                if (s.empty())
                    return false;
                else if ((a[i] == '}' && s.top() == '{') || (a[i] == ']' && s.top() == '[') || (a[i] == ')' && s.top() == '('))
                    s.pop();
                else
                    return false;
            }
        }
        return s.empty();
    }
};
int main()
{
    Solution solution;
    cout << solution.match_parentheses("(){{{}}}[]");
}