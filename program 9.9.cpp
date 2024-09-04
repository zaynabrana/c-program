#include<iostream>
void shape(int,char);
int main()
{
	int num;
	char ch;
	std::cout<<"\nEnter a number:";
	std::cin>>num;
	std::cout<<"Enter a character:";
	std::cin>>ch;
	shape(num,ch);
	return 0;
}
void shape (int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		std::cout<<c;
	}
}
