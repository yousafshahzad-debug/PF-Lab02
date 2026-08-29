#include<stdio.h>
int main()
{
	float vi = 12.5;
	float a = 3.2;
	float t = 6.0;
	float vf,s;
	vf = vi + (a * t);
	s = (vi * t) + (0.5 * a * t * t);
	printf("============= KINEMATICS MOTION REPORT =============\n");
	printf("Initial Velocity (vi): \t%.2f m/s\n", vi);
	printf("Acceleration (a): \t%.2f m/s^2\n", a);
	printf("Time elapsed (t): \t%.2f s\n", t);
	printf("----------------------------------------------------\n");
	printf("Calculated Final Velocity (vf): \t%.2f m/s\n", vf);
	printf("Calculated Distance (s): \t%.2f m\n", s);
	printf("===================================================\n");
return 0;
}