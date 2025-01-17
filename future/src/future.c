#include <stdio.h>
#include <stdlib.h>
#define H 1000000000

//values.txt
        //
        //
int main(){
    float *N = malloc(H * sizeof(float));
    printf("hi\n");
    if(N==NULL){
        fprintf(stderr, "error\n");
        return 1;
    }
    printf("hi\n");
    char *M;
    printf("hi\n");
    scanf("%s", M);
    printf("hi\n");
    FILE *file = fopen("test69.txt", "r");
    printf("hi\n");
    
    int j = 1;
    printf("hi\n");
    int i = 0;
    printf("hi\n");
    while( j > 0){
        printf("hi\n");
        fscanf(file, "%f", &N[j]);
        printf("hi\n");
        if(fscanf(file, "%f", &N[j]) != EOF){
            printf("hi\n");
            j++;
            printf("hi\n");
            i++;
            printf("hi\n");
        }
        else{
            printf("hi\n");
            j = 0;
        }
        printf("hi\n");
    }
    printf("hi\n");
    free(N);
    fclose(file);
}
