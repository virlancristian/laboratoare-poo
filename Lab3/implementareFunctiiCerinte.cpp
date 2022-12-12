#include "cetatean.hpp"

void testMethods() {
    Cetatean cetatean1("Vasilescu", "Andrei", "Bucuresti", 50);
    Cetatean cetatean2("Marinescu", "Marin", "Buzau", 25);

    cout << "Informatiile initiale pentru cetatean1:\n";
    cetatean1.afisare();
    cout << '\n';

    cetatean1.modif("Georgescu", "Valentina", "Paducheni", 30);

    cout << "Prima modificare de informatii:\n";
    cetatean1.afisare();
    cout << '\n';

    cetatean1.modif(cetatean2);

    cout << "A doua modificare de informatii:\n";
    cetatean1.afisare();
    cout << '\n';

    cout << "Varsta si numele cetateanului sunt:\n" << cetatean1.getVarsta() << " " << cetatean2.getNume() << "\n\n";
}

Cetatean* getArraySample(int &array_size) {
    array_size = 4;

    Cetatean* array = new Cetatean[4];
    array[0].modif("Dumitru", "Alexandru", "Covasna", 30);
    array[1].modif("Bartolomeu", "Boromir", "Constanta", 76);
    array[2].modif("Zalmoxis", "Dimitrie", "Bacau", 17);
    array[3].modif("Funny", "Valentine", "Washington", 34);

    return array;
}

void sortArray(Cetatean *array, int array_size) {
    Cetatean aux;

    for(int i = 0; i < array_size - 1; i++) {
        for(int j = i + 1; j < array_size; j++) {
            if(strcmp(array[i].getNume(), array[j].getNume()) > 0) {
                aux.modif(array[i]);
                array[i].modif(array[j]);
                array[j].modif(aux);
            }
        }
    }
}   

void displayArray(Cetatean *array, int array_size) {
    for(int i = 0; i < array_size; i++)
        array[i].afisare();

    cout << "\n\n";
}

int getMaxAge(Cetatean *array, int array_size) {
    int mx = array[0].getVarsta();
    int aux;

    for(int i = 1; i < array_size; i++) {
        aux = array[i].getVarsta();
        if(aux > mx)
            mx = aux;
    }

    return mx;
}

void showMaxAgeCitizen(Cetatean *array, int array_size, int mx) {
    cout << "Persoanele cu varsta maxima sunt:\n";

    for(int i = 0; i < array_size; i++) {
        if(array[i].getVarsta() == mx)
            array[i].afisare();
    }
}