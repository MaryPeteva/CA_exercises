#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
size_t getValue(char msg[]);
void printBoard(size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize]);
void fillBoard(size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize], char whiteSymbol[], char blackSymbol[]);
void setBoardField(size_t row, size_t col, size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize], char symbol[]);
void getKnightPosition(char msg[], size_t* row, size_t* col);
size_t* getPawnspositions(size_t *numberOfPawns);
 
int main()
{
    const size_t boardSize = getValue("Enter board size: "); 
    char whiteSymbol[] = "\u25A0";
    char blackSymbol[] = "\u25A1";
    size_t symbolSize = (strlen(whiteSymbol) + 1);
    char board[boardSize][boardSize][symbolSize];
    fillBoard(boardSize, symbolSize, board, whiteSymbol, blackSymbol);
 
    size_t knightRow = 0;
    size_t knightCol = 0;
    char knightSymbol[] = "\u2658";
    size_t knightSymbolSize = (strlen(knightSymbol) + 1);
 
    getKnightPosition("Enter knight position: ", &knightRow, &knightCol);
    setBoardField(knightRow, knightCol, boardSize, knightSymbolSize, board, knightSymbol);
    
    char pawnSymbol[] = "\u2659";
    size_t pawnSymbolSize = (strlen(knightSymbol) + 1);
    size_t numberOfPawns = 0;
    size_t *pawnsPositions = getPawnspositions(&numberOfPawns);
    
    for (size_t i = 0; i < (numberOfPawns * 2); i+=2)
    {
        setBoardField(pawnsPositions[i], pawnsPositions[i + 1], boardSize, pawnSymbolSize, board, pawnSymbol);
    }
    
 
    printBoard(boardSize, symbolSize, board);
    //const size_t pawns = getValue("Enter number of pawns: "); 
}
 
void fillBoard(size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize], char whiteSymbol[], char blackSymbol[])
{
    for (size_t row = 0; row < boardSize; row++)
    {
        for (size_t col = 0; col < boardSize; col++)
        {
            if (row % 2 == 0)
            {
                if (col % 2 == 0)
                {
                    setBoardField(row, col, boardSize, symbolSize, board, whiteSymbol);
                }
                else
                {
                    setBoardField(row, col, boardSize, symbolSize, board, blackSymbol);
                }
            }
            else if (row % 2 != 0)
            {
                if (col % 2 == 0)
                {
                    setBoardField(row, col, boardSize, symbolSize, board, blackSymbol);
                }
                else
                {
                    setBoardField(row, col, boardSize, symbolSize, board, whiteSymbol);
                }
            }    
        }
    }
}
 
void setBoardField(size_t row, size_t col, size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize], char symbol[])
{
    for (size_t i = 0; i < symbolSize; i++)
    {
        board[row][col][i] = symbol[i];
    }
}
 
size_t getValue(char msg[])
{
    size_t value = 0;
 
    printf("%s", msg);
    scanf("%zu", &value);
 
    return value;
}
 
void printBoard(size_t boardSize, size_t symbolSize, char board[boardSize][boardSize][symbolSize])
{
    for (size_t row = 0; row < boardSize; row++)
    {
        for (size_t col = 0; col < boardSize; col++)
        {
            
            printf("%5s", board[row][col]);
 
        }
        printf("\n");
    }
}
 
void getKnightPosition(char msg[], size_t* row, size_t* col)
{
    printf("%s", msg);
    scanf("%zu", row);
    scanf("%zu", col);
}
 
size_t* getPawnspositions(size_t *numberOfPawns)
{
    printf("Enter number of pawns: ");
    scanf("%zu", numberOfPawns);
 
    size_t *positions = malloc(sizeof(size_t) * (*numberOfPawns));
 
    for (size_t i = 0; i < ((*numberOfPawns) * 2); i += 2)
    {
        scanf("%zu", &positions[i]);
        scanf("%zu", &positions[i + 1]);
    }
    
    return positions;
}