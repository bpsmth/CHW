/* Braden Smith
   10/4/2010
   arcos.c
   
*/

#include<stdio.h>
#include<math.h>
int main(void)
	{
	//double angle=M_PI
	float legone, legtwo,hypo,num;
	float pi=3.141592653589793238462643;
	double angle;
	printf("Enter first leg length:\n");
	scanf("%f",&legone);
	printf("Enter second leg length:\n");
	scanf("%f",&legtwo);
	printf("Enter hypotenuse length: \n");
	scanf("%f",&hypo);
	
	num=(((legtwo)*(legtwo))+((legone)*(legone))-((hypo)*(hypo)))/(2*legtwo*legone);
	angle= acos(num);
	angle=angle*(180/pi);
	printf("The angle is: %lf ",angle);
	
	}

