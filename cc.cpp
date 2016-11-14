#include <stdio.h>
void PrintContiSequence(int small,int big)
{
	for (int i = small; i <= big; ++i)
	{
		/* code */
		printf("%d ",i );
	}
	printf("\n");
}
void FindContinousSequence(int sum)
{
	if(sum<3)
		return;
	int small=1;
	int big=2;
	int middle=(sum+1)/2;
	int curSum=small+big;
	while(small<middle)
	{
		if(curSum==sum)
		{
		
			PrintContiSequence(small, big);
			big++;
			curSum+=big;
		}
		else if(curSum>sum&&small<middle)
				{
					curSum-=small;
					small++;
				//	if(curSum==sum)
				//		PrintContiSequence(small, big);
				}
				else
				{
					big++;
					curSum+=big;
				}
			
				/*while(curSum>sum&&small<middle)
				{
					curSum-=small;
					small++;
					if(curSum==sum)
						PrintContiSequence(small, big);
				}
					big++;
					curSum+=big;*/
	}
}

int main(void)
{
	int sum;
	scanf("%d",&sum);
	FindContinousSequence(sum);
}
