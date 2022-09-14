#include <bits/stdc++.h>
using namespace std;
vector<string> res;
void permute(string s, int l, int r)
{
    if (l == r)
    {
        res.push_back(s);
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main()
{
    string s = "bca";
    permute(s, 0, s.size() - 1);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        cout << i << endl;
    }
    cout << res.size() << endl;
}