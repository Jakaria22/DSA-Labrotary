#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	vector<int>v={1,2,3,4};
	cout<<"Initial elements of vector: "; 
	for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
	//update element
	v.at(1)=34;
	cout<<"\nVector elements after update: ";
	 for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
	 //remove the last element
	 v.pop_back();
    // final vector
    cout << "\nVector after remove last element: ";
    for (int i=0;i<v.size();i++) 
    cout <<v[i]<<" ";

}
