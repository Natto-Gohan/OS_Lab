#include <stdio.h>
int main(){
	int input;
	int sum = 0;
	float num;
	while(1){
	printf("enter a number : ");
	scanf("%d",&input);
	if(input<=0){
		break;
	}
	sum+=input;
	num++;
	}
	printf("average : %.2f",sum/num);
}
