#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int **tab){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void revRowArr(int n, int m, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m/2;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
        }
    }
}


int main(){
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    tab[0][0] = 1;tab[0][1]=2;tab[0][2]=3;
    tab[1][0] = 4;tab[1][1]=5;tab[1][2]=6;
    tab[2][0] = 7;tab[2][1]=8;tab[2][2]=9;

    printTable(3,3,tab);
    revRowArr(3,3,tab);
    printTable(3,3,tab);

    return 0;

}
