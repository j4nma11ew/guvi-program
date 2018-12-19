#include<stdio.h>
#include<string.h>
int main(){
	char roman[5];
	int i = 0;
	gets(roman);
	strrev(roman);
	int stdval = 0;
	for(i = 0 ;i<strlen(roman);i++){
		if(roman[i] == 'i'){
			if(stdval <5){
				stdval+= 1;
			}
			else{
				stdval -= 1;
			}
		}
		if(roman[i] == 'v'){
			stdval += 5;
		}
		if(roman[i] == 'x'){
			stdval += 10;
		}
	
	}
	printf("%d",stdval);	
}
