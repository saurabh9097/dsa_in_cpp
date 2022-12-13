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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*res=nullptr;
        ListNode*resReturn=nullptr;
        
        while(l1!=nullptr||l2!=nullptr){
            int t1;int t2;
            if(l1==NULL){
                t1=0;
            }
            else{
                t1=l1->val;
                l1=l1->next;
            }
            if(l2==NULL){
                t2=0;
            }
            else{
                t2=l2->val;
                l2=l2->next;
            }
            int s=((t1+t2+carry)%10);
            carry=(t1+t2+carry)/10;
            if(res==NULL){
                res=new ListNode(s);
                resReturn=res;
                cout<<s<<endl;
            }
            else{
                ListNode*tempNode=new ListNode(s);
                res->next=tempNode;
                res=res->next;
                cout<<s<<endl;
            }
            
        }
        if(carry!=0){
            ListNode*tempNode=new ListNode(carry);
                res->next=tempNode;
                res=res->next;
            cout<<carry<<endl;
        }
        return resReturn;
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