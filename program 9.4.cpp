#include<iostream>
void value (int);
int main ()
{
	int x;
	std::cout<<"Enter an integer:";
	std::cin>>x;
	value(x);
	return 0;
}
void value (int x)
{
	int p,n;
	p=x-1;
	n=x+1;
	std::cout<<"The number before"<<x<<"is "<<p;
	std::cout<<"The number before"<<x<<"is"<<n;
}
