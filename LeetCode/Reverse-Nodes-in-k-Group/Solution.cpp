1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseKGroup(ListNode* head, int k) {
14        ListNode dummy{0};
15        dummy.next = head;
16        auto curr = head, curr_dummy = &dummy;
17        int len = 0;
18
19        while (curr) {
20            auto next_curr = curr->next;
21            len = (len + 1) % k;
22
23            if (len == 0) {
24                auto next_dummy = curr_dummy->next;
25                reverse(&curr_dummy, curr->next);
26                curr_dummy = next_dummy;
27            }
28            curr = next_curr;
29        }
30        return dummy.next;
31    }
32
33    void reverse(ListNode **begin, const ListNode *end) {
34        ListNode *first = (*begin)->next;
35        ListNode *curr = first->next;
36
37        while (curr != end) {
38            first->next = curr->next;
39            curr->next = (*begin)->next;
40            (*begin)->next = curr;
41            curr = first->next;
42        }
43    }
44};