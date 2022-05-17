#include <iostream>
using namespace std;
main()
{
	int a;
	cout<<"a=";
	cin>>a;
	int b;
	
	
	int i=0;
	for(;a>0;)
	{
	
	b=a%10;
	i=i+b;
	
	a=a/10;
}

 
cout<<i;
cout<<"\n";
	
}
