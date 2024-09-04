#include<iostream>
char grade(int m);
int main()
{
	int marks;
	char g;
	std::cout<<"Enter marks:";
	std::cin>>marks;
	g=grade(marks);
	std::cout<<"your grade is "<<g;
	return 0;		
}
char grade (int m)
{
	if (m>80)
	return 'A';
	else if (m>60)
	return 'B';
	else if (m>40)
	return 'C';
	else
	return 'F';
}
