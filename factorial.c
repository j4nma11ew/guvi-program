#include <stdio.h>
int fact(int num){
  if (num ==1 || num == 0){
    return 1;
  }
  else{
    return (num*fact(num-1));
  }
}
void main(){
  int num,ract;
  printf("Enter The Number : \n");
  scanf("%d",&num);
  if(num>=0){
  ract  = fact(num);
    printf("%d",ract);}
  else
  printf("invalid");
  
}
