#include<iostream>
using namespace std;

public:
ListNode* swapPairs(ListNode* head) {
    ListNode* cur = head;
    ListNode* ans=head;
    if(cur->next!=NULL&&cur->next->next!=NULL)
        ListNode* ans = head->next;
    else if(cur->next!=NULL&&cur->next->next==NULL)
        ListNode* ans = head;
    else if(cur->next!=NULL&&cur->next->next!=NULL)
        ListNode* ans = NULL;
    while(cur->next!=NULL&&cur->next->next!=NULL){
        ListNode* temp1 = cur;
        ListNode* temp2 = cur->next->next;
        cur->next = temp2;
        cur->next->next = temp1;
        cur = temp2;
    }
    return ans;
}
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
int main(int argc, char const *argv[])
{
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    for(int i=2;i<6;i++){
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    ListNode* ans = swapPairs(head);
    while(ans!=NULL){
        cout<<ans->val<<endl;
        ans = ans->next;
    }
    return 0;

}
