#include <iostream>
#include <string>
using namespace std;

int left_shift(int n, int shift) {
    string num_str = to_string(n);
    int len = num_str.length();
    shift = shift % len; 

    for (int i = 0; i < shift; ++i) {
        char first_digit = num_str[0];
        for (int j = 0; j < len - 1; ++j) {
            num_str[j] = num_str[j + 1];
        }
        num_str[len - 1] = first_digit;
    }

    return stoi(num_str);
}

int main() {
    int n = 123456;
    int shift = 2;
    int shifted_num = left_shift(n, shift);

    
    cout << shifted_num << std::endl;

    return 0;
}