typedef char KeyType;
struct ElemType
{
	KeyType key;
	int weight;
};

void Visit(ElemType c)
{
	printf("(%c,%d)", c.key, c.weight);
}

void InputFromFile(FILE* f, ElemType &c)
{
	
}