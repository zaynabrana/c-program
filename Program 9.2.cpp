#include<iostream>
void max(int a,int b);
int main()
{
	int x,y;
	std::cout<<"Enter two numbers:";
	std::cin>>x>>y;
	max(x,y);
	return 0;
}
void max(int a,int b)
{
	if(a>b)
	std::cout<<"maximum number is"<<a;
	else
	std::cout<<"maximum number is"<<b;
}
