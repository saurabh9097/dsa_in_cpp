#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// floyd's cycle detection method
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode *h1=head;
        ListNode *h2=head;
        while(h2!=NULL&&h2->next!=NULL){
            
            h1=h1->next;
            h2=h2->next->next;
           if(h1==h2)return true;
        }
         return false;
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