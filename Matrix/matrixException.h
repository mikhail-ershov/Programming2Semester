//
// Created by mikhail on 10.04.2020.
//

#ifndef LAB5_MATRIXEXCEPTION_H
#define LAB5_MATRIXEXCEPTION_H
#include <exception>


class outOfBoundsException: public std::exception {
    const char* what() const noexcept override {
        return "Out of bounds\n";
    }
};

#endif //LAB5_MATRIXEXCEPTION_H
