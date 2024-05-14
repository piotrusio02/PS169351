#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int m, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int ** swapColumns(int **tab,int n, int m, int id1, int id2){
    int **temp = (int**)malloc(sizeof(int*));
    for(int i = 0; i<n;i++){
        temp[i] = (int*)malloc(sizeof(int));
        for(int j =0;j<m;j++){
            temp[i][j] = tab[i][j];
        }
    }

    if(id1 >= 0 && id1 < m && id2 >= 0 && id2 <m){
        for(int j=0;j<m;j++){
            int temp2 = temp[j][id1];
            temp[j][id1] = temp[j][id2];
            temp[j][id2] = temp2;
        }
    return temp;
    }
    else{
        return temp;
    }
}


int main(){
    int **temp = (int**)malloc(sizeof(int*)*4);
    temp[0] = (int*)malloc(sizeof(int)*4);
    temp[1] = (int*)malloc(sizeof(int)*4);
    temp[2] = (int*)malloc(sizeof(int)*4);
    temp[3] = (int*)malloc(sizeof(int)*4);

    temp[0][0] = 1;temp[0][1] = 2;temp[0][2] = 3;temp[0][3] = 3;
    temp[1][0] = 4;temp[1][1] = 5;temp[1][2] = 3;temp[1][3] = 6;
    temp[2][0] = 7;temp[2][1] = 8;temp[2][2] = 3;temp[2][3] = 5;
    temp[3][0] = 7;temp[3][1] = 8;temp[3][2] = 3;temp[3][3] = 5;
    printTable(4,4,temp);

    int **wynik = swapColumns(temp,4,4,0,2);
    printTable(4,4,wynik);

    return 0;
}
