#include "Laptop.h"

int main(int argc, char **argv) {
    int array_size;
    Laptop* array;

    testKeyboardMethods();
    testLaptopMethods();
    
    array = getSample(array_size);
    sortArray(array, array_size);

    cout << "Vectorul sortat este:\n";
    displayArray(array, array_size);
    displayLaptopsUnder50(array, array_size);

    delete []array;

    return 0;
}