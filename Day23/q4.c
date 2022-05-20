#include<stdio.h>

struct book{
	char name[25];
	char author[25];
	int cost;
};

void display(struct book*p)
{
	printf("%s %s %d\n",p->name,p->author,p->cost);
}

void main(){
	struct book p={"Ray","Dvalin",2128106};
	display(&p);
}
