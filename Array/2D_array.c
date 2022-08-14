#include<stdio.h>
int main() 
{
    int n,m,row,col; 
    printf("Enter number of row: "); 
    scanf("%d",&n);
    printf("Enter number of coloume: "); 
    scanf("%d",&m); 
    int a[n][m];
    printf("Enter values:\n");
    for(row=0;row<n;row++) 
    {
        for(col=0;col<m;col++) 
        {
            scanf("%d",&a[row][col]);
        }
    } 
    printf("The elements of 2D array:\n"); 
    for(row=0;row<n;row++) 
    {
        for(col=0;col<m;col++) 
        {
            printf("%d ",a[row][col]);
        } 
        printf("\n");
    } 
}
