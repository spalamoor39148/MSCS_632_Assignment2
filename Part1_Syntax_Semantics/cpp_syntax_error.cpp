// cpp_syntax_error.cpp
// Intentional errors for demonstration: unknown identifier 'o' and stream operator misuse

#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;                // 'o' not declared -> compile-time error
    for (int i = o; i < size; i++) { // 'o' again
        total += arr[i];
    }
    return total;
}

int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof( numbers [o]); // 'o' used inside sizeof
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" " << result << endl; // missing << between string and << - causes parse error
    return o; // returning 'o'
}
