#include <iostream>
int mul(int,int);
int main()
{
	int i,x,y,r;
	for(i=1;i<=5;i++)
	{
		std::cout<<"Enter a pair of integer:";
		std::cin>>x>>y;
		r=mul(x,y);
		if(r==1)
		std::cout<<y<<"is multiple of"<<x;
		else
		std::cout<<y<<"is not multiple of "<<x;
	}
	return 0;
}
int mul(int a ,int b)
{
	if (b%a==0)
	return 1;
	else 
	return 0;
}
	
