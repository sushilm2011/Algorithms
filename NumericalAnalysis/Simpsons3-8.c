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
	if(n%3==0){
		for(i=1;i<n;i++){
			if(i%3==0){
				ans+=2*f(a+i*h);
			}else{
				ans+=3*f(a+i*h);
			}
		}
	}
	ans*=(3*h/8);
	printf("%f",ans);
	return 0;
}