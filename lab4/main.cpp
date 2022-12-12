#include "calculator.hpp"

int main(int argc, char **argv) {
    Calculator* array;
    int array_size;

    testMethods();

    array = getArraySample(array_size);

    cout << "Vectorul initial:\n";
    displayArray(array, array_size);

    cout << "Vectorul sortat:\n";
    displayArray(array, array_size);

    findComputerWithLeastRam(array, array_size);

    delete []array;

    return 0;
}