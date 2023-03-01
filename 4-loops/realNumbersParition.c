#include <stdio.h>
int isBetween(double num,double start,double end){
    if(num>=start && num <end){
        printf("num is in range [%lf,%lf)",start,end);
        return 1;
    }
    return 0;
}
int main() {
    double realNum,rangeLimit;
    rangeLimit = 25;
    printf("enter a number");
    scanf_s("%lf",&realNum);

    for (double i = 0; i < 1000.0; i=i+rangeLimit) {
        if(isBetween(realNum,i,i+25)){
            break;
        }
    }
}

