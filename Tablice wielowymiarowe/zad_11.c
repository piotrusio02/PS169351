#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int tab[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void revCols(int n, int m, int tab[n][m]){
    for(int i =0;i<n/2;i++){
        for(int j=0;j<m;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[n-1-i][j];
            tab[n-1-i][j] = temp;
        }
    }
}


int main(){
    int tab[3][3] = {{1,4,7},{2,5,8},{3,6,9}};
    printTable(3,3,tab);
    revCols(3,3,tab);
    printTable(3,3,tab);

    return 0;

}
