#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main (){
    int man,code,count=0,flag=0;
   //  printf("man:\n");
   //  scanf("%d",&man);
   //  printf("code:\n");
   //  scanf("%d",&code);
   man=5;
   code=3;
  
   
    int *p;
    p=(int *)malloc(sizeof(int )*man);
    
    memset(p,0,sizeof(int )*man);
    for (int i=0;i<man;i++){
      printf("%d",p[i]);

    }
    for (int i=0;count!=man;i++){
           i%=man;
         if (p[i]!=-1){
            flag++;

         }
         if (flag==code){
            flag=0;
            p[i]=-1;
            printf("%d",i+1);
            count++;
         }
       
    }
    free(p);
    return 0;
}