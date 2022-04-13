#include<stdio.h>

int main(){
    int o,p;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&o,&p);
    if(o!=p){
        printf("Invalid order of the matrix, it should be the same.\n");
        return 0;
    }
    int n[o][p];
    int i,j,t=0;
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0;i<o;i++){
        for(j=i+1;j<p;j++){
            if(n[i][j]!=n[j][i]){
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }
    
    printf("The matrix is symmetric.\n");
    return 0;
}