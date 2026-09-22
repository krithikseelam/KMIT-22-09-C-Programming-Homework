#include<stdio.h>
int main(){
	int count = 0;
	int sum = 0;
	int num =1;
	while(count<10){
		sum = sum + num;
		num = num + 2;
		count++;
	}
	printf("the sum of 10 odd no.s are %d",sum);
	return 0;
}
