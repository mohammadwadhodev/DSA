#include <iostream>
using namespace std;

bool isPalindrome(int x)
{

    int temp = x;
    int reversed = 0;

    while (temp > 0)
    {
        if (reversed > (INT_MAX - temp % 10) / 10) return false;
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return reversed == x;
}
    

void main(){
    var isPal = isPalindrome(121);
    cout << "isPalindrome : " << isPal;
}