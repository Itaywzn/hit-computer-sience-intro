#include <stdio.h>

int main() {
    int numOfNumbers, total =0;
    printf("enter a number");
    scanf_s("%d",&numOfNumbers);
    printf("please enter %d  numbers",numOfNumbers);
    for (int i = 1; i <= numOfNumbers; ++i) {
        int num;
        scanf_s("%d",&num);
        if(num%2==1&&num%3!=0){
            total += num;
        }
    }
    printf("total result: %d",total);
}
