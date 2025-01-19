#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char fname[20];
    scanf("%s",fname);
    FILE *file = fopen(fname, "r");
    if(file == NULL){
        printf("error\n");
        return 1;
    }
    float z = 0;
    float y = 0;
    float avrg;
    float ttl = 0;
    int *i;
    int *M = malloc(sizeof(int));
    char name[20];
    scanf("%s",name);
    if(strcmp(name, "window") != 0){
        scanf("%d", M);
        for(i = 0; i < M; i++){
            while(fscanf(file,"%f", &y) != EOF){
                ttl = ttl + y;
                z ++;
            }
        }
    }
    else{
        printf("ho");
        int t = 0;
        for(i = 0; t < 2; t++){
            while(fscanf(file,"%f", &y) != EOF){
                ttl = ttl + y;
                z ++;
            }
        }
    }

    avrg = ttl / z;
    printf("The Simple Moving Average is :%.2f\n", avrg);
    fclose(file);
}
