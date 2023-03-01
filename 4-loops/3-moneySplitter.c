#include <stdio.h>

int main() {
    int money;
    printf("how much money would you like to split?");
    scanf_s("%d",&money);
    int biggestChange = 20;
    while (money != 0){
        int numOfChanges = money/biggestChange;
        printf("%d, %d NIS\n",numOfChanges,biggestChange);
        money = money%biggestChange;
        switch (biggestChange) {
            case 20:
                biggestChange = 10;
                break;
            case 10:
                biggestChange = 5;
                break;
            case 5:
                biggestChange = 2;
                break;
            case 2:
                biggestChange = 1;
                break;
        }
    }

}
