/*같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.*/

#include <iostream>

using namespace std;

int setmoney(int num1, int num2, int num3){
    int price = 0;

    if(num1 == num2 and num2 == num3){
        price += 10000 + num1 * 1000;
    }
    else if (num1 == num2){
        price += 1000 + num1 * 100;
    }
    else if (num2 == num3){
        price += 1000 + num2 * 100;
    }
    else if (num1 == num3){
        price += 1000 + num1 * 100;
    }
    else{
        int max = num1;
        if(max < num2)
        max = num2;
        if(max<num3)
        max = num3;

        price += max * 100;
    }

    return price;
}

int main(int argc, char const *argv[]){
    int dice_1, dice_2, dice_3;

    cin >> dice_1 >> dice_2 >> dice_3;
    
    cout << setmoney(dice_1, dice_2, dice_3);

    return 0;
}
