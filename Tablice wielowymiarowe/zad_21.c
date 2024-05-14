#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int idxDiff(int **tab, int n){
    int najmniejsza = tab[0][0];
    int najwieksza = tab[0][0];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(najwieksza < tab[i][j]){
                najwieksza = tab[i][j];
            }
            if(najmniejsza > tab[i][j]){
                najmniejsza = tab[i][j];
            }
        }
    }
    return najwieksza - najmniejsza;



}


int main(){
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    tab[0][0]= 130;tab[0][1]= -30;tab[0][2]= 201;
    tab[1][0]= 331;tab[1][1]= 432;tab[1][2]= 833;
    tab[2][0]= 433;tab[2][1]= 330;tab[2][2]= 335;

    printTable(3, tab);
    printf("%d", idxDiff(tab,3));

    return 0;
}
