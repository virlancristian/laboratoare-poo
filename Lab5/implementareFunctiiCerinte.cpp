#include "complex.hpp"

void testMethods() {
    NrComplex a(3, 5);
    NrComplex b(a);
    NrComplex c;

    cout << "Numarul initial:\n";
    a.afisNrComplex();

    cout << "\nPartea reala si imaginara a numarului:\n" << a.getReal() << " " << a.getImaginar() << '\n';

    c = a.getConjugat();
    cout << "Numarul conjugat este:\n";
    c.afisNrComplex();

    a.setNrComplex(10, 9);

    cout << "Numarul modificat:\n";
    a.afisNrComplex();
}

void testOperationMethods() {
    NrComplex a(5, 9);
    NrComplex b(4, -2);
    NrComplex sum, subtraction, multiply, division;

    sum = a + b;
    subtraction = a - b;
    multiply = a*b;
    division = a / b;

    cout << "Avem urmatoarele 2 numere:\n";
    a.afisNrComplex();
    b.afisNrComplex();

    cout << "Suma, scaderea, inmultirea si impartirea celor 2 numere este egala cu:\n";
    sum.afisNrComplex();
    subtraction.afisNrComplex();
    multiply.afisNrComplex();
    division.afisNrComplex();

    sum += a;
    subtraction -= a;
    multiply *= a;
    division /= a;

    cout << "Suma, scaderea si impartirea celor 2 numere dupa ce a fost adaugat, scazut, inmultit si impartit cu a este:\n";
    sum.afisNrComplex();
    subtraction.afisNrComplex();
    multiply.afisNrComplex();
    division.afisNrComplex();
}

void testComparisonMethods() {
    NrComplex a, b;
    double real1, real2, imag1, imag2;

    cout << "Citeste de la tastatura 2 numere complexe pt a le compara:\n";
    cin >> real1 >> imag1 >> real2 >> imag2;
    
    a = NrComplex(real1, imag1);
    b = NrComplex(real2, imag2);

    if(a == b)
        cout << "Numerele sunt egale\n";

    if(a != b)
        cout << "Numerele sunt diferite\n";

    if(a < b)
        cout << "a < b\n";
    
    if(a > b)
        cout << "a > b\n";
}