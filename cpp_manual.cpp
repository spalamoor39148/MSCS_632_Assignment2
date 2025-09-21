// cpp_manual.cpp
#include <iostream>

int main() {
    int *arr = new int[5];  // allocate on heap
    for (int i = 0; i < 5; ++i) arr[i] = i + 1;

    int sum = 0;
    for (int i = 0; i < 5; ++i) sum += arr[i];

    std::cout << "sum = " << sum << std::endl;

    delete[] arr; // free memory; if omitted -> memory leak
    return 0;
}
