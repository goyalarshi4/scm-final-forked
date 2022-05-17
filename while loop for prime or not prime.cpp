#include <iostream>
using namespace std;
main()
{
	int i,j,a,b,c=0;
	cout<<"number=";
	cin>>a;
	
	i=2;
	while(i<=a-1)
	{
	
		if(a%i==0)
		{
			c=1;
		}
		
		i=i+1;	
	}
	if(c==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
	
	
}
