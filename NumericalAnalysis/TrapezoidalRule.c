#include<stdio.h>

float f(float x){
	return 1/(1+x*x);
}
int main(){
	float a=0,b=6;
	int n=6;
	float ans=f(a)+f(b);
	float h=(b-a)/n;
	int i;
	for(i=1;i<n;i++){
		ans+=2*f(a+i*h);
	}
	ans*=(h/2);
	printf("%f",ans);
	return 0;
}