#include <stdio.h>
#include <stdlib.h>

int sumArray(int **tab, int n, int m)
{
    int temp = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            temp = temp + tab[i][j];
        }
    }
    return temp;

}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[1][0] = 4;
    tab[1][1] = 5;
    tab[1][2] = 6;
    printf("%d", sumArray(tab,2,3));
    return 0;
}
