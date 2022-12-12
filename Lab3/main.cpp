#include "cetatean.hpp"

int main(int argc, char **argv) {
    int array_size, mx;
    Cetatean *array;

    testMethods();

    array = getArraySample(array_size);

    cout << "Vectorul initial:\n";
    displayArray(array, array_size);

    cout << "Vectorul sortat:\n";
    sortArray(array, array_size);
    displayArray(array, array_size);

    mx = getMaxAge(array, array_size);
    showMaxAgeCitizen(array, array_size, mx);

    delete []array;
    
    return 0;
}