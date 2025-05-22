/**
 * Definition for singly-linked list->
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
    // void swapNodes(ListNode* list1, ListNode* list2) {

    //     list1->next->next = list2->next;
    //     list2->next = list1->next;
    //     list1->next = list2;
    // }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0);
        ListNode* head = list3; 
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        ListNode* h1 = list1;
        ListNode* h2 = list2;

        while (h1 != nullptr && h2 != nullptr) {
            if (h1->val < h2->val) {
                list3->next = h1;
                h1 = h1->next;
            }
            else {
                list3->next = h2;
                h2 = h2->next;
            }
            list3 = list3->next;

        }


            while(h1 != nullptr) {
                list3->next = h1;
                h1 = h1->next;
                list3 = list3->next;
            }

            while  (h2 != nullptr) {
                list3->next = h2;
                h2 = h2->next;
                list3 = list3->next;
            }

        return head->next;
        //     int ok = -1;
        //     ListNode* h1 = list1->next;
        //     ListNode* h2 = list2->next;

        //     if (list1->val < list2->val) {
        //         swapNodes(list1, list2);
        //         ok = 1;
        //     } else {
        //         swapNodes(list2, list1);
        //         ok = 2;
        //     }

        //     while (h1 != nullptr && h2 != nullptr) {
        //         while (h1->val < h2->val)
        //             swapNodes(h1, h2);

        //         while (h2->val < h1->val)
        //             swapNodes(h2, h1);
        //     }

        //     return (ok == 1 ? list1 : list2);
    }
};