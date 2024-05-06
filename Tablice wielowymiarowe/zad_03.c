#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[][m])
{
    int maxwartosc = tab[0][0];
    int temp;
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            if (tab[i][j] > maxwartosc){
                maxwartosc = tab[i][j];
                temp = i;

            }
        }
    }
    return temp;
}


int main()
{
  int tab[3][3] = { {10,40,3}, {7,140,8}, {10,400,3}};
  printf("%d", maxRowIdx(3,3,tab));
}
