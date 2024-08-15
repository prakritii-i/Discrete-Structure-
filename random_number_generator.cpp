#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
	int n,i,u=20,l=2;
	srand(time(NULL));
	for(i=1;i<10;i++){
		n=(rand()%(u-l)+1)+l;
		printf("%d ",n);
	}
	
}
