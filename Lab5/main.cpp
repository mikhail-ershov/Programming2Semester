#include <iostream>
#include "matrix.h"

template<typename T>
void swap(T& a, T& b) {
    T buff = a;
    a = b;
    b = buff;
}

int main() {
    int a = 1, b = 2;
    swap(a, b);
    std::cout << a << " " << b << "\n";
    double f1 = 0.5, f2 = 2.1;
    swap(f1, f2);
    std::cout << f1 << " " << f2 << "\n";
    Matrix<2, 2, int> matrix1, matrix2;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix1.set(i, j,  (i + 1) * (j + 1));
            matrix2.set(i, j, -(i + 1) * (j + 1));
        }
    }
    matrix1.printInfo();
    matrix2.printInfo();
    swap(matrix1, matrix2);
    matrix1.printInfo();
    matrix2.printInfo();
    matrix1.get(10, 10);
    return 0;
}
