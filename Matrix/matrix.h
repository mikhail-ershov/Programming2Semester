//
// Created by mikhail on 10.04.2020.
//

#ifndef LAB5_MATRIX_H
#define LAB5_MATRIX_H
#include "matrixException.h"
#include <iostream>
template<int N, int M, class T>
class Matrix{
private:
    T data[N][M];
    int height = N, width = M;
public:
    Matrix() = default;
    int getHeight() {
        return height;
    }
    int getWidth() {
        return width;
    }
    void printInfo() {
        std::cout << height << " " << width << "\n";
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
    void set(int i, int j, int value) {
        if (i < 0 || j < 0 || i >= height || j >= width) {
            throw outOfBoundsException();
        }
        data[i][j] = value;
    }
    T get(int i, int j) {
        if (i < 0 || j < 0 || i >= height || j >= width) {
            throw outOfBoundsException();
        }
        return data[i][j];
    }
};

#endif //LAB5_MATRIX_H
