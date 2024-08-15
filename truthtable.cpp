#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,r;
	printf(" p\tq\tr\n\n");
	for(p=0;p<2;p++){
		for(q=0;q<2;q++){
			for(r=0;r<2;r++)
			{
				printf(" %d\t%d\t%d\n",p,q,r);
			}
		}
	}
	return 0;
}
/*output
p  q
0  0
0  1
1  0
1  1
*/

