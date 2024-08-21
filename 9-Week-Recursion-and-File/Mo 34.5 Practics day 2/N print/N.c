#include <stdio.h>
int main()
{
    FILE * input_File= fopen("input.txt", "r");
    FILE * output_File= fopen("output.txt","w");

    int n,i;
    fscanf(input_File,"%d",&n);
    for(int i=1; i<=n; i++)
    {
        fprintf(output_File,"%d ", i);
    }
    return 0;
}
