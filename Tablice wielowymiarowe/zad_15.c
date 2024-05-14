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

int oddAvg(int n, int m, int **tab){
    int temp = 0;
    int temp1 = 0;
    if(n <= 1 || m <= 1){
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i%2 != 0) && (j%2 != 0)){
                    temp += tab[i][j];
                    temp1++;
                }
            }
        }
    }
    int wynik = temp/temp1;
    return wynik;

}

int main(){
    int **tab = (int**)malloc(sizeof(int*)*5);
    tab[0] = (int*)malloc(sizeof(int)*5);
    tab[1] = (int*)malloc(sizeof(int)*5);
    tab[2] = (int*)malloc(sizeof(int)*5);
    tab[3] = (int*)malloc(sizeof(int)*5);
    tab[4] = (int*)malloc(sizeof(int)*5);

    tab[0][0] = 1;tab[0][1] = 1;tab[0][2] = 1;tab[0][3] = 1;tab[0][4] = 1;
    tab[1][0] = 1;tab[1][1] = 4;tab[1][2] = 1;tab[1][3] = 6;tab[1][4] = 1;
    tab[2][0] = 1;tab[2][1] = 1;tab[2][2] = 1;tab[2][3] = 1;tab[2][4] = 1;
    tab[3][0] = 1;tab[3][1] = 4;tab[3][2] = 1;tab[3][3] = 6;tab[3][4] = 1;
    tab[4][0] = 1;tab[4][1] = 1;tab[4][2] = 1;tab[4][3] = 1;tab[4][4] = 1;

    printTable(5,5,tab);
    printf("%d", oddAvg(5,5,tab));
    printf("\n\n");
    int **tab2 = (int**)malloc(sizeof(int*)*2);
    tab2[0] = (int*)malloc(sizeof(int)*1);
    tab2[1] = (int*)malloc(sizeof(int)*1);
    tab2[0][0] = 2;
    tab2[1][0] =2;

    printTable(2,1,tab2);
    printf("%d", oddAvg(2,1,tab2));
    return 0;
}
