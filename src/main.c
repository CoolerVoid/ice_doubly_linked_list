/* Doubly Linked List implementation */
#include <stdio.h>
#include <stdlib.h>
#include "../lib/ice_doubly_linked.h"

int main(void) 
{

	void *x=NULL;
	ice_dl_node *n=ice_create_dl_node(0,x);

	Insert_dl_in_last(n,2,x); 
	Insert_dl_in_last(n,4,x); 
	Insert_dl_in_last(n,6,x); 
	Insert_dl_in_last(n,8,x);
	Insert_dl_in_last(n,10,x);
	Insert_dl_in_last(n,12,x);
	Insert_dl_in_last(n,14,x);
	Insert_dl_in_last(n,16,x);

	fifo_dl_list_dbg(n); 
	lifo_dl_list_dbg(n);

	puts("Delete position 8");
	Delete_dl_by_position(8,n);

	fifo_dl_list_dbg(n); 
	lifo_dl_list_dbg(n);

	ice_clear_dl(n);

}
