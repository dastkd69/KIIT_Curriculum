#include <stdio.h>

int data_write(){
    FILE *f;
    f = fopen("q1.txt", "w");
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++)
            fprintf(f, "%d\t", i*j+3);
        fprintf(f, "\n");
    }
    fclose(f);
    return 0;
}

void main(){
    printf("Creating file q1.txt...\n");
    data_write();
    printf("Successfully created file!\n");
}

