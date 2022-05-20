#include <stdio.h>

struct book{
	char name[20];
	float price;
	int pages;
};

void main(){
	struct book b1={"Dennis Ritchie",130.50,50};
	struct book*ptr;
	ptr=&b1;
	printf("%s\n",ptr->name);
	printf("%f\n",ptr->price);
	printf("%d\n",ptr->pages);
}
