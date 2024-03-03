#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    printf("podaj rok: ");
    scanf("%d", &rok);
    printf( (rok % 4 == 0) ? ((rok % 100 != 0 || rok % 400 ==0) ? "Jest przestepny." : "Nie jest przestepny.") : "Nie jest przestepny."  );
    return 0;
}
