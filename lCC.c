#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358970323

extern float Rx(float x, float y, float centreOfOriginX, float centreofOriginY, float angle);
extern float Ry(float x, float y, float centreOfOriginX, float centreofOriginY, float angle);

int main(int argc, char **argv){
	
	for(int i = 1; i < 4; i++){
		if(argv[i] == NULL){
			return -1;
		}
	}

	float x, y, cX, cY, angle;
	x 	= atof(argv[1]);
	y 	= atof(argv[2]);
	cX  = atof(argv[3]);
	cY  = atof(argv[4]);
	angle 	= atof(argv[5]) * PI/180;
	
	/* NOTE: User input should be in the form:
	            "./a.out X Y CX CY A"
	*/
	
	float i = x-Cx;
    float j = y-Cy;
	
	printf("(%.2lf, %.2lf) -> (%.2lf, %.2lf)\n", x, y, Rx(i,j,cX,cY,angle), Ry(i,j,cX,cY,angle));

	return 0;
}

float Rx(float x, float y, float centreOfOriginX, float centreOfOriginY, float angle){return x*cos(angle) - y*sin(angle)+centreOfOriginX;}
float Ry(float x, float y, float centreOfOriginX, float centreOfOriginY, float angle){return x*sin(angle) + y*cos(angle)+centreOfOriginY;}
