
typedef int VRType;
struct InfoType
{
	VRType weight;
};

void InputArc(InfoType* &arc)
{
	arc = (InfoType*)malloc(sizeof(InfoType));
	scanf("%d", &arc->weight);
}

void OutputArc(InfoType* arc)
{
	printf(": %d", arc->weight);
}

void InputArcFromFile(FILE* f, InfoType* &arc)
{
	
}