/* 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {

            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
}; */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        stack<int> st1, st2;

        // First linked list ko stack mein daalo
        while (l1) {
            st1.push(l1->val);
            l1 = l1->next;
        }

        // Second linked list ko stack mein daalo
        while (l2) {
            st2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* head = nullptr;

        // Right se left addition
        while (!st1.empty() || !st2.empty() || carry) {

            int sum = carry;

            if (!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }

            if (!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }

            carry = sum / 10;
            int digit = sum % 10;

            // New node ko front mein lagao
            ListNode* node = new ListNode(digit);
            node->next = head;
            head = node;
        }

        return head;
    }
};