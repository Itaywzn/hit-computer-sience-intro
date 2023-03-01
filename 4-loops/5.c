#include <stdio.h>

int main() {
    int num, total =0;
    printf("enter a number");
    scanf_s("%d",&num);
    double factorial =1;
    long int sigma = 0 ;
    for (int i = 1; i <= num; ++i) {
        sigma +=i;
        factorial *=i;
    }
    printf("total result: %lf",factorial/sigma);
}
