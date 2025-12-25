/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* node=head;
        while(node!=NULL){
            n+=1;
            node=node->next;
        }
        n=n/2;
        node=head;
        for(int i=0;i<n-1;i++){
            node=node->next;
        }
        node->next=node->next->next;
        return head;
    }
};