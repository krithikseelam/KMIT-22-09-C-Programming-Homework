#include<stdio.h>
int main(){
        int count = 0;
        long long product = 1;
        int num =2;
        while(count<10){
                product = product*num;
                num = num + 2;
                count++;
        }
        printf("the product of 10 odd no.s are %lld",product);
        return 0;
}
