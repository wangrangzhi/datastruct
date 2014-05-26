#include "bo6-2.cpp"

#define InitDSTable InitBiTree
#define DestroyDSTable DestroyBiTree 
#define TraverseDSTable InOrderTraverse

BiTree SearchBST(BiTree T, KeyType key)
{
	if(!T || EQ(key, T->data.key))
		return T;
	else if LT(key, T->data.key)
		return SearchBST(T->lchild, key);
	else
		return SearchBST(T->rchild, key);
}