#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long reversed = 0;
        int y = x;

        while (y > 0) {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }

        return reversed == x;
    }
};

int main() {
    Solution solution;

    // Example usage:
    int num1 = 121;
    bool result1 = solution.isPalindrome(num1);
    cout << num1 << " is a palindrome: " << boolalpha << result1 << endl;

    int num2 = -121;
    bool result2 = solution.isPalindrome(num2);
    cout << num2 << " is a palindrome: " << boolalpha << result2 << endl;

    int num3 = 10;
    bool result3 = solution.isPalindrome(num3);
    cout << num3 << " is a palindrome: " << boolalpha << result3 << endl;

    return 0;
}
