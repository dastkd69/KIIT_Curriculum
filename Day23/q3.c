#include<stdio.h>

struct book{
	char name[25];
	char author[25];
	int cost;
};
void displayInd(char*s,char*t,int c){
	printf("%s %s %d\n",s,t,c);
}
void displayEntire(struct book b){
	printf("%s %s %d\n",b.name,b.author,b.cost);
}
void main(){
	struct book p={"RAY DVALIN","RESEARCHER", 2128106};
	displayInd(p.name,p.author,p.cost);
	displayEntire(p);
}

