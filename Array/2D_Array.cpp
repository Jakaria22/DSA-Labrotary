#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    int n,m,row,col; 
    cout<<"Enter number of row: "; 
    cin>>n;
    cout<<"Enter number of coloume: "; 
    cin>>m; 
    int a[n][m];
    cout<<"Enter values:\n";
    for(row=0;row<n;row++) 
    {
        for(col=0;col<m;col++) 
        {
            cin>>a[row][col];
        }
    } 
    cout<<"The elements of 2D array:\n"; 
    for(row=0;row<n;row++) 
    {
        for(col=0;col<m;col++) 
        {
            cout<<a[row][col]<<' ';
        } 
        cout<<'\n';
    } 
}
