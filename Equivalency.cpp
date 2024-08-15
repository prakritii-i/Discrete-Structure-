#include<stdio.h>
int main()
{
	int p,q,r,notporq;
	printf("p\tq\tr\t\comp~   conj^	OR|	!q\t!p\t!p|q\t!p|q==p&q	 \n");
	for (p=0;p<2;p++)
	{
		for (q=0;q<2;q++){
		for (r=0;r<2;r++)
		{
			printf("\n%d \t%d\t%d",p,q,r);
			printf("\t%d",~p); // one's compliment 
			printf("\t%d",p&q);// conjunction and
			printf("\t%d",p|q);// disjunction or v
			//printf("\t%d",p|q);//OR 
			printf("\t%d",!q);
			printf("\t%d",!p);
			notporq=!p|q;
			printf("\t%d",notporq);// disjunction or v not p or q
				if(notporq==p&q)
		{
			printf("\teqv ");
		}
		else 
		printf("\tnot eqv");
		}}
		}
	/*for (q=0;q<2;q++){
		for (r=0;r<2;r++)
		{
			if(notporq==p&q)
		{
			printf("logically equivalent ");
		}
		else 
		printf("not logically equivalent ");
		}}*/
			
}

