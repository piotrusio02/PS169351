#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int tab[n][n]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void transpose(int n, int tab[n][n]){
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }


}

int main(){
    int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printTable(3,tab);
    transpose(3,tab);
    printTable(3,tab);
}
