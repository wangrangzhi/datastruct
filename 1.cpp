 // algo9-3.cpp 希尔排序，包括算法10.4、10.5
 #include<stdio.h>
 #include"c8-2.h" 
 typedef int KeyType; 
 typedef int InfoType; 
 #include"c9-1.h" 
 #include"c9-2.h" 
 #include"func9-1.cpp" 

 void Print1(SqList L) 
 { int i;
   for(i=1;i<=L.length;i++)
     printf("%d ",L.r[i].key);
   printf("\n");
 }

 void ShellInsert(SqList &L,int dk)
 { 
   
   
   int i,j;
   for(i=dk+1;i<=L.length;++i) 
     if LT(L.r[i].key,L.r[i-dk].key) 
     { 
       L.r[0]=L.r[i]; 
       for(j=i-dk;j>0&&LT(L.r[0].key,L.r[j].key);j-=dk)
         L.r[j+dk]=L.r[j]; 
       L.r[j+dk]=L.r[0]; 
     }
 }

 void ShellSort(SqList &L,int dlta[],int t)
 { 
   int k;
   for(k=0;k<t;++k) 
   { ShellInsert(L,dlta[k]); 
     printf("dlta[%d]=%d，第%d趟排序结果(仅输出关键字)：",k,dlta[k],k+1);
     Print1(L); 
   }
 }

 #define N 10 
 #define T 3 
 int main()
 {
   RedType d[N]={{49,1},{38,2},{65,3},{97,4},{76,5},{13,6},{27,7},{49,8},
   {55,9},{4,10}}; 
   SqList m; 
   int i,dt[T]={5,3,1}; 
   for(i=0;i<N;i++) 
     m.r[i+1]=d[i];
   m.length=N;
   printf("希尔排序前：");
   Print(m); 
   ShellSort(m,dt,T); 
   printf("希尔排序后：");
   Print(m); 
 }

