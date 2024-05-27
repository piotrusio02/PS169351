#include <stdio.h>
#include <stdlib.h>

struct Country {
    char napis[30];
    int area;

};

int zadanie (struct Country temp[], int size){
    int najwieksza = 0;
    for(int i =0;i<size;i++){
        if (temp[i].area>najwieksza){
            najwieksza = temp[i].area;
        }
    }
    return najwieksza;
}
int main()
{
    struct Country kanada ={"Kanada", 9984670};
    struct Country kazachstan ={"Kazachstan", 2780400};
    struct Country czechy ={"Czechy", 78867};
    struct Country polska ={"Polska", 312696};
    struct Country rosja ={"Rosja", 17098242}; //najwieksza
    struct Country portugalia ={"Portugalia", 92090};

    struct Country kraje[] = {kanada,kazachstan,czechy,polska,rosja,portugalia};
    int size = sizeof(kraje)/sizeof(kraje[0]);
    int najwieksza = zadanie(kraje,size);
    printf("%d", najwieksza);
    return 0;
}
