
int Partition(SqList &L, int low, int high)
{
	KeyType pivotkey;
	pivotkey = L.r[low].key;
	L.r[0] = L.r[low];
	while( low < high )
	{
		while( low<high && L.r[high].key >= pivotkey)
			--high;
		L.r[low] = L.r[high];
		while(  low < high && L.r[low].key <= pivotkey)
			++low;
		L.r[high] = L.r[low];
	}
	L.r[low] = L.r[0];
	return low;
}