#define SIZE 100
struct SLNode
{
	RedType rc;
	int next;
};

struct SLinkListType
{
	SLNode r[SIZE];
	int length;
};