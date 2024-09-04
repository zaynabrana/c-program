#include<iostream>
int gcd(int x,int y);
int main()
{
	int a,b;
	std::cout<<"enter an integer:";
	std::cin>>a;
	std::cout<<"enter an integer:";
	std::cin>>b;
	std::cout<<"greatest common divisor is "<<gcd(a,b);
	return 0;
}
int gcd(int x,int y)
{
	int g,i,n;
	if(x<y)
	n=x;
	else
	n=y;
	for (i=1;i<=n;i++)
	if (x%i==0 && y%i==0 )
	g=i;
	return g;
}

