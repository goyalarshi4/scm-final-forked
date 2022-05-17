#include <iostream>
using namespace std;
main()
{
	int a,c;
	cout<<"the value of a=";
	cin>>a;
	int b;
	cout<<"the value of b=";
	cin>>b;
	int i;
	cout<<"Press 1 for Addition"
	"\nPress 2 for Subtraction "
	"\nPress 3 for Multiplication"
	"\nPress 4 for Division";
	cin>>i;
	switch(i)
	{
		case 1:
			c=a+b;
			cout<<c;
			break;
	    case 2:
			c=a-b;
						cout<<c;
			break;
		case 3:
			c=a*b;
			cout<<c;
			break;
	    case 4:
			c=a/b;
			cout<<c;
			break
	}
	
}
