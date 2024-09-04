#include<iostream>
int sqr(int n);
int cube(int n);
int main()
{
	int a,b,r;
	std::cout<<"Enter an integer:";
	std::cin>>a;
	std::cout<<"Enter an integer:";
	std::cin>>b;
	r=sqr(a)+cube(b);
	std::cout<<"Result="<<r;
	return 0;
}
int sqr(int n)
{
	return n*n;	
	
}
int cube(int n)
{
	return n*n*n;
}

