#include<stdio.h>
#include<stdlib.h>
#include"list.h"


void main(){

	List l;
	init_List(&l);
	append(&l);
	append(&l);
	traverse(l);
}
