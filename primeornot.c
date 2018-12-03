#include <stdio.h> 
int main() {
  int num,i,p=0;
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("yes");
   }
   else
   {
      printf("no");
   }
   return 0;
}
