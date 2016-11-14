#define MAXVEX 9
#define INFINITY 65535
typedef int Pathmatirx[MAXVEX];
typedef int ShortPathTable[MAXVEX];
void ShortestPath_Digikstra(MGraph G,int v0,Pathmatirx *P,ShortPathTable *D)
{
	int v,w,k,min;
	int final[MAXVEX];
	for (v = 0; v < G.numVertexes; ++v)
	{
		/* code */
		final[v]=0;
		(*D)[v]=G.matirx[v0][v];
		(*P)[v]=0;
	}
	(*D)[v0]=0;
	final[v0]=1;
	for (v = 1; v < G.numVertexes; ++v)
	{
		/* code */
		min=INFINITY;
		for (w = 0; w < G.numVertexes; ++w)
		{
			/* code */
			if (!final[w]&&(*D)[w]<min)
			{
				/* code */
				k=w;
				min=(*D)[w];
			}
		}
		final[k]=1;
		for (w = 0; w < G.numVertexes; ++w)
		{
			/* code */
			if (!final[w]&&(min+G.matirx[k][w]<(*D)[w]))
			{
				/* code */
				(*D)[w]=min+G.matirx[k][w];
				(*P)[w]=k;
			}
		}
	}
}