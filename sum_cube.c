#include<stdio.h>
int main(){
        int count = 1;
        int sum = 0;
	int n;
	printf("give n for which sum of n cubes nos you want\n");
	scanf("%d",&n);
        while(count<=n){
                sum = sum + count*count*count;
                count++;
        }
        printf("the sum of 10 odd no.s are %d",sum);
        return 0;
}
