#include<stdio.h>
int main(){
	int a,c=0,i;
	printf("no.=");
	scanf("%d",&a);
	for (i=0;i<=a;i++){
		if (a%i==0){
			c++;
		}
	}
	if (c==2){
		printf("prime");
	}
	else {
	printf("not prime");}
}
