#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int evenSum(int n, int m, int **tab){
    int temp = 0;
    if((n <= 1) || (m<=1)){
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i%2 ==0) && (j%2==0)){
                    temp += tab[i][j];
                }
            }
        }
    }
    return temp;

}
int main(){
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    tab[0][0] = 1;tab[0][1] = 3;tab[0][2] = 1;
    tab[1][0] = 2;tab[1][1] = 1;tab[1][2] = 4;
    tab[2][0] = 1;tab[2][1] = 5;tab[2][2] = 1;

    printTable(3,3,tab);
    printf("%d", evenSum(3,3,tab));
}
