#include<iostream>
using namespace std;
void evenodd();
int main()
{
	evenodd();
	return 0;
}
void evenodd()
{
	int num;
	cout<<" ENTER A NUMBER "<<endl;
	cin>>num;
	if(num%2==0)
	cout<<" THE NUMBER IS EVEN "<<endl;
	else
	cout<<" THE NUMBER IS ODD "<<endl;
	
}