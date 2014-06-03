
#define MAX_VERTEX_NUM 20
enum GraphKind{DG, DN, UDG, UDN};

struct ArcNode
{
	int adjvex;
	InfoType *info;
	ArcNode *nextarc;
};

typedef struct 
{
	VertexType data;
	ArcNode *firstarc;
}VNode, AdjList[MAX_VERTEX_NUM];

struct ALGraph
{
	AdjList vertices;
	int vexnum, arcnum;
	GraphKind kind;
};