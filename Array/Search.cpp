#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    int n,i,k; 
    cout<<"Enter number of elements: "; 
    cin>>n; 
    int a[n];
    cout<<"Enter elements of Array:\n";
    for(i=0;i<n;i++) 
    cin>>a[i];
    cout<<"Enter the element to be searched: "; 
    cin>>k;
    for(i=0;i<n;i++) 
    {
        if(a[i]==k)
        break;
    } 
    if(i<n)
    cout<<"Found element "<<k<<" at "<<i+1<<" position";
    else cout<<"Not found";
}
