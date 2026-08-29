#include<stdio.h>
int main()
{
	float radius = 7.5;
	float pi = 3.14159;
	float dia,circum,area;
	dia = 2 * radius;
	circum = 2 * pi * radius;
	area = pi * radius * radius;
	printf("============= CIRCLE GEOMETRY REPORT =============\n");
	printf("Given Radius: \t %.3f cm\n", radius);
	printf("Calculated Diameter:\t%.3f cm\n", dia);
	printf("Calculated Circumference:\t%.3f cm\n", circum);
	printf("Calculated Area:\t%.3f sq.cm\n", area);
	printf("==================================================\n");
return 0;
}