#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to create a base-10 palindrome from a number
    long long createPalindrome(long long num, bool odd) {
        long long x = num;
        if (odd) x /= 10; // For odd-length, skip duplicating the middle digit
        while (x > 0) {
            num = num * 10 + x % 10;
            x /= 10;
        }
        return num;
    }

    // Function to check if a number is a palindrome in a given base
    bool isPalindrome(long long num, int base) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % base);
            num /= base;
        }
        int i = 0, j = digits.size() - 1;
        while (i < j) {
            if (digits[i++] != digits[j--]) return false;
        }
        return true;
    }

    // Main function to compute the sum of the first n k-mirror numbers
    long long kMirror(int k, int n) {
        long long sum = 0;
        // We iterate over increasing lengths of palindromes
        for (long long len = 1; n > 0; len *= 10) {
            // Odd-length palindromes
            for (long long i = len; n > 0 && i < len * 10; i++) {
                long long p = createPalindrome(i, true);
                if (isPalindrome(p, k)) {
                    sum += p;
                    n--;
                }
            }
            // Even-length palindromes
            for (long long i = len; n > 0 && i < len * 10; i++) {
                long long p = createPalindrome(i, false);
                if (isPalindrome(p, k)) {
                    sum += p;
                    n--;
                }
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // Example input
    int k = 5;
    int n = 25;

    long long result = sol.kMirror(k, n);
    cout << "The sum of the first " << n << " " << k << "-mirror numbers is: " << result << endl;

    return 0;
}
