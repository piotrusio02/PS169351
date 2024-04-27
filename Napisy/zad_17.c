#include <stdio.h>
#include <stdlib.h>

void rmOdd(char nap[]){
    int i,j;
    for(i=0;nap[i] != '\0';i++){
        if (i % 2 != 0){
            for(j=i;nap[j] != '\0';j++){
                nap[j] = nap[j+1];
            }
            for(j=i;nap[j] != '\0';j++){
                nap[j+1] = nap[j+2];
            }
        }
    }
    nap[i] = '\0';
}

int main(){
    char nap[] = "T1o2 3T4e5s6t";
    rmOdd(nap);
    printf("%s\n", nap);
}
