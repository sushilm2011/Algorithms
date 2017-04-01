#include<stdio.h>
#include<math.h>

float f(float x){
	//return 3*x+sin(x)-exp(x);
	return cos(x)-x*exp(x);
}

int main(){
	float x0=0,x1=1,x2;
	int itr=0,maxItr=20;
	float error=0.0005;

	if(f(x0)*f(x1)<0){
		do{
			x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
			if(fabs(f(x2))<=error){
				printf("The Root is: %f",x2);
				break;
			}
			if(f(x2)*f(x0)<0){
				x1=x2;
			}else{
				x0=x2;
			}
			itr++;
		}while(itr<=maxItr);
	}else{
		printf("Root Doesn't Exist between the given values\n");
	}
	return 0;
}