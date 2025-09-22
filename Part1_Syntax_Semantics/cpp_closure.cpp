// cpp_closure.cpp
#include <iostream>
#include <functional>

using namespace std;

function<int(int)> make_multiplier(int factor) {
    return [factor](int x) { return x * factor; }; // capture by value
}

int main() {
    auto triple = make_multiplier(3);
    cout << "triple(7) => " << triple(7) << endl; // expected 21

    int factor = 4;
    auto quad = [factor](int x) { return x * factor; }; // explicit lambda capture
    cout << "quad(5) => " << quad(5) << endl; // expected 20

    return 0;
}
