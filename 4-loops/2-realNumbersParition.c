#include <stdio.h>

int main() {
    double realNum,rangeLimit;
    rangeLimit = 25;
    printf("enter a number");
    scanf_s("%lf",&realNum);

    for (double i = 0; i < 1000.0; i=i+rangeLimit) {
        if(realNum>=i && realNum <i+rangeLimit){
            printf("num is in range [%lf,%lf)",i,i+rangeLimit);
            break;
        }
    }
}

