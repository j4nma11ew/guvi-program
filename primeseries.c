#include <stdio.h>
int main()
{
    int begin,end,i,flag;
    scanf("%d%d",&begin,&end);
    while (begin <end)
    {
        flag = 0;
         for(i = 2; i<= begin/2;i++)
        {
            if(begin%i == 0)
            {
                flag = 1;
                break;
            }
        }
       if (flag == 0)
            printf("%d ",begin);
            begin++;
    }
     return 0;
}
