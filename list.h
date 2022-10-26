//
// Created by zhenya on 26.10.2022.
//

#ifndef UNTITLED20_LIST_H
#define UNTITLED20_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct data{
    int number;
}list_data;

typedef struct listNode{
    list_data data;
    struct listNode *nextItem;
}listNode;

typedef listNode *listNodePtr;

void list_insert(listNodePtr *, list_data);
void list_add_multiplicity_7(listNodePtr *);
void list_delete_multiplicity_5(listNodePtr *);
void list_print_all(listNodePtr head);
void findNewInfo(list_data *);

#endif //UNTITLED20_LIST_H
