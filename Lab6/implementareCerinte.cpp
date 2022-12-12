#include "Laptop.h"

void testKeyboardMethods() {
    Tastatura tastatura1(200, "razer");
    Tastatura tastatura2(tastatura1);
    Tastatura tastatura3;

    cout << "Citeste informatiile despre o tastatura:\n";
    cin >> tastatura3;

    cout << "Tastatura declarata initial:\n" << tastatura2;

    tastatura2 = tastatura3;

    cout << "Tastatura modificate cu informatiile de la utilizator:\n" << tastatura2;
    cout << "Pretul tastaturii este: " << tastatura2.getPret() << '\n';
}

void testLaptopMethods() {
    Laptop laptop1(8, 300, "Intel Core i7", "Razer");
    Laptop laptop2(laptop1);
    Laptop laptop3;

    cout << "\nCiteste informatiile despre un laptop:\n";
    cin >> laptop3;

    cout << "Laptopul declarat initial:\n" << laptop2;

    laptop2 = laptop3;

    cout << "Laptopul modificat cu informatiile de la utilizator:\n" << laptop2;
    cout << "Memoria ram a laptopului este: " << laptop2.getMemorie() << "\n\n";
}

Laptop* getSample(int &array_size) {
    array_size = 5;
    Laptop* array = new Laptop[5];

    array[0] = Laptop(16, 49, "AMD Ryzen 7", "Hama");
    array[1] = Laptop(24, 300, "Intel Core i5", "Razer");
    array[2] = Laptop(8, 20, "Intel Core Pentium", "Unknown");
    array[3] = Laptop(32, 500, "Intel Core i9", "Logitech");
    array[4] = Laptop(4, 100, "AMD Athlon Dual Core", "Marvo");

    return array;
}

void displayArray(Laptop* array, int array_size) {
    for(int i = 0; i < array_size; i++)
        cout << array[i];
}

void swap(Laptop &a, Laptop &b) {
    Laptop aux = a;
    a = b;
    b = aux;
}

void sortArray(Laptop* array, int array_size) {
    for(int i = 0; i < array_size - 1; i++) {
        for(int j = i + 1; j < array_size; j++) {
            if(array[i].getMemorie() > array[j].getMemorie())
                swap(array[i], array[j]);
        }
    }
}

void displayLaptopsUnder50(Laptop* array, int array_size) {
    cout << "\nLaptopurile care au tastaturi cu pret mai mare de 50 sunt:\n";

    for(int i = 0; i < array_size; i++) {
        if(array[i].getPret() > 50)
            cout << array[i];
    }
}