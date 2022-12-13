#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // function for NcR calculation as we know that rows in pascal triangle start with 0 and column also start with 0
    // and the entry at any point is value of nCr n os row and r is column
    int give(int n, int r)
    {
        int res = 1;
        if (r > n - r)
        {
            r = n - r;
        }
        for (int i = 0; i < r; ++i)
        {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res(numRows);
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                res[i].push_back(give(i, j));
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
    while (t--)
    {
    }
}