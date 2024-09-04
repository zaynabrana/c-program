#include<iostream>
void area(float s)
{
	float a;
	a=s*s;
	std::cout<<"Area="<<a;
}
void perimeter(float s)
{
	float p;
	p=s*4;
	std::cout<<"perimeter="<<p;
}
int main ()
{
	float side;
	std::cout<<"Enter the length of sides:";
	std::cin>>side;
	area(side);
	perimeter(side);
	return 0;
	}
