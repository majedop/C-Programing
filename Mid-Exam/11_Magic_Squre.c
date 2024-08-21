#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
 
int main() {
 
    int mtrx[3][3];
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) 
        scanf("%d",&mtrx[i][j]);
    }
 
    int sum=0,sum1=0,sum2=0,sum3=0;
    bool ok1=false,ok2=false;
 
    //for diagonal number:
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum3+=mtrx[i][j];
            }
        }
 
    }
    sum=sum3;
 
    // for column number:
    for(int i=0;i<3;i++){
        sum1=0;
        for(int j=0;j<3;j++)sum1+=mtrx[i][j];
        if(sum==sum1){
            ok1=true;
        }else{
            ok1=false;
            break;
        }
 
    }
 
    //for row number:
    for(int i=0;i<3;i++){
        sum2=0;
        for(int j=0;j<3;j++)sum2+=mtrx[j][i];
        if(sum==sum2){
            ok2=true;
        }else{
            ok2=false;
            break;
        }
 
    }
 
 
    if(sum1==sum2 && sum2==sum3 && ok1 && ok2)
    printf("Yes\n");
    else 
    printf("No\n");
 
 
 
    return 0;
}
