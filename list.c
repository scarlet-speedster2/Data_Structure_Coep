#include<stdio.h>
#include<stdlib.h>
#include"list.h"

void append(List *l){
	int d;
	printf("Enter the data to be appended");
	scanf("%d", &d);
	node* new = (node*) malloc(sizeof(node));
	if(!new) {
		printf("NO new allocation");
		return;
	}
	new->data = d;
	if(!*l){
		new->prev = NULL;
		new->next = NULL;
		*l = new;
	}
	else{
		node *temp;
		temp = *l;
		while(!temp){
			temp = temp ->next;
		}
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}

}


void init_List(List *l){
	*l = NULL;
	return;
}

void insert(List *l){
	return;
}

void traverse(List l){
	List temp;
	while(!temp){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	return;
}
