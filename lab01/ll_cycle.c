#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node* q;
    node* p;
    p = head;
    if(head==NULL)
    	return 0;

    q=p->next;
    if(q==NULL)
    	return 0;
    while(p!=q){
        if(q->next!=NULL && q->next->next!=NULL)
        	q=q->next->next;
        else{
        	return 0;
        }
        p=p->next;
    }

    return 1;
}
