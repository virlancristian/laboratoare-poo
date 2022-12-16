#include "calculator.hpp"

void testMethods() {
    Calculator calculator1("Intel", "Core i7", "7700", 8);
    Calculator calculator2(calculator1);

    cout << "Informatii initiale calculator si copie sa:\n";
    calculator1.afisare();
    calculator2.afisare();
    cout << '\n';

    calculator1.modif("AMD", "Ryzen", "3700", 16);

    cout << "Informatii modificare calculator:\n";
    calculator1.afisare();
    cout << '\n';

    interschimbare(calculator1, calculator2);

    cout << "Valorile interschimbate intre cele 2 calculatoare:\n";
    calculator1.afisare();
    calculator2.afisare();

    cout << "Procesorul si RAM-ul primului calculator sunt:\n" << calculator1.getProcesor() << " " << getRam(calculator1) << "\n\n";
}

Calculator* getArraySample(int &array_size) {
    array_size = 4;

    Calculator* array = new Calculator[4];
    array[0].modif("Intel", "Core i7", "9700", 16);
    array[1].modif("Qualcomm", "Snapdragon", "932", 8);
    array[2].modif("AMD", "Ryzen", "3700", 8);
    array[3].modif("intel", "Kabylake", "4300", 4);

    return array;
}

void displayArray(Calculator *array, int array_size) {
    for(int i = 0; i < array_size; i++)
        array[i].afisare();

    cout << "\n\n";
}

void sortArray(Calculator *array, int array_size) {
    for(int i = 0;i < array_size - 1; i ++) {
        for(int j = i + 1; j < array_size; j++) {
            if(strcmp(array[i].getProcesor(), array[j].getProcesor()) > 0)
                interschimbare(array[i], array[j]);
        }
    }
}

void findComputerWithLeastRam(Calculator* array, int array_size) {
    int mn, minimumIndex;

    mn = getRam(array[0]);
    minimumIndex = 0;

    for(int i = 1; i < array_size; i++) {
        int aux = getRam(array[i]);

        if(aux < mn) {
            mn = aux;
            minimumIndex = i;
        }
    }

    cout << "Calculatorul cu cel mai putin RAM este:\n";
    array[minimumIndex].afisare();
}