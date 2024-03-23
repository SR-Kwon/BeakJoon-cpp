//도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E로 출력한다.

#include <iostream>

using namespace std;

char guess(int* arr){
    int count_zero = 0;

    for (int i = 0; i < 4; i++){
        if(arr[i] == 0){
            count_zero++;
        }
    }
    
    switch (count_zero){
    case 0: //모
        return 'E';
    case 1: //도
        return 'A';
    case 2: //개
        return 'B';
    case 3: //걸
        return 'C';
    default: //윷
        return 'D';
    }
}

int main(int argc, char const *argv[]){
    for (int i = 0; i < 3; i++){   
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        cout << guess(arr) << endl;
    }
    
    return 0;
}

