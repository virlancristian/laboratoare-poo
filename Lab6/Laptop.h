#ifndef LAPTOP_H
#define LAPTOP_H

#include "Tastatura.h"

class Laptop: public Tastatura { 
private:
    int memorie_ram;
    char *procesor;
public:
    Laptop();
    Laptop(int , int , const char *, const char *);
    Laptop(const Laptop&);
    ~Laptop();

    int getMemorie(); 

    Laptop& operator=(const Laptop&);
    friend std::istream& operator>>(std::istream&, Laptop&);
    friend std::ostream& operator<<(std::ostream&, Laptop&);
};

void testKeyboardMethods();
void testLaptopMethods();
Laptop* getSample(int&);
void displayArray(Laptop*, int);
void sortArray(Laptop* , int);
void displayLaptopsUnder50(Laptop* , int);

#endif