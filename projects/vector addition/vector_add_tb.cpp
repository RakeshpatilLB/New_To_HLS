#include <iostream>
#include "vector_add.h"

int main() {
    data_t a[SIZE], b[SIZE], c[SIZE];

    // Initialize input arrays
    for (int i = 0; i < SIZE; i++) {
        a[i] = i;
        b[i] = SIZE - i;
    }

    // Call the function to be synthesized
    vector_add(a, b, c);

    // Check results
    bool pass = true;
    for (int i = 0; i < SIZE; i++) {
        if (c[i] != a[i] + b[i]) {
            std::cout << "Error at position " << i << ": ";
            std::cout << c[i] << " != " << a[i] << " + " << b[i] << std::endl;
            pass = false;
            break;
        }
    }

    if (pass) {
        std::cout << "Test passed!" << std::endl;
        return 0;
    } else {
        std::cout << "Test failed." << std::endl;
        return 1;
    }
}
