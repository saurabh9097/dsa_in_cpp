#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;

    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

bool search(Node* &head, int val) {
  struct Node* pCrawl = head;
  while (pCrawl != NULL) {
    if(pCrawl -> val == val)
      return true;
    pCrawl = pCrawl -> next;
  }
  return false;
}