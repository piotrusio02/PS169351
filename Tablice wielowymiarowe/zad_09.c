#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void revRows(int n, int m, int tab[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m/2;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
        }
    }
}

int main()
{
    int tab[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
    int tab2[3][4] =  {{2,3,4,5},{1,2,3,4},{6,7,8,9}};
    printTable(3,3,tab);
    revRows(3,3,tab);
    printTable(3,3,tab);
    printTable(3,4,tab);
    revRows(3,4,tab);
    printTable(3,4,tab);
    return 0;
}
