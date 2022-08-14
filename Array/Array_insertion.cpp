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
    cout<<"Enter the position which value will be added: "; 
    cin>>k; 
    cout<<"Enter inserted value: ";
    cin>>x;
    cout<<"Before insert elements of Array:\n";
    for(i=0;i<n;i++) 
    cout<<a[i];
    i=n;
    n=n+1;
    while(i>=k) 
    {
       a[i+1]=a[i];
       i-=1;
} 
    a[k]=x;
    cout<<"After insertion  the elements of arrays\n"; 
    for(i=0;i<n;i++) 
    cout<<a[i]<<' ';
}
