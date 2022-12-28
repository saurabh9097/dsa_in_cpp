
// C++ program to print all permutations with
// duplicates allowed using next_permutation
#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of vector<int> str
// using next_permutation
void permute(vector<int> str)
{
    // Sort the vector<int> in lexicographically
    // ascending order
    sort(str.begin(), str.end());
 
    // Keep printing next permutation while there
    // is next permutation
    do {
    for(auto it:str) cout<<it<<" ";
       cout <<endl;
    } while (next_permutation(str.begin(), str.end()));
    // next_permutation(str.begin(), str.end());
}
 
// Driver code
int main()
{
    vector<int> str = {1,2,3,4};
    permute(str);
    return 0;
}