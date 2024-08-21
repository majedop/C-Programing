#include <stdio.h>
int main()
{
    FILE * input_File;
     FILE *output_File;

    input_File= fopen("input.txt", "r");

    output_File= fopen("output.txt","w");
    while(1)
    {
        char ch= fgetc(input_File);
        if(ch==EOF)
            break;

      fputc(ch,output_File);
    }




    return 0;
}
