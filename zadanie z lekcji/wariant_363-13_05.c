#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct VideoGame{
    char * title;
    char platform[20];
    int releaseYear;
    int isMultiplayer;
};

int main() {
    struct VideoGame assassins= {"AC IV: Black Flag", "playstation 3", 2013, 1};

    struct VideoGame gta;
    gta.title = "GTA VI";
    strcpy(gta.platform, "playstation 5");
    gta.releaseYear = 2025;
    gta.isMultiplayer = 1;

    printf("tytul: %s,\nplatforma: %s,\ndata wydania: %d,\ntryb wieloosobowy: %d,\n\n", gta.title, gta.platform, gta.releaseYear, gta.isMultiplayer);
    printf("tytul: %s,\nplatforma: %s,\ndata wydania: %d,\ntryb wieloosobowy: %d,\n\n", assassins.title, assassins.platform, assassins.releaseYear, assassins.isMultiplayer);


    return 0;
}

