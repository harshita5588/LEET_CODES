

#include <iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int n) {
        // Handle negative numbers directly as they cannot be palindromes
        if (n < 0) return false;

        long long reverse = 0;  // Use long long to handle large numbers
        int original = n;
        int rem;
   
        while (n > 0) {
            rem = n % 10;
            reverse = (reverse * 10) + rem;
            n = n / 10;
        }

        // Compare the reversed number with the original number
        return reverse == original;
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class
    int n;

    cout << "Enter a number: ";
    cin >> n;  // Input the number

    // Check if the number is a palindrome and output the result
    if (solution.isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}

