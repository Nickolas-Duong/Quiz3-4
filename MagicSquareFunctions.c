//Contains function definitions for Magic Square
#include "MagicSquare.h"

//checkRow - loops and checks if a row is correct
bool checkRow(int array[ROW][COL], int col)
{    
    //int count
    int count = 0;

    //for col
    for(int i = 0; i < ROW; i++)
    {     
        //count = count + array[int][col]
        count = count + array[i][col];
        //printf("Count: %d\n", count);
    }
    //if count == 15
    if(count == 15)
    {
        //return true
        return true;
    }
    //else
    else
    {
        //return false
        return false;
    }
}
//checkCol - same as checkRow but for columns
bool checkCol(int array[ROW][COL], int row)
{    
    //int count
    int count = 0;

    //for col
    for(int i = 0; i < COL; i++)
    {     
        //count = count + array[int][col]
        count = count + array[row][i];
        //printf("Count: %d\n", count);
    }
    //if count == 15
    if(count == 15)
    {
        //return true
        return true;
    }
    //else
    else
    {
        //return false
        return false;
    }
}

//checkUpDiag - checks bottom to top diagonal
bool checkUpDiag(int array[ROW][COL])
{    
    //if [3,1] + [1,3] == 10
    if((array[2][0] + array[0][2]) == 10)
        //return true
        return true;
    //else
    else
        //return false
        return false;
}
//checkLowDiag - checks top to bottom diagonal
bool checkLowDiag(int array[ROW][COL])
{    //if [1,1] + [3,3] == 10
    if((array[0][0] + array[2][2]) == 10)
        //return true
        return true;
    //else
    else
        //false
        return false;
}

//checkCenter - checks if center is a 5 (needed to be a magic square)
bool checkCenter(int array[ROW][COL])
{   
    //if [1,1] is a 5, return true
    if(array[1][1] == 5)
        return true;
    //else false
    else
        return false;
}

//checkMagicSquare - checks if array is correct
bool checkMagicSquare(int array[ROW][COL])
{   
    //count
    int count = 0;
    //calls above functions to work
    if(checkCenter(array) == true)
    {
        //increment count
        //check for rows
        for(int i = 0; i < ROW; i++)
        {
            //check if true
            if(checkRow(array, 0) == true)
            {
                count++;
            }
        }

        //check cols
        for(int i = 0; i < COL; i++)
        {
            //check if true
            if(checkCol(array, i) == true)
            {
                count++;
            }
        }
        
        //check diags
        if(checkUpDiag(array) == true && checkLowDiag(array) == true)
        {
            count = count + 2;
        }

        if(count != 8)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    //else
    //return false
    else
    {
        return false;
    }
    //if count == 8
        //return true
}

void fillSquare(int array[ROW][COL], int loop)
{
    time_t t;
    srand((unsigned) time(&t));
    bool unique = true;
    int randNum;
    
    do
    {   
        //print loopCount
        printf("Current loop test: %d\n", loop);

        //for loop
        for(int i = 0; i < ROW; i++)
        {
            for(int j = 0; j < COL; j++)
            {   
                //Fill array
                do
                {
                    unique = true;
                    randNum = (rand() % 9) + 1;
                    for(int k = 0; k <= i; k++)
                    {   
                        for(int l = 0; l <= COL; l++)
                        {
                            if(randNum == array[k][l])
                            {
                                unique = false;
                                //break;
                                //printf("sus\n");
                            }
                        }
                    }
                }
                while(!unique);

                array[i][j] = randNum;
                //printf("%d \n", array[i][j]);
            //make sure array has no dupes
        
            //run checkSquare
            //if pass then exit loop
            //else
                //loopCount++}}
            }
        }
        //break;
        if(checkMagicSquare(array) != true )
        {            
            for (int i = 0; i < ROW; i++)
            {
                for(int j = 0; j < COL; j++)
                {
                    array[i][j] = 0;
                }
            }
            
            loop++; 
        }
        else
        {
            printf("Lo Shou Magic Square Match Found!\n");
            for(int i = 0; i < ROW; i++)
            {
                if(i == 0)
                {
                    printf("-----------------\n");
                }

                for(int j = 0; j < COL; j++)
                {
                    printf("| %d | ", array[i][j]);
                    if(j == 2)
                    {
                        printf("\n");
                    }
                }

                if(i == 2)
                {
                    printf("-----------------\n");
                }
            }
        }
    
    }while(checkMagicSquare(array) != true);
}