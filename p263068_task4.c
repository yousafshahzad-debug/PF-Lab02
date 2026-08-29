#include<stdio.h>
int main()
{
	int num;
	char ch;
	float fl_num;
	double bigfl_num;
	num = 42;
	ch = 'M';
	fl_num = 3.142;
	bigfl_num = 67.676767;
	
	printf("Type Name\tVariable Value\t\tSize in Memory\n");
	printf("-------------------------------------------------------\n");
	printf("char\t\t\'%c\'\t\t\t  %zu\n", ch,sizeof(ch));
	printf("int\t\t %d\t\t\t  %zu\n", num,sizeof(num));
	printf("float\t\t%f\t\t  %zu\n", fl_num,sizeof(fl_num));
	printf("double\t\t%fl\t\t  %zu\n", bigfl_num,sizeof(bigfl_num));
	printf("-------------------------------------------------------\n");
return 0;
}