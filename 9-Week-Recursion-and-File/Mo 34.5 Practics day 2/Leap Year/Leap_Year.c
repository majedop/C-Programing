#include <stdio.h>
int main()
{
    FILE * input_File = fopen("input.txt", "r");
    FILE * output_File= fopen("output.txt", "a");

    int year;
    fscanf(input_File,"%d",&year);

    if((year %4==0) || (year%400==0 && year%100!=0))
        fprintf(output_File,"%d-->YES\n",year);
    else
        fprintf(output_File,"%d-->NO\n",year);

    return 0;
}
