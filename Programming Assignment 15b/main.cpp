#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T value) {
    return value / 2;
}

int half(int value) {
    return static_cast<int>(round(value / 2.0));
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << "\n";
    cout << half(b) << "\n";
    cout << half(c) << "\n";

    system("pause");
    return 0;
}
