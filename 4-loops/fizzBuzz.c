#include <stdio.h>

int main() {
    int printTo;
    printf("enter a number");
    scanf_s("%d",&printTo);
    for (int i = 1; i <= printTo; ++i) {
        int threeReminder = i%3;
        int fiveReminder = i%5;
        int fifteenReminder = i%15;
        if(fifteenReminder == 0){
            printf("fizzBuzz ");
        } else if(fiveReminder == 0){
            printf("buzz ");
        }else if(threeReminder == 0){
            printf("fizz ");
        } else{
            printf("%d ",i);
        }
    }
}
