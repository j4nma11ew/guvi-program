#include<stdio.h>
int main(){
	int n,temp,rem,sum=0;
	scanf("%d",&n);
	temp=n;
	while(temp != 0){
		rem = temp%10;
		sum = sum*10+rem;
		temp = temp/10;
	}
	if(sum == n)
	printf("yes");
	else
	printf("no");
	return 0;
}
