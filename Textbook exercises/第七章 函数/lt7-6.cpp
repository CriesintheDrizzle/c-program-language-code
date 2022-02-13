#include<stdio.h>
int main()
{
	void print();
	void print_star();
	
	print_star();
	print();
	print_star();
	
	return 0;
}

void print_star()
{
	printf("****************\n");
}
void print()
{
	printf("This is a program\n");
}
