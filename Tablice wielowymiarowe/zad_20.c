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

void revOddCol(int n, int m, int tab[n][m]){
    for(int i = 0; i<n/2;i++){
        for(int j=1;j<m;j=j+2){

                int temp = tab[i][j];
                tab[i][j] = tab[n-1-i][j];
                tab[n-1-i][j] = temp;

        }
    }


}


int main(){
    int tab[4][4] = {{2,3,-3,6},{1,4,7,3},{-3,-6,11,4},{-2,8,23,2}};
    printTable(4,4,tab);
    revOddCol(4,4,tab);
    printTable(4,4,tab);
    return 0;
}
