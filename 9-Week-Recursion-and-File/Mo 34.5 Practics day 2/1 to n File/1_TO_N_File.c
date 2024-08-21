#include <stdio.h>
int main()
{
    FILE * inputFile= fopen("input.txt", "r");
    FILE * outputFile= fopen("output.txt", "w");
    if(inputFile==NULL)
    {
        printf("Invalid input file");
    }

    int n,i;
    fscanf(inputFile,"%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        fscanf(inputFile,"%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        fprintf(outputFile,"%d ",arr[i]);
    }
 return 0;
}
