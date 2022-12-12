#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

class NrComplex {
private:
    double parteReala;
    double parteImaginara;
public:
    NrComplex(double pr = 0, double pi = 0);
    NrComplex(const NrComplex&);
    ~NrComplex();

    float getReal() const;
    float getImaginar() const;
    double getModul() const;
    NrComplex getConjugat() const;
    void setNrComplex(double, double);
    void afisNrComplex();

    NrComplex& operator=(const NrComplex&);
    friend NrComplex operator+(const NrComplex&, const NrComplex&);
    friend NrComplex operator-(const NrComplex&, const NrComplex&);
    friend NrComplex operator-(const NrComplex&);
    friend NrComplex operator*(const NrComplex&, const NrComplex&);
    friend NrComplex operator/(const NrComplex&, const NrComplex&);

    NrComplex& operator +=(const NrComplex&);
    NrComplex& operator -=(const NrComplex&);
    NrComplex& operator *=(const NrComplex&);
    NrComplex& operator /=(const NrComplex&);

    bool operator==(const NrComplex&);
    bool operator!=(const NrComplex&);
    bool operator<(const NrComplex&);
    bool operator<=(const NrComplex&);
    bool operator>(const NrComplex&);
    bool operator>=(const NrComplex&);
};

void testMethods();
void testOperationMethods();
void testComparisonMethods();

#endif