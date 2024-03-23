#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sol(vector<int> arr, int sum){
    
    
    for (int i = 0; i < arr.size(); i++)
    {   
        int temp = sum;
        temp -= arr[i];
        for (int j = 1; j < arr.size(); j++)
        {
            if((temp - arr[j]) == 100){
                arr[j] = -1;
                arr[i] = -1;
                return arr;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int sum = 0;
    int temp = 0;
    vector<int> nums;

    for (int i = 0; i < 9; i++)
    {
        cin >> temp;
        sum += temp;
        nums.push_back(temp);
    }

    nums = sol(nums, sum);
    sort(nums.begin(), nums.end());

    for (size_t i = 2; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
