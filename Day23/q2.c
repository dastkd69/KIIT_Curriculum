#include<stdio.h>

struct book{
	char name[20];
	float price;
	int pages;
};

void main(){
	struct book*ptr,b[5];
	int i;	
	ptr=b;
	for(i=0;i<5;i++){
		printf("\nEnter Book Name: ");
		scanf("%s",ptr[i].name);
		printf("Enter Book Price: ");
		scanf(" %f", &ptr[i].price);
		printf("Enter Book Pages: ");
		scanf(" %d", &ptr[i].pages);
	}
	printf("\n*******************************************\n");
	for(i=0;i<5;i++)
		printf("*\t%s\t*\t%f\t*\t%d\t*\n",ptr[i].name,ptr[i].price,ptr[i].pages);
	printf("\n*******************************************\n");
}
