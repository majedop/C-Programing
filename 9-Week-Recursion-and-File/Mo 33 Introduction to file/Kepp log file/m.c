#include <stdio.h>
int main()
{
    FILE* logFile;
    FILE* inputFile= fopen("sdgdlg.txt","r");
    logFile = fopen("log.txt","a");
    if(inputFile==NULL)
    {
        fprintf(logFile,"Input File is not found at 10:20 AM\n");
        return 0;
    }


    return 0;
}
