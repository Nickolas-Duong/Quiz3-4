//Contains function definitions for Magic Square
#include "MagicSquare.h"

//checkRow - loops and checks if a row is correct
bool checkRow(int array[ROW][COL], int col)
{    
    //int count
    int count = 0;

    //for col
    for(int i = 0; i < 3; i++)
    {     
        //count = count + array[int][col]
        count = count + array[i][col];
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
bool checkCol(int array[3][3], int row)
{    
    //int count
    int count = 0;

    //for col
    for(int i = 0; i < 3; i++)
    {     
        //count = count + array[int][col]
        count = count + array[row][i];
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
bool checkUpDiag(int array[3][3])
{    
    //if [3,1] + [1,3] == 10
    if((array[3][1] + array[1][3]) == 10)
        //return true
        return true;
    //else
    else
        //return false
        return false;
}
//checkLowDiag - checks top to bottom diagonal
bool checkLowDiag(int array[3][3])
{    //if [1,1] + [3,3] == 10
    if((array[1][1] + array[3][3]) == 10)
        //return true
        return true;
    //else
    else
        //false
        return false;
}

//checkCenter - checks if center is a 5 (needed to be a magic square)
bool checkCenter(int array[3][3])
{   
    //if [2,2] is a 5, return true
    if(array[2][2] == 5)
        return true;
    //else false
    else
        return false;
}

//checkMagicSquare - checks if array is correct
bool checkMagicSquare(int array[3][3])
{   
    //count
    int count = 0;
    //calls above functions to work
    if(checkCenter(array) == true)
    {
        //increment count
        count++;
        //check for rows
        for(int i = 0; i < 3; i++)
        {
            //check if true
            if(checkRow(array, i) == true)
            {
                count++;
            }
            //break loop if any are false
            else
            {
                break;
            }
        }

        //check cols
        for(int i = 0; i < 3; i++)
        {
            //check if true
            if(checkCol(array, i) == true)
            {
                count++;
            }
            //break loop if any are false
            else
            {
                break;
            }
        }
        
        //check diags
        if(checkUpDiag(array) == true && checkLowDiag == true)
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