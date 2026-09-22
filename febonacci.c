#include<stdio.h>
int main(){
	int count = 0;
	long long a =0,b=1,c;
	while(count <10){
		c = a + b;
		printf("%lld    ",c);
		a = b;
		b = c;
		count++;
		
	}
        return 0;
}

