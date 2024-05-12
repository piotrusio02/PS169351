#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m,int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

void swapItems(int n, int m, int **tab, int **tab2){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = tab[i][j];
            tab[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }

}

int main()
{
    int **tab = (int*)malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[0][0] = 1;tab[0][1] = 2;tab[0][2] = 3;
    tab[1][0] = 4;tab[1][1] = 5;tab[1][2] = 6;

    int **tab2 = (int*)malloc(sizeof(int*)*2);
    tab2[0]=(int*) malloc(sizeof(int)*3);
    tab2[1] = (int*)malloc(sizeof(int)*3);
    tab2[0][0] = 11;tab2[0][1] = 24;tab2[0][2] = 35;
    tab2[1][0] = 42;tab2[1][1] = 53;tab2[1][2] = 64;

    printTable(2,3,tab);
    printTable(2,3,tab2);
    swapItems(2,3,tab,tab2);
    printTable(2,3,tab);
    printTable(2,3,tab2);
    return 0;
}
