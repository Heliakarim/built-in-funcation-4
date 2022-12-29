#include<iostream>
using namespace std;
int evenodd();
int main()
{
	int num;
	num= evenodd();
	if(num%2==0)
	{
		cout<<num<<" is a even number";
	}
	else
	{
		cout<<num<<" is a odd number ";
	}
}
evenodd()
{
	int num;
	cout<<" ENTER A NUMBER TO CHECK ";
	cin>>num;
	
	return num;
	
}