#include<iostream>
float area (int b,int h)
int main ()
  {
	int base,height;
	float ar;
	std::cout<<"Enter base:";
	std::cin>>base;
	std::cout<<"Enter height:";
	std::cin>>height;
	ar=area(base,height);
	std::cout<<"Area of triangle is "<<ar;
	return 0;
	}
	float area (int b,int h)
	{
		float a;
		a=0.5*b*h;
		return a;
	}
