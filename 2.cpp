#include<stdio.h>
int main(){
	int i,j,temp;
	for ( i = 1; i <=4; ++i)
	{
		/* code */
		temp=0;
		for (j = 0; j < 5; ++j)
		{
			/* code */
			temp+=i;
			printf("%5d",temp );
		}
		printf("\n");
	}
	return 0;
}
