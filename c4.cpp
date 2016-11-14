int *etv,*ltv;
int *stack2;
int top2;
Status TopologicalSort(GraphAdjList GL){

	EdgeNode *E;
	int i,k,gettop;
	int top=0;
	int count=0;
	int *stack;
	stack=(int*)malloc(Gl->numVertexves*sizeof(int));
	for (i = 0; i < GL->numVertexves; ++i)
		if (GL->adjList[i]==0)
			/* code */stack[++top]=i;
	top2=0;
	etv=(int *)malloc(GL->numVertexves*sizeof(int));
	for (i = 0; i < count; ++i)
	{
		/* code */etv[i]=0;
	}
	stack2=(int *)malloc(Gl->numVertexves*sizeof(int));
	while(top)
	{
		gettop=stack[top--];
		count++;
		stack2[++top2]=gettop;
		for (e=GL->adjList[gettop].firstedge; e; e=e->next)
		{
			/* code */
			k=e->adjvex;
			if (!(--GL->adjList[k].in))
			{
				/* code */
				stack[++top]=k;

			}
			if (etv[gettop]+e->weight>etv[k])
			{
				/* code */
				etv[k]=etv[gettop]+e->weight;
			}
		}
		if (count<GL->numVertexves)
		{
			/* code */
			return ERROR;
		}
		else
			return OK;
	}


}
void CriticalPath(GraphAdjList GL){
	EdgeNode *e;
	int i,gettop,k,j;
	int ele,lte;
	TopologicalSort(GL);
	ltv=(int *)malloc(GL->numVertexves*sizeof(int));
	for ( i = 0; i < GL->numVertexves; ++i)
	{
		/* code */
		ltv[i]=etv[GL->numVertexves-1];

	}
	while(top2!=0)
	{
		gettop=stack2[top2--];
		for (e = GL->adjList[gettop].firstedge; e; e=e->next)
		{
			k=e->adjvex;
			if(ltv[k]-e->weight<ltv[gettop])
				ltv[gettop]=ltv[k]-e->weight;		/* code */
		}
	}	
	for (j = 0; j < GL->numVertexves; ++j)
	{
		/* code */
		for (e=GL->adjList[j].firstedge; e; e=e->next)
		{
			k=e->adjvex;
			ete=etv[j];
			lte=ltv[k]-e->weight;
			if(ete==lte)
				printf("%s\n", "find!");
		}
	}
}
