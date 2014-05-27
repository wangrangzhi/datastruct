
#define MAX_NUM_OF_KEY 8
#define RADIX 10
#define MAX_SPACE 100
struct SLCell
{
	KeysType keys[MAX_NUM_OF_KEY];
	InfoType otheritems;
	int next;
};
struct SLList
{
	
};