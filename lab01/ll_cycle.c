#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(!head || !head->next) return 0;
    node* tortoise = head->next->next ; 
    node* hare  = head->next;
    while (tortoise && hare)
    {
        if(tortoise == hare ) return 1;
        if(! tortoise->next) return 0;
        tortoise = tortoise->next->next ;
        hare  = hare->next;
    }
    
    return 0;
}