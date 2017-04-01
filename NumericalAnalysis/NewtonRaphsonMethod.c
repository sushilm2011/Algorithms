#include<stdio.h>
#include<math.h>

float f(float x){
	return x*x*x-8*x-4;
}

float fdash(float x){
	return 3*x*x-8;
}

int main(){
	float x0=3,x1=2,x2,x3,h;
	int itr=0,maxItr=20;
	float error=0.0001;

	do{
		h=f(x0)/fdash(x0);
		if(fabs(h)<=error){
			printf("Root is %f\n",x0);
			break;
		}
		x0-=h;
	}while(itr<=maxItr);
	return 0;
}