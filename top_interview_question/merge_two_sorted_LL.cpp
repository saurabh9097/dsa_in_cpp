#include<bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*h1=list1,*h2=list2;
        ListNode*res=NULL;
        ListNode*rest=NULL;
        while(h1!=NULL&&h2!=NULL){
            if(h1->val<h2->val){
                if(res==NULL){res=h1;rest=h1;}
                else{
                ListNode*t=new ListNode(h1->val);
                rest->next=t;
                rest=rest->next;
                }
                h1=h1->next;
            }
            else{
                if(res==NULL){res=h2;rest=h2;}
               else{
                   ListNode*t=new ListNode(h2->val);
                rest->next=t;
                rest=rest->next;
               }
                h2=h2->next;
            }
        }
        while(h1!=NULL){
            
                if(res==NULL){res=h1;rest=h1;
                    }
                else{
                ListNode*t=new ListNode(h1->val);
                rest->next=t;
                rest=rest->next;
                }
                h1=h1->next;
        }
        while(h2!=NULL){
            
                if(res==NULL){res=h2;rest=h2;
                    }
                else{
                ListNode*t=new ListNode(h2->val);
                rest->next=t;
                rest=rest->next;
                }
                h2=h2->next;
        }
        return res;
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

// optimised implementation
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
//     public:
//         ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
//         {
//             if (list1 == NULL) return list2;
//             if (list2 == NULL) return list1;

//             ListNode *ans, *tail;
//             if (list1->val < list2->val)
//             {
//                 ans = list1;
//                 tail = ans;
//                 list1 = list1->next;
//             }
//             else
//             {
//                 ans = list2;
//                 tail = ans;
//                 list2 = list2->next;
//             }
//             while (list1 && list2)
//             {
//                 if (list1->val < list2->val)
//                 {
//                     tail->next = list1;
//                     tail = list1;
//                     list1 = list1->next;
//                 }
//                 else
//                 {
//                     tail->next = list2;
//                     tail = list2;
//                     list2 = list2->next;
//                 }
//             }
//             if (list1 == NULL)
//                 tail->next = list2;
//             else
//                 tail->next = list1;
//             return ans;
//         }
// };