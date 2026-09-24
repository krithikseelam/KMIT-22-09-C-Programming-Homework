#include <stdio.h>

int main(){
	int n, i = 0;
	float sum = 0;
	float fact = 1;

        printf("Enter the number of terms for which you want eulers to calculate: ");
        scanf("%d", &n);

        while (i < n) {
        if (i > 0){
            fact = fact * i;
        }

        sum = sum + (i*i*i / fact);
        i++;
        }
	printf("Euler's value = %f", sum);
	return 0;
}
