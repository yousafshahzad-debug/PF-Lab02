#include<stdio.h>
int main()
{
//temperature conversion
	float celcius,farenheit,kelvin;
	celcius = 37.5;
	farenheit = (celcius * 9.0/5.0) + 32.0;
	kelvin = celcius + 273.15;
	printf("============= TEMPERATURE CONVERSION =============\n");
	printf("Temperature in Celcius: \t%.2f °C\n", celcius);
	printf("Temperature in Farenheit: \t%.2f °F\n", farenheit);
	printf("Temperature in Kelvin: \t%.2f K\n", kelvin);
	printf("==================================================");
return 0;
}
	