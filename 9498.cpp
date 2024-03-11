#include <iostream>

using namespace std;

char grade(int score){
    if(score >= 90)
    {
        return 'A';
    }
    else if (score >= 80)
    {
        return 'B';
    }
    else if (score >= 70)
    {
        return 'C';
    }
    else if (score >= 60)
    {
        return 'D';
    }
    else return 'F';
}

int main(int argc, char const *argv[])
{
    int score;
    cin >> score;
    
    cout << grade(score);

    return 0;
}
