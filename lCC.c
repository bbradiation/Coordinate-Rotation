#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358970323

extern float Rx(float x, float y, float angle);
extern float Ry(float x, float y, float angle);

int main(int argc, char **argv){
	
	for(int i = 1; i < 4; i++){
		if(argv[i] == NULL){
			return -1;
		}
	}

	float x, y, angle;
	x 	= atof(argv[1]);
	y 	= atof(argv[2]);
	angle 	= atof(argv[3]) * PI/180;
	printf("(%.2lf, %.2lf) -> (%.2lf, %.2lf)\n", x, y, Rx(x,y,angle), Ry(x,y,angle));

	return 0;
}

float Rx(float x, float y, float angle){return x*cos(angle) - y*sin(angle);}
float Ry(float x, float y, float angle){return x*sin(angle) + y*cos(angle);}

