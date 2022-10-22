//Contains function definitions for Magic Square

//checkRow - loops and checks if a row is correct
    //int count
    //for col
        //count = count + array[int][col]

    //if count == 15
        //return true
    //else
        //return false

//checkCol - same as checkRow but for columns
    //int count
    //for row
        //count = count + array[row][int]
    
    //if count == 15
        //return true
    //else
        //false

//checkUpDiag - checks bottom to top diagonal
    //if [3,1] + [1,3] == 10
        //return true
    //else
        //return false

//checkLowDiag - checks top to bottom diagonal
    //if [1,1] + [3,3] == 10
        //return true
    //else
        //false

//checkCenter - checks if center is a 5 (needed to be a magic square)
    //if [2,2] is a 5, return true
    //else false
    
//checkMagicSquare - checks if array is correct
    //calls above functions to work
