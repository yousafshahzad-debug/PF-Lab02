#include<stdio.h>
int main()
{
	double basic_sal = 85000.00;
	double hra,ma,gs,itd,ns;
	hra = (0.20 * basic_sal);
	ma = (0.10 * basic_sal);
	gs = basic_sal + hra + ma;
	itd = (0.05 * gs);
	ns = gs - itd;
	printf("============= MONTHLY SALARY SLIP =============\n");
	printf("Basic Salary: \t\t\t  PKR %.2lf\n", basic_sal);
	printf("House Rent Allowance (20%%):\tPKR %.2lf\n", hra);
	printf("Medical Allowance (10%%):\t PKR %.2lf\n", ma);
	printf("-----------------------------------------------\n");
	printf("Gross Salary:  \t\tPKR %.2lf\n", gs);
	printf("Tax Deduction (5%%):\t PKR %.2lf\n", itd);
	printf("-----------------------------------------------\n");
	printf("Net Payable Salary:\t PKR %.2lf\n", ns);
	printf("===============================================\n");
return 0;
}