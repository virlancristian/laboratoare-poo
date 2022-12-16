#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

class Calculator {
private:
    char *firma;
    int RAM;
    char *procesor;
    char serie[20];
public:
    Calculator();
    Calculator(const char *firma, const char serie[], const char *procesor, int RAM);
    Calculator(const Calculator&);
    ~Calculator();

    void afisare();
    void modif(const char *, const char [], const char *, int);
    char* getProcesor();

    friend int getRam(const Calculator&);
    friend void interschimbare(Calculator& , Calculator&);
};

void testMethods();
Calculator* getArraySample(int&);
void displayArray(Calculator* , int);
void sortArray(Calculator* , int);
void findComputerWithLeastRam(Calculator* , int);

#endif