#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int tab[n][m]){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

void flipDiag(int n, int m, int tab[n][m]){
    if(n == m){
        for(int i =0;i<n/2;i++){
            for(int j=0;j<m/2;j++){
                if(i == j){
                    int temp = tab[i][j];
                    tab[i][j] = tab[n-1-i][m-1-j];
                    tab[n-1-i][m-1-j] = temp;
                }
            }
        }
    }

}

int main(){
    int tab[3][3]= {{2,3,-3},{1,4,7},{-3,-6,11}};
    printTable(3,3,tab);
    flipDiag(3,3,tab);
    printTable(3,3,tab);
    printf("----\n");
    int tab1[5][5]= {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    printTable(5,5,tab1);
    flipDiag(5,5,tab1);
    printTable(5,5,tab1);
    printf("----\n");
    int tab2[3][2] = {{1,2},{3,4},{5,6}};
    printTable(3,2,tab2);
    flipDiag(3,2,tab2);
    printTable(3,2,tab2);
}
