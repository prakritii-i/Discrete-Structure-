#include<stdio.h>
int fact(int n){
	if (n!=0){
		return n*fact(n-1);
	}else{
		return 1;
	}
}
int main(){
	int i,fib,n;
	printf("enter number of terms :");
	scanf("%d",&n);
	
		printf("%d ",fact(n));
	}

