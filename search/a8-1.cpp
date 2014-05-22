 #include"c1.h"
 #include"func8-1.cpp" 
 #include"c8-1.h" 
 #include"c8-2.h" 
 #include"bo8-1.cpp" 

int main()
{
	SSTable st;
	int i;
	long s;
	char filename[13];
	printf("请输入文件名：")；
	scanf("%s", filename);
	Creat_SeqFromFile(st, filename);
}