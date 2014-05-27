 // main7-1.cpp 检验bo7-1.cpp的主程序
 #include"c1.h"
 #include"func7-1.cpp" 
 #include"func7-2.cpp" 
 #include"c7-1.h" 
 #include"bo7-1.cpp" 
 typedef MGraph Graph; 
 int main()
 {
   int i,j,k,n;
   char s[30]="line";
   Graph g; 
   VertexType v1,v2; 
   printf("choose dn, dg, udn, udg\n");
   for(i=0;i<4;i++) 
   { CreateGraph(g); 
     Display(g); 
     printf("input the new v and new value");
     Input(v1); 
     InsertVex(g,v1); 
     if(g.kind<2) 
       strcpy(s,"arc");
     printf("input the connect with the new %s，input the %sth:",s,s);
     scanf("%d",&n);
     for(k=0;k<n;k++) 
     { printf("input the other name of the v: ");
       scanf("%s",v2.name);
       if(g.kind<=1) 
       { printf("input the dir of the v: 0,1:");
         scanf("%d",&j);
         if(j) 
           InsertArc(g,v2,v1); 
         else 
           InsertArc(g,v1,v2); 
       }
       else 
         InsertArc(g,v1,v2); 
     }
     Display(g); 
     printf("delete the v, %s",s);
     scanf("%s",v1.name);
     DeleteVex(g,v1); 
     Display(g); 
     if(i==3) 
     { printf("input the new name and new value");
       scanf("%s",v1.name); 
       Input(v2); 
       PutVex(g,v1,v2); 
       if(g.kind<2) 
         printf("删除一条%s，请输入待删除%s的弧尾 弧头：",s,s);
       else 
         printf("删除一条%s，请输入待删除%s的顶点1 顶点2：",s,s);
       scanf("%s%s",v1.name,v2.name); 
       DeleteArc(g,v1,v2); 
       Display(g); 
     }
     DestroyGraph(g); 
   }
 }

