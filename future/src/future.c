#include <stdio.h>
#include <stdlib.h>

//values.txt
        //fscanf(file, "%f", &N[j]);
        // = malloc( 100001 * sizeof(float))
int main(){
    FILE *file = fopen("test69.txt", "r");
    float *N;
    int j = 1;
    int i = 1;
    while( j > 0){
        if(fscanf(file, "%f", &N[j]) != EOF){
            printf("hi");
            j++;
            i++;
        }
        else{
            j = 0;
        }

    }
}
