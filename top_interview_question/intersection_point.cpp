#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==head2)return head1;
    int s1=0;
    int s2=0;
    ListNode *t1=head1;
    while(t1!=NULL){t1=t1->next;s1++;}
    
    ListNode *t2=head2;
    while(t2!=NULL){t2=t2->next;s2++;}
    if(s1>s2){
        int f=s1-s2;
        while(f--)head1=head1->next;
    }
    if(s2>s1){
        int f=s2-s1;
        while(f--)head2=head2->next;
    }
    while(head1!=NULL&&head2!=nullptr){
        if(head1==head2)return head1;
        head1=head1->next;
        head2=head2->next;
    }
    return nullptr;
       
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
