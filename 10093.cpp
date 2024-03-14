#include <iostream>

using namespace std;

int sol(long long head, long long tail){

    cout << tail - head - 1 << endl;
    for(long long i = head + 1; i < tail; i++)
    {
        cout << i << ' ';
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    long long head, tail;
    cin >> head >> tail;

    if(head==tail||tail-head==1) cout<<0;
    else{
        if (head > tail)
        {
            long long temp = head;
            head = tail;
            tail = temp;
        }
        sol(head, tail);
    }

    return 0;
}
