#include <iostream>
void swap(int&x,int&y);
int main()
{
	int a,b;
	std::cout<<"Enter an integer:";
	std::cin>>a;
	std::cout<<"Enter an integer:";
	std::cin>>b;
	std::cout<<"value before swapping:\n";
	std::cout<<"a="<<a;
	std::cout<<"b="<<b;
	std::cout<<"swapping the values...";
	swap(a,b);
	std::cout<<"values after swapping:\n";
	std::cout<<"a="<<a;
	std::cout<<"b="<<b;
	return 0;
}
void swap (int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
