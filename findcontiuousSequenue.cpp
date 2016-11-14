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
			PrintContiSequence(small,big);
		else
			if(curSum>small)
				{
					curSum-=small;
					small++
				}
				else
				{
					big++
					curSum+=big;
				}
	}
}
void PrintContiSequence(int small,int big)
{
	for (int i = small; i <= big; ++i)
	{
		/* code */
		printf("%d ",i );
	}
	printf("\n");
}
int main(void)
{
	int sum;
	scanf("%d",&sum)
	FindContinousSequence(sum);
}