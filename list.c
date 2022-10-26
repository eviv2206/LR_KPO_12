//
// Created by zhenya on 26.10.2022.
//

#include "list.h"

void list_insert(listNodePtr *head, list_data data) {
    listNodePtr currPtr = *head;
    if (*head == NULL) {
        listNodePtr tmp = malloc(sizeof(listNode));
        tmp->data = data;
        tmp->nextItem = NULL;
        *head = tmp;
    } else {
        while (currPtr->nextItem != NULL) {
            currPtr = currPtr->nextItem;
        }
        listNodePtr tmp = malloc(sizeof(listNode));
        tmp->data = data;
        tmp->nextItem = NULL;
        currPtr->nextItem = tmp;
    }
}

void list_delete_multiplicity_5(listNodePtr *head) {
    listNodePtr tmpPtr, prevPtr, curPtr;
    int isDone = 0;
    while (*head != NULL && (*head)->data.number % 5 == 0) {
        tmpPtr = *head;
        *head = (*head)->nextItem;
        free(tmpPtr);
        isDone = 1;
    }
    prevPtr = *head;
    curPtr = (*head);
    while (!isDone && curPtr != NULL) {
        if (curPtr->data.number % 5 == 0) {
            prevPtr->nextItem = curPtr->nextItem;
            isDone = 1;
        }
        prevPtr = curPtr;
        curPtr = curPtr->nextItem;
    }
}

void list_add_multiplicity_7(listNodePtr *head) {
    listNodePtr prevPtr, curPtr;
    int isDone = 0;
    if (*head != NULL) {
        if ((*head)->data.number % 7 == 0) {
            listNodePtr tmp = malloc(sizeof(listNode));
            tmp->nextItem = (*head)->nextItem;
            tmp->data.number = (*head)->data.number;
            (*head)->data.number = 1;
            (*head)->nextItem = tmp;
            isDone = 1;
        }
        curPtr = (*head)->nextItem;
        if(isDone && curPtr->nextItem != NULL){
            curPtr = curPtr->nextItem;
        }
        while (curPtr != NULL) {
            isDone = 0;
            if (curPtr->data.number % 7 == 0) {
                listNodePtr tmp = malloc(sizeof(listNode));
                tmp->nextItem = curPtr->nextItem;
                tmp->data.number = curPtr->data.number;
                curPtr->data.number = 1;
                curPtr->nextItem = tmp;
                isDone = 1;
            }
            curPtr = curPtr->nextItem;
            if(isDone){
                curPtr = curPtr->nextItem;
            }
        }
        if (curPtr != NULL) {
            listNodePtr tmp = malloc(sizeof(listNode));
            tmp->nextItem = curPtr->nextItem;
            tmp->data.number = curPtr->data.number;
            curPtr->data.number = 1;
            curPtr->nextItem = tmp;
        }
    }
}

void list_print_all(listNodePtr head) {
    if (head == NULL) printf("List is empty\n");
    else {
        while (head != NULL) {
            list_data data = head->data;
            printf("%d ", data.number);
            head = head->nextItem;
        }
        printf("\n");
    }
}

void findNewInfo(list_data *toFind) {
    printf("Add new number: ");
    scanf("%d", &(*toFind).number);
}





