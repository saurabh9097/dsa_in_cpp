#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int give(int n, int r)
    {
        long long res = 1;
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
    vector<int> getRow(int rowIndex)
    {
        vector<int> res;
        for (int i = 0; i <= rowIndex; i++)
        {
            res.push_back(give(rowIndex, i));
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