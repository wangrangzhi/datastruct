 // algo7-6.cpp 实现算法7.10、7.11的程序
 #include"c1.h"
 #include"func7-1.cpp" 
 #include"func7-4.cpp" 
 #include"c7-2'.h" 
 #include"bo7-2.cpp" 

int count,lowcount = 1;
int low[MAX_VERTEX_NUM], loworder[MAX_VERTEX_NUM];

int visited[MAX_VERTEX_NUM];

void DFSArticul(ALGraph G, int v0)
{
	int min, w;
	ArcNode *p;
	visited[v0] = min = ++count;
	for(p=G.vertices[v0].firstarc; p; p=p->nextarc)
	{
		w=p->data.adjvex;
		if(visited[w]==0)
		{
			DFSArticul(G, w);
			if(low[w]<min)
				min=low[w];
			else if (low[w]>=visited[v0])
				printf("%d %s\n", v0, G.vertices[v0].data.name);
		}
		else if(visited[w]<min)
			min = visited[w];
	}
	low[v0] = min;
	loworder[v0] = lowcount++;
}

void FindArticul(ALGraph G)
{
	int i, v;
	ArcNode *p;
	count = 1;
	visited[0] = count;
	for(i=1; i<G.vexnum; ++i)
		visited[i] = 0;
	p = G.vertices[0].firstarc;
	v = p->data.adjvex;
	DFSArticul(G, v);
	if(count<G.vexnum)
	{
		printf("%d %s\n", 0, G.vertices[0].data.name);
		while(p->nextarc)
		{
			p = p->nextarc;
			v = p->data.adjvex;
			if(vexited[v] == 0)
				DFSArticul(G, v);
		}
	}
}