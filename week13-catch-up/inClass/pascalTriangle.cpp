/*
Напишете функция, която по подадено естествено число N връща матрица,
заделена в динамичната памет, с първите N биномни коефициентa.
*/
#include <cstddef>
#include <iostream>

struct DynMatrix {
    std::size_t size;
    int** arr;
};

DynMatrix generatePascal(unsigned int n) {
    
    DynMatrix matr;
    matr.size = n;
    matr.arr = new int*[matr.size];
    for(std::size_t i = 0; i < n; ++i) {
        matr.arr[i] = new int[matr.size];
    }
    // ...
}

int main() {
    DynMatrix matr = generatePascal(50);

    // ...
    for(std::size_t i = 0; i < matr.size; ++i) {
        delete[] matr.arr[i];
    }
    delete[] matr.arr;
}
