#include <stdio.h>
int main()
{
    FILE * input_File= fopen("input.txt", "r");
    FILE * output_File= fopen("output.txt", "w");

    int t;
    fscanf(input_File,"%d",&t);
    while(t--)
    {
        int n,i;
        fscanf(input_File,"%d",&n);
        if(n>=-n)
        {
           while(n>=-)
           {
               fprintf(output_File,"%d ",n);
               n--;
           }
           fprintf(output_File,"\n");
        }
        else
        {
            while(n<=(-n))
            {
                fprintf(output_File,"%d ",n);
                n++;
            }
            fprintf(output_File,"\n");
        }

    }


    return 0;
}
