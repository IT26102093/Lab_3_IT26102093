#include <stdio.h>

int main(){

	double dam_height,water_flow,mass_per_second;
	const double Efficiency = 0.9;
	const double gravity = 9.8;
	const double water_density = 1000.0;
	
	printf("Enter the height of the dam: ");
	scanf("%lf", &dam_height);

	printf("Enter the water flow form top to bottom: ");
	scanf("%lf", &water_flow);

	mass_per_second = water_flow * water_density;
	double work = mass_per_second*gravity*dam_height;
	double power = Efficiency * work;
	double megawatts = power / 1000000.0;

	printf("Megawatts Produced: %.2f MW\n", megawatts);


return 0;
}
