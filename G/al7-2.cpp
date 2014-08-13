 // algo7-2.cpp 邻接表存储结构的深度优先和广度优先搜索遍历
 #include"c1.h"
 #include"func7-1.cpp" 
 #include"func7-4.cpp" 
 #include"c7-2'.h" 
 #include"bo7-2.cpp" 

Boolean visited[MAX_VERTEX_NUM];
 void DFS(ALGraph G,int v,void(*Visit)(VertexType))
 {
 	ArcNode *p;
 	visited[v] = TRUE;
 	Visit(G.vertices[v].data);
 	for(p=G.vertices[v].firstarc; p; p=p->next)
 		if(!visited[p->data.adjvex])
 			DFS(G, p->data.adjvex, Visit);
 }

void DFSTraverse(ALGraph G, void(*Visit)(VertexType))
{
	int v;
	for(V=0; v<G.vexnum; v++)
		visite[v] = FALSE;
	for(v=0; v<G.vexnum; v++)
		if(!visited[v])
			DFS(G, v, Visit);
	printf("\n");
} 

 typedef int QElemType; 
 #include"c3-2.h" 
 #include"bo3-2.cpp" 

 void BFSTraverse(ALGraph G, void(*Visit)(VertexType))
 {
 	int v, u;
 	ArcNode *p;
 	LinkQueue Q;
 	for(v=0; v<G.vexnum; ++v)
 		visited[v] = FALSE;
 	InitQueue(Q);
 	for(v=0; v<G.vexnum; v++)
 		if(!visited[v])
 		{
 			visited[v] = TRUE;
 			Visit(G.vertices[v].data);
 			EnQueue(Q, v);
 			while(!QueueEmpty(Q))
 			{
 				DeQueue(Q, v);
 				for(p=G.vertices[u].firstarc; p; p=p->next)
 					if(!visited[p->data.adjvex])
 					{
 						visited[p->data.adjvex] = TRUE;
 						Visit(G.vertices[p->data.adjvex].data);
 						EnQueue(Q, p->data.adjvex);
 					}
 			}
 		}
 		printf("\n");
 }