#include<stdio.h>
void main()
{
    int begin,end,i;
    scanf("%d%d",&begin,&end);
    for(i=begin+1;i<end;i++)
    {
        if(i%2!=0)
        {
            printf("%d"" ",i);
        }
    }
}
