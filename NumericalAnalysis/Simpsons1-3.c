#include<stdio.h>

float f(float x){
	return x; //function here
}

int main(){
	int i,n;
	float a,b,h,ans=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the value of a-Lower Limit\n");
	scanf("%f",&a);
	printf("Enter the value of b-Upper Limit\n");
	scanf("%f",&b);
	h=(b-a)/n;
	ans=f(a)+f(b);
	for(i=1;i<n;i++){
		if(i&1)
			ans+=4*f(a+i*h);
		else
			ans+=2*f(a+i*h);
	}
	ans*=h/3;
	return 0;
}
