#include <stdio.h>
#include <stdlib.h>

struct Listnode{
    int val;
    struct Listnode *next;
}

struct Listnode* mergeTwoLists(struct ListNode* list1, struct List2){
    struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode dummy = {0, NULL};
    struct ListNode* tail = &dummy;

        
    while (list1 && list2){
        if(list1->val <= list2->val){
            tail->next = list1;
        }else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1){
        tail->next = list1;
    }else if (list2){
        tail->next = list2;
    }
    return dummy.next;
    }
}

int main() {
    // Create list 1: 1 -> 3 -> 5 -> NULL
    struct ListNode* l1 = (struct ListNode*) malloc(sizeof(struct ListNode));
    l1->val = 1;
    l1->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    l1->next->val = 3;
    l1->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    l1->next->next->val = 5;
    l1->next->next->next = NULL;

    // Create list 2: 2 -> 4 -> 6 -> NULL
    struct ListNode* l2 = (struct ListNode*) malloc(sizeof(struct ListNode));
    l2->val = 2;
    l2->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    l2->next->val = 4;
    l2->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    l2->next->next->val = 6;
    l2->next->next->next = NULL;

    // Merge the two lists and print the result
    struct ListNode* mergedList = mergeTwoLists(l1, l2);
    while (mergedList != NULL) {
        printf("%d ", mergedList->val);
        mergedList = mergedList->next;
    }
    printf("\n");

    // Free the memory allocated for the lists
    free(l1->next->next);
    free(l1->next);
    free(l1);
    free(l2->next->next);
    free(l2->next);
    free(l2);

    return 0;
}
