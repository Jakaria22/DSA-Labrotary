#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	vector<int>v={1,2,3,4};
	cout<<"Initial elements of vector: "; 
	for(int i=0;i<v.size();i++)cout<<v[i]<<' '; 
	//add new elemnents
	v.push_back(44);
	v.push_back(32);
	cout<<"\nVector elements after add new elements: ";
	for(int i=0;i<v.size();i++)cout<<v[i]<<' ';  
	//access elements
	cout<<"\nElements of 1 index:"<<v.at(1);//or use v[1]
	cout<<"\nElements of 3rd index: "<<v.at(3);//or use v[3]

}
