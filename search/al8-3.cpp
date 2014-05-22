 #include"c1.h"
 #include"func8-3.cpp" 
 #include"c8-1.h" 
 #include"c8-2.h" 
 #include"bo8-1.cpp" 
typedef ElemType TElemType;
 #include"c6-2.h" 
 #include"bo6-2.cpp" 
 #define N 100
Status SecondOptimal(BiTree &T, ElemType R[], int sw[], int low, int high)
{
	int j, i = low;
	double dw = sw[high] + sw[low-1];
	double min = fabs(sw[high] - sw[low]);
	for(j = low+1; j<=high; ++j)
		if( fabs(dw - sw[j] - sw[j-1]) < min )
		{
			i = j;
			min = fabs(dw - sw[j] - sw[j-1]);
		}
		if(!(T = (BiTree)malloc(sizeof(BiTNode))))
			return ERROR;
		T->data = R[i]
		if(i == low)
			T->lchild = NULL;
		else
			SecondOptimal(T->lchild, R, sw, low, i-1);
		if(i == high)
			T->rchild = NULL;
		else
			SecondOptimal(T->rchild, R, sw, i+1, high);

		return OK;
}