#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int tab[n][m]){
    int temp = tab[0][0];
    int wynik = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tab[i][j] < temp){
                temp = tab[i][j];
                wynik = j;
            }
        }
    }
    return wynik;

}
int main()
{
    int tab[3][3] = {{5,-3,4},{13,5,6},{4,6,-23}};
    printf("%d", minColIdx(3,3,tab));
    return 0;
}
