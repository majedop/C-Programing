#include <stdio.h>
int main()
{
    FILE * inputFile= fopen("input.txt", "r");
    FILE * outputFile= fopen("output.txt", "w");

    if(inputFile==NULL)
    {
        fprintf(outputFile,"Not found");
        return 0;
    }
    int n,i,sum=0;
    fscanf(inputFile,"%d",&n);
    int arr[n];
    for(i=0; i<=n; i++)
    {
        fscanf(inputFile ,"%d",&arr[i]);
        sum+=arr[i]%10;
    }
    fprintf(outputFile,"Sum= %d",sum);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
