#include<stdio.h>
#include<math.h>
int main()
{
    int row,col,i,j,val;
int mat[10][10],trans[10][10];

printf("\n INPUT THE NO OF ROWS:");
scanf("%d",&row);
printf("\n INPUT THE NO OF COLOUMS:");
scanf("%d",&col);
for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        printf("INPUT VALUE FOR: %d : %d",i+1,j+1);
        scanf("%d",&val);
        mat[i][j]=val;
    }
}
printf("\n ENTER MATRIX AS FOLLOWS:\n");
for(i=0;i<row;i++) {
    for(j=0;j<col;j++) 
        printf("%d",mat[i][j]);
    print("\n");
}
for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        trans[i][j];
        }   
     }
     printf("\nTRANSPOSE OF MATRIX IS AS FOLLOWS: \n");
     for(i=0;i<col;i++) {
         for(j=0;j<row;j++) 
            printf("%d",trans[i][j]);
        printf("\n");
     }
return 0;
}
