#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;

typedef struct node* List;

void append(List *l);
void insert(List *l);
void traverse(List l);
void init_List(List *l);
