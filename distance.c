#include<stdio.h>
int main(){
	double speed,time;
	double distance;
	double meters,centimeters,millimeters;
	
	printf("enter speed in km: ");
	scanf("%lf",&speed);
	
	printf("enter time in hours: ");
	scanf("%lf",&time);
	
	distance=speed*time;
	
	meters= distance * 1000;
	centimeters= distance * 10000;
	millimeters= distance * 100000;
	
	printf("\n---conversion values---\n");
	printf("distance in meters: %.2f m\n",meters);
	printf("distance in centimeters: %.2f cm\n",centimeters);
	printf("distance in millimeters: %.2f mm\n",millimeters);
	return 0;
}
