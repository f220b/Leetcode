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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        int n = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }
        k %= n;
        if(k == 0)
            return head;
            
        temp = head;
        ListNode* tempTail = NULL;
        int count = 1;
        while (temp->next != NULL) {
            if (count == (n - k))
                tempTail = temp;
            temp = temp->next;
            count++;
        }
        temp->next = head;
        head = tempTail->next;
        tempTail->next = NULL;
        return head;
    }
};