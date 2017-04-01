#include<stdio.h>
int main(){
	int n=5;
	//float x[]={0.1,0.2,0.3,0.4,0.5};
	float x[]={0,1,2,3,4};
	//float y[]={0.09983,0.19867 ,0.29552,0.38942,0.47943};
	float y[]={1,7,23,55,109};
	//float diff[]={0.09983,0.19867 ,0.29552,0.38942,0.47943};
	float diff[]={1,7,23,55,109};
	float xf=0.5,num=1,den=1,ans=0;
	float h=x[1]-x[0];
	float r=(xf-x[0])/h;
	int i,j,k=1;
	ans=y[0];
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			diff[j]=diff[j+1]-diff[j];
		}
		num*=r;
		r-=1;
		den*=k;
		k+=1;
		ans+=(num/den)*diff[0];
	}
	printf("%f",ans);
	return 0;
}