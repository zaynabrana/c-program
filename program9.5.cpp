#include<iostream>
void factorial(int n);
int main()
{
	int num;
	std::cout<<"Enter a number:";
	std::cin>>num;
	factorial(num);
	return 0;
}
void factorial(int n)
{
	int i;
	long fact;
	fact=1;
	for(i=1;i<=n;i++)
	fact *=i;
	std::cout<<"Factorial of "<<n<<"is "<<fact;
}
