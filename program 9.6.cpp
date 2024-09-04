#include<iostream>
void prime(int num)
{
	int c,p=1;
	for(c=2;c<=num/2;c++)
	if (num%c==0)
	{
		p=0;
		break;
	}
	if(p==1)
	std::cout<<num<<"is a prime number.";
	else
	std::cout<<num<<"is a composite number.";
}
int main ()
{
	int n;
	std::cout<<"Enter an integer:";
	std::cin>>n;
	prime(n);
	return 0;
}
