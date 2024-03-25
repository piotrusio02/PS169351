#include <stdio.h>
#include <stdlib.h>

double averange(int n, int tab[]){
    double suma = 0;
    for(int i=0;i<n;i++){
        suma += tab[i];
    }
    return suma/2;

}

int main(){
    int tab[] = {1,2,3,4};
    printf("%.2lf\n", averange(4, tab));
    return 0;
}
