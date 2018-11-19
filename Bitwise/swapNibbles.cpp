#include<iostream>
using namespace std;

int swapNibbles(int x){
	return ((x&15)<<4) | ((x&240)>>4);
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		cout<<swapNibbles(N)<<endl;
	}
	return 0;
}