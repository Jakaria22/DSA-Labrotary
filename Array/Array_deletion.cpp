#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    int n,i,k; 
    cout<<"Enter number of elements: "; 
    cin>>n; 
    int a[n];
    cout<<"Enter of Array:\n";
    for(i=0;i<n;i++) 
    cin>>a[i];
    cout<<"Enter the position which value will be deleted: "; 
    cin>>k; 
    
    for(int i=k;i<n;i++)
    {
        a[i-1]=a[i];
    } 
    n--; 
    cout<<"After deletion the values\n"; 
    for(i=0;i<n;i++) 
    cout<<a[i]<<' ';
}
