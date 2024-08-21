#include <stdio.h>
int main()
{
    FILE * input_File= fopen("input.txt","r");
    FILE * output_File= fopen("output.txt","w");

    int n,i,j;
    fscanf(input_File,"%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>0; j--)
            fprintf(output_File," ");

        for(j=1; j<=n; j++)
            fprintf(output_File,"#");

        fprintf(output_File,"\n");
    }

    return 0;
}
