#include<stdio.h>
int main()
{
	double principal = 250000.00;
	float rate = 8.5;
	int time = 3;
	float I,A,MI;
	I = (principal * rate * time)/100.0;
	A= principal + I;
	MI = A/(time * 12.0);
	printf("============= BANK LOAN INTEREST SUMMARY =============\n");
	printf("Principal Amount: \tPKR %.2lf\n", principal);
	printf("Annual Interest Rate: \t%.2lf%%\n", rate);
	printf("Loan Duration: \t%d Years (36 Months)\n", time);
	printf("------------------------------------------------------\n");
	printf("Total Accrued Interest:\tPKR %.2lf \n", I);
	printf("Total Payable Amount:\tPKR %.2lf \n", A);
	printf("Monthly Installment:\tPKR %.2lf \n", MI);
	printf("======================================================\n");
return 0;
}