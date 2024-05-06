#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int m, int ** tab){
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (j % 2 == 0){
                temp = temp + tab[i][j];
            }
        }
    }
    return temp;
}


int main()
{
    int ** tab = malloc(4*sizeof(int*));
    tab[0] = malloc(4*sizeof(int));
    tab[1] = malloc(4*sizeof(int));
    tab[2] = malloc(4*sizeof(int));
    tab[3] = malloc(4*sizeof(int));
    tab[0][0] = 1; tab[0][1] = 23; tab[0][2] = 2;  tab[0][3] = 3;
    tab[1][0] = 3;  tab[1][1] = 24; tab[1][2] = 4;  tab[1][3] = 3;
    tab[2][0] = 5;  tab[2][1] = 26; tab[2][2] = 6; tab[2][3] = 3;
    tab[3][0] = 7;  tab[3][1] = 26; tab[3][2] = 8; tab[3][3] = 3;
    printf("%d", funkcja(4,4,tab));

}
