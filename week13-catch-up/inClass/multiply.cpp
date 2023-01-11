/*
Напишете функция, която приема един масив с N елемента от тип int и число K, 
и връща нов масив, заделен в динамичната памет, 
в който присъстват елементите от подадения масив K на брой пъти.
1, 2, 3
k = 4
1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3
*/
#include <cstddef>
#include <iostream>

struct DynArray {
    std::size_t size;
    int * arr;
};
DynArray multiply(int arr[], std::size_t size, unsigned int k) {
    DynArray result;
    result.size = size * k;
    result.arr = new int[result.size];
    for(std::size_t i = 0; i < k; ++i) {
        for(std::size_t j = 0; j < size; ++j) {
            result.arr[i*size + j] = arr[j];
        }
    }
    return result;
}

void testMultiply() {
    int arr[] = {1, 2, 3};
    int k = 30000000;
    
    DynArray dynArr = multiply(arr, sizeof(arr)/sizeof(int), k);
    
    for(std::size_t i = 0; i < dynArr.size; ++i) {
        std::cout << dynArr.arr[i] << ", ";
    }
    // delete[] dynArr.arr;
}

int main() {
    for(std::size_t i = 0; i < 100000; ++i) {
        testMultiply();
    }
}
