#include<stdio.h>
#include<math.h>
int main(){
	int m,n,res=0;
	scanf("%d%d",&m,&n);
	if(m != 0){
	res = pow(m,n);
	printf("%d",res);
}
else
printf("Invalid");
	return 0;
}
