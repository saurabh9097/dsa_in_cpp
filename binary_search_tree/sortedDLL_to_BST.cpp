#include<bits/stdc++.h>
using namespace std;
TreeNode < int > * sortedLLToBST ( TreeNode < int > * & head , int n ) {
    // basecase
    if ( n < = 0 || head == NULL )
    {
        return NULL;
    }
    TreeNode < int > * left = sortedLLTOBST ( head , n / 2 ) ;
    TreeNode < int > * root = head ;
    root- > left = left ;
    head=head-> right ;
    root-> right = sortedLLToBST ( head , n - n/2 - 1 ) ;
    return root ;
    }