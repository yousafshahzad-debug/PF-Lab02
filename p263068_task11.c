#include<stdio.h>
int main()
{
	int t_q;
	int s_q;
	int cr_q;
	float t_up,s_up,cr_up,sub_t,sub_s,sub_cr,gst,fpa,tsub;
	
	t_q = 3;
	s_q = 4;
	cr_q = 2;
	t_up = 60.00;
	s_up = 40.50;
	cr_up = 120.00;
	
	sub_t = t_q * t_up;
	sub_s = s_q * s_up;
	sub_cr = cr_q * cr_up;
	tsub = sub_t + sub_s + sub_cr;
	gst = (0.16 * tsub);
	fpa = gst + tsub;
	
	printf("==================== FAST CAFETERIA RECIEPT ====================\n");
	printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
	printf("----------------------------------------------------------------\n");
	printf("Tea\t\t%d\t%.2f\t\t\t%.2f\n", t_q,t_up,sub_t);
	printf("Samosa\t\t%d \t%.2f \t\t\t%.2f\n", s_q,s_up,sub_s);
	printf("Chicken Roll    %d \t%.2f \t\t\t%.2f\n", cr_q,cr_up,sub_cr);
	printf("----------------------------------------------------------------\n");
	printf("Subtotal: \t\t\t\t\tPKR %.2f\n",tsub);
	printf("GST (16%%): \t\t\t\t\tPKR %.2f\n",gst);
	printf("----------------------------------------------------------------\n");
	printf("Grand Total:\t\t\t\t\tPKR %.2f\n", fpa);
	printf("=================== THANK YOU FOR YOUR VISIT ===================\n");
return 0;
}