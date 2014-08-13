 #include"c1.h"
 #include"func7-1.cpp" 
 #include"func7-2.cpp" 
 #include"c7-1.h" 
 #include"bo7-1.cpp" 

typedef struct 
{
	int adjvex;
	VRType lowcost;
}minside[MAX_VERTEX_NUM];

int mininum(minsize SZ, MGraph G)
{
	int i = 0; j, k, min;
	while(!SZ[i].lowcost)
		i++;
	min = SZ[i].lowcost;
	k = i;
	for(j=i+1; j<G.vexnum; j++)
		if(SZ[j].lowcost>0 && SZ[j].lowcost<min)
		{
			min = SZ[j].lowcost;
			k = j;
		}
	return k;
}

void MiniSpanTree_PRIM(MGraph G, VRType u)
{
	int i, j, k;
	minsize closedge;
	k = LocateVex(G, u);
	for(j=0; j<G.vexnum; ++j)
	{
		closedge[j].adjvex = k;
		closedge[j].lowcost = G.arcs[k][j].adj;
	}
	closedge[k].lowcost = 0;
	printf("the minispan each lines is : \n");
	for(i=1; i<G.vexnum; ++i)
	{
		k = mininum(closedge, G);
		printf("(%s - %s)\n", G.vexs[closedge[k].adjvex].name, G.vexs[k].name);

		closedge[k].lowcost = 0;
		for(j=0; j<G.vexnum; ++j)
			if(G.arcs[k][j].adj<closedge[j].lowcost)
			{
				closedge[j].adjvex=k;
				closedge[j].lowcost = G.arcs[k][j].adj
			}
	}
}

