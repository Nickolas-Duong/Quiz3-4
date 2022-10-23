//main function - runs loop to check Lo Shu Magic Square until correct grid found
#include "MagicSquare.h"

//int main
int main()
{
    //local int array[3][3]
    int magicSquare[ROW][COL];

    //run Magic Square loop
    fillSquare(magicSquare, 1);

    //EXIT_SUCCESS
    return EXIT_SUCCESS;
}