#include <iostream>

void swap(int* x, int* y){
    if (y == nullptr) {
        std::cout << "Error" << std::endl;
        return;
    }
    int c = *x;
    *x = *y;
    *y = c;
}

int main() {
    // int x = 5;
    // int y = 6;
    // std::cout << &x << std::endl;
    // std::cout << x << std::endl;
    // std::cout << y << std::endl;
    // swap(&x, &y);
    // std::cout << x << std::endl;
    // std::cout << y << std::endl;


    // int* np = nullptr;
    // // std::cout << *np << std::endl;
    // swap(&x, np);

    int* arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    int* p1 = &arr[1];
    int *p2 = &arr[7];
    int x = 5;
    int* p3 = &x;

    std::cout << p1 - p3 << std::endl;

    delete[] arr;

    return 0;
}