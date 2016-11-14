Status TopologicalSort(GraphAdjList GL)
{
	EdgeNode *e;
	int i,k,gettop;
	int top=0;
	int count=0;
	int *stack;
	stack=(int *)malloc(GL->numVertexes*sizeof(int));
	for (i = 0; i < GL->numVertexes; ++i)
	{
		/* code */
		if(Gl->adjList[i].in==0)
			stack[++top]=i;
	}
	while(top!=0)
	{
		gettop=stack[top--];
		printf("%d ->",GL->adjList[gettop].data );
		count++;
		for (e= GL->adjList[gettop].firstedge; e; e=e->next)
		{
			/* code */
			k=e->adjvex;
			if(!(--GL->adjList[k].in))
				stack[++top]=k;
		}
	}
	if (count<GL->numVertexes)
	
		/* code */
		return ERROR;
	
	else
		return OK;

}