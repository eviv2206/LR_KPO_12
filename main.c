#include <stdio.h>
#include "list.h"

int main() {
    int choice = 10;
    listNodePtr head = NULL;
    list_data data;
    while ( choice != 0){
        printf("1 - add\n");
        printf("2 - do\n");
        printf("3 - print\n");
        printf("0 - exit\n \n");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                findNewInfo(&data);
                list_insert(&head, data);
                list_print_all(head);
                break;
            case 2:
                list_delete_multiplicity_5(&head);
                list_add_multiplicity_7(&head);
                list_print_all(head);
                break;
            case 3:
                list_print_all(head);
                break;
            case 0:
                break;
            default: choice = 10;
        }
    }
}
