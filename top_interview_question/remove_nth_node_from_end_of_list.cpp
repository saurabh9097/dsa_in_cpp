#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h=head;
        int sz=0;
        while(h){
            sz++;
            h=h->next;
        }
        if(sz==n){
            return head->next;
        }
        h=head;
        sz=sz-n-1;
        while(sz){
            h=h->next;
            sz--;
        }
        h->next=h->next->next;
        return head;
    }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}