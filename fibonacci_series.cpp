#include<stdio.h>
int fibo(int n){
	if (n<=1){
		return n;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int i,fib,n;
	printf("enter number of terms :");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		fib=fibo(i);
		printf("%d ",fib);
	}
}
