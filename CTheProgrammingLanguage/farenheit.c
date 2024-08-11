#include<stdio.h>


int main(){
	/* declare my variables*/
	char message1[] = "farenheit to celcius";	
	char message2[] = "celcius to farenheit";
	
	/* farenheit to celcius */
	
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("%s\n",message1);
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;}

	/* celcius to farenheit */

	
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("%s\n",message2);
	while (celsius <= upper) {
		fahr = (celsius * 9 / 5) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;}
}

