#include <stdio.h>

#define MaxLength 100
#define MaxLineNumber 10

void GetLine();

int ExitCheck = 1;
int MaxLineLength = 0, WhichLine = 0;
int LineCounter = 0;

char EachLine[MaxLineNumber][MaxLength];

int main()
{
    while (ExitCheck != 0 && LineCounter <= MaxLineNumber-1)
    {
        GetLine();
    }
    printf(EachLine[WhichLine-1]);
    return 0;
}

void GetLine()
{
    int __CHAR, LengthCounter = 0;
    while ( (__CHAR = getchar()) != '\n' && LengthCounter < MaxLength )
    {
        if (__CHAR == EOF)
        {
            ExitCheck = 0;
            break;
        }
        EachLine[LineCounter][LengthCounter] = __CHAR;
        LengthCounter++;
    }
    EachLine[LineCounter][LengthCounter] = '\0';
    if (LengthCounter + 1 > MaxLineLength)
    {
        MaxLineLength = LengthCounter;
        WhichLine = LineCounter + 1;
    }
    LineCounter++;
}