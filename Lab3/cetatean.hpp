#ifndef CETATEAN_HPP
#define CETATEAN_HPP

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

class Cetatean {
private:
    char *nume;
    char *prenume;
    char adresa[20];
    int varsta;
public:
    Cetatean();
    Cetatean(const char* , const char* , const char[] , int);
    ~Cetatean();
    
    void afisare();
    void modif(const char* , const char* , const char[] , int);
    void modif(const Cetatean&);
    int getVarsta();
    char* getNume();
};

void testMethods();
Cetatean* getArraySample(int&);
void sortArray(Cetatean* , int);
void displayArray(Cetatean* , int);
int getMaxAge(Cetatean* , int);
void showMaxAgeCitizen(Cetatean* , int , int);

#endif