typedef int Pathmatirx[MAXVEX][MAXVEX];
typedef int ShortPathTable[MAXVEX][MAXVEX];
void ShorttestPath_Floyd(MGraph G,Pathmatirx *p,ShortPathTable *D)
{
	int v,w,k;
	for (v = 0; v < G.numVertexes; ++v)
	{
		/* code */
		for (w = 0; w < G.numVertexes; ++w)
		{
			/* code */
			(*D)[v][w]=G.numVertexes;
			(*P)[v][w]=w;
		}
	}
	for (k = 0; k < G.numVertexes; ++k)
	{
		/* code */
		for (v = 0; i < G.numVertexes; ++v)
		{
			/* code */
			for (w = 0; w < G.numVertexes; ++w)
			{
				/* code */
				if ((*D)[v][w]>(*D)[v][k]+(*D)[k][w])
				{
					/* code */
					(*D)[v][w]=(*D)[v][k]+(*D)[k][w];
					(*P)[v][w]=(*P)[v][k];
				}
			}
		}
	}
}