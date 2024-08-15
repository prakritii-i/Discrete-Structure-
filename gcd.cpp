#include<stdio.h>
int gcd(int a, int b){
	if (a==0) return b;
	if (b==0) return a;
	if (a>b){
		return gcd(a%b,b);
	}else{
		return gcd(a, b%a);
	}
}
int main(){
	int a,b,g;
	printf("enter 2 numbers to find gcd:");
	scanf("%d%d",&a,&b);
	g=gcd(a,b);
	printf("GCD=%d",g);
}
