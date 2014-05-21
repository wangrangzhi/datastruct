void Creat_SeqFromFile(SSTable &ST, char* filename){
	int i;
	FILE *f;
	f = fopen(filename, "r");
	fscanf(f, "%d", &ST.length);
	ST.elem = (ElemType*)calloc(ST.length+1, sizeof(ElemType));
	if(!ST.elem)
		exit(OVERFLOW);
	for(i = 1; i<=ST.length;i++)
		InputFromFile(f, ST.elem[i]);

	fclose(f);	
}

void Ascend(SSTable &ST)
{
	int i, j, k;
	for(i=1; i<ST.length; i++)
	{
		k = i;
		ST.elem[0] = ST.elem[i];
		for(j = i+1; j<=ST.length; j++)
			if LT(ST.elem[j].key, ST>elem[0].key)
			{
				k = j;
				ST.elem[0] = ST.elem[j];
			}

		if(k != i)
		{
			ST.elem[k] = ST.elem[i];
			ST.elem[i] = ST.elem[0];
		}

	}	
}

void Creat_OrdFromFile(SSTable &ST, char* filename)
{
	Creat_SeqFromFile(ST, filename);
	Ascend(ST);
}

Status Destroy(SSTable &ST)
{
	
}