#include<stdio.h>
#include<math.h>

float f(float x){
	//return x*x*x-x-1;
	return 3*x+sin(x)-exp(x);
}

int main(){
	float x0=0,x1=1,x2,x3,h;
	int itr=0,maxItr=20;
	float error=0.0001;

	do{
		h=f(x0)/((f(x1)-f(x0))/(x1-x0));
		if(fabs(h)<=error){
			printf("Root is %f\n",x0);
			break;
		}
		float t=x0;
		x0=x1;
		x1=t-h;
	}while(itr<=maxItr);
	return 0;
}