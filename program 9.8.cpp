#include <iostream>
void cal(int a ,int b,char op);
int main()
{
	int x,y;
	char c;
	std::cout<<"Enter first number,operator and second number:";
	std::cin>>x>>c>>y;
	cal(x,y,c);
	return 0;
}
void cal(int a,int b,char op)
{
	switch(op)
	{
		case'+':
		std::cout<<a<<"+"<<b<<"="<<a+b;
		break;
		case'-':
		std::cout<<a<<"-"<<b<<"="<<a-b;
		break;
		case'*':
		std::cout<<a<<"*"<<b<<"="<<a*b;
		break;
		case'/':
		std::cout<<a<<"/"<<b<<"="<<a/b;
		break;
		case'%':
		std::cout<<a<<"%"<<b<<"="<<a%b;
		break;
		default:
		std::cout<<"invalid operators!";
		
	}
}
