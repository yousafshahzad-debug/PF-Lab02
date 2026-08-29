#include<stdio.h>
int main()
{
	float pf_m;
	int pf_ch;
	float calc_m;
	int calc_ch;
	float phys_m;
	int phys_ch;
	float tws,wap;
	int tch;
	
	pf_m = 88.0;
	pf_ch = 3;
	calc_m = 76.5;
	calc_ch = 3;
	phys_m = 82.0;
	phys_ch = 2;
	
	tws = (pf_m * pf_ch) + (calc_m * calc_ch) + (phys_m * phys_ch);
	tch = pf_ch + calc_ch + phys_ch;
	wap = tws/tch;
	
	printf("============= SEMESTER ACADEMIC REPORT =============\n");
	
	printf("Course\t\tCredit Hours\tObtained Marks\n");
	
	printf("----------------------------------------------------\n");
	
	printf("Programming Fund.\t%d\t\t%.2f\n", pf_ch,pf_m);
	
	printf("Calculus\t\t%d\t\t%.2f\n", calc_ch,calc_m);
	
	printf("Applied Physics\t\t%d\t\t%.2f\n", phys_ch,phys_m);
	
	printf("----------------------------------------------------\n");
	
	printf("Total Credits:  %d\tWeighted Average:  %.2f%%\n", tch,wap);
	
	printf("====================================================\n");

return 0;
}