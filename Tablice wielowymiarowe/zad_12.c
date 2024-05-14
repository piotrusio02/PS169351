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

void revColArr(int n, int m, int **tab){
    for(int i =0; i<n/2;i++){
        for(int j=0; j<m;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[n-1-i][j];
            tab[n-1-i][j] = temp;
        }
    }

}

int main(){
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    tab[0][0] = 1;tab[0][1] = 4; tab[0][2] = 7;
    tab[1][0] = 2;tab[1][1] = 5; tab[1][2] = 8;
    tab[2][0] = 3;tab[2][1] = 6; tab[2][2] = 9;

    printTable(3,3,tab);
    revColArr(3,3,tab);
    printTable(3,3,tab);
    return 0;

}
