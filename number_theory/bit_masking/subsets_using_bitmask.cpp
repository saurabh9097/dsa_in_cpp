#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(vector<int> &nums)
{
    int n = nums.size();
    int subset_ct = (1 << n);
    vector<vector<int>> res;
    for (int mask = 0; mask < subset_ct; mask++)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if ((mask & (1 << i)) != 0)
                temp.push_back(nums[i]);
        }
        res.push_back(temp);
    }
    sort(res.begin(), res.end());
    return res;
}
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