#include<stdio.h>
#include<math.h>

float f(float x){
	return x*sin(x)-1;
	//return 3*x+sin(x)-exp(x);
}

int main(){
	float x0=1,x1=2,x2,x3;
	int itr=0,maxItr=20;
	float error=0.001;

	if(f(x0)*f(x1)<0){
		x2=(x0+x1)/2;
		do{
			if(f(x2)*f(x0)<0){
				x1=x2;
			}else{
				x0=x2;
			}
			x3=(x0+x1)/2;
			if(fabs(x3-x2)<=error){
				printf("The Root is: %d %f",itr,x2);
				break;
			}
			x2=x3;
			itr++;
		}while(itr<=maxItr);
	}else{
		printf("Root Doesn't Exist between the given values\n");
	}
	return 0;
}