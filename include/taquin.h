#ifndef __TAQUIN__
#define __TAQUIN__

#include <MLV/MLV_all.h>

#define GAME "Taquin"
#define DEFAULT "hugo.jpg"
#define IMG_DIR "ressources/images/"
#define FONT_PATH "ressources/fonts/Montserrat.ttf"
#define SIZE_PATH 20
#define FONT_SIZE 20
#define NB_LIG 4
#define NB_COL 4
#define RES 512
#define CELL (int)RES/((NB_COL+NB_LIG)/2)

typedef struct Carre{
    int lig;
    int col;
} Carre ;

typedef struct Plateau {
    Carre bloc[NB_COL][NB_LIG];
} Plateau ;

void initialisationPlateau(Plateau *P);
void mixPlateau(Plateau *P);
void gameLoop(Plateau *P, MLV_Image *img);
void gameComp();

#endif