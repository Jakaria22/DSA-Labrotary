#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    int n,i,k,x; 
    cout<<"Enter number of elements: "; 
    cin>>n; 
    int a[n];
    cout<<"Enter elements of Array:\n";
    for(i=0;i<n;i++) 
    cin>>a[i];
    cout<<"Enter the the position to be updated: "; 
    cin>>k;
    cout<<"Enter the value to be updated: "; 
    cin>>x;
    cout<<"Before update: "; 
    for(i=0;i<n;i++) 
    cout<<a[i]<<' '; 
    a[k-1]=x;
    cout<<"\nAfter update: "; 
    for(i=0;i<n;i++) 
    cout<<a[i]<<' ';
}
