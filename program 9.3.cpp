#include<iostream>
void table(int n);
int main ()
{
	int num;
	std::cout<<"Enter a number:";
	std::cin>>num;
	table(num);
	return 0;
}
void table(int n)
{
	int c;
	for (c=1;c<=10;c++)
	{
		std::cout<<n*c;
	}
}
