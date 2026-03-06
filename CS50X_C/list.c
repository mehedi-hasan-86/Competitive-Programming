#include<stdio.h>
#include<stdlib.h>

int main(){

    // int list[3];
    int *list = malloc(3*sizeof(int));
    if(list==NULL){
        return 1;
    }

    // list[0] = 1;
    *list = 1;
    // list[1] = 2;
    *(list+1) = 2;
    // list[2] = 3;
    *(list+2) = 3;

    int *tmp =malloc(4*sizeof(int));
    if(tmp==NULL){
        free(list);
        return 1;
    }

    //Copy old list into new list
    for(int i=0; i<3; i++){
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    // Free original list
    free(list);

    list = tmp;

    for(int i=0; i<4; i++){
        printf("%i\n", list[i]);
    }
    free(list);

    return 0;
}