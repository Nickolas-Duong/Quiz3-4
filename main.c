//main function - runs loop to check Lo Shu Magic Square until correct grid found
#include "MagicSquare.h"

//int main
int main()
{
    //local int array[3][3]
    int magicSquare[ROW][COL];
    int test[ROW][COL];
    test[0][0] = 4;
    test[0][1]=9;
    test[0][2]=2;
    test[1][0] = 3;
    test[1][1]=5;
    test[1][2]=7;
    test[2][0] = 8;
    test[2][1]=1;
    test[2][2]=6;
    
    //while loop
    //printf("%d\n", checkMagicSquare(test));
    fillSquare(magicSquare, 1);

    //EXIT_SUCCESS
    return EXIT_SUCCESS;
}