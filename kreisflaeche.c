#include <stdio.h>

#define PI 3.14

int main()
{
	
	float kreisRadius, flaecheninhalt;	

	printf("Bitte geben Sie den Radius des Kreises an: ");
	scanf("%f", &kreisRadius);

	flaecheninhalt = kreisRadius * kreisRadius * PI;

	printf("Der Flaecheninhalt betraegt: %.2f\n", flaecheninhalt);	
	
	return 0;
}



