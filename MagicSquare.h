//Header file - Contains preset prototypes and libraries for main
#ifndef MS_H
#define MS_H

//libraries
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//function prototypes
bool checkRow(int array[3][3], int col);
bool checkCol(int array[3][3], int row);
bool checkUpDiag(int array[3][3]);
bool checkLowDiag(int array[3][3]);
bool checkCenter(int array[3][3]);
bool checkMagicSquare(int array[3][3]);

#endif