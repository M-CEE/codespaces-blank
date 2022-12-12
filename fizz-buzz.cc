#include <iostream>
using namespace std;

int main()
{
    // populate array with int from 1 to 100
    int nums[100];
    for (int i=0; i<100; i++)
    {
        nums[i] = i+1;
    }

    // Fizz-Buzz check:
    for (int j=0; j<100; j++)
    {
        if (nums[j] % 15 == 0) // num is divisible by 3 and 5
            cout << nums[j] << " -> FizzBuzz" << endl;
        else if (nums[j] % 3 == 0) // num is divisible by 3
            cout << nums[j] << " -> Fizz" << endl;
        else if (nums[j] % 5 == 0) // num is divisible by 5
            cout << nums[j] << " -> Buzz" << endl;
        else
            cout << nums[j] << endl;
    }

    return 0;
}