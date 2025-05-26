#include <iostream>
#include <algorithm>
using namespace std;

string reverse_string(string s) {
    int i = 0, j = s.length() - 1;
    while (i <= j) {
        swap(s[i++], s[j--]);  //Swapping characters from front and end 
    }
    return s;
}

int main() {
    string s = "DEEPAK";
    string answer = reverse_string(s);
    cout << answer << endl; // Output: KAPEED
    return 0;
}
