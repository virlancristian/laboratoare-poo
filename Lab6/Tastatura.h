#ifndef TASTAUTRA_H
#define TASTATURA_H

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

class Tastatura {
protected:
    int pret;
    char *marca;
public:
    Tastatura();
    Tastatura(int, const char*);
    Tastatura(const Tastatura&);
    ~Tastatura();

    int getPret();

    Tastatura& operator=(const Tastatura&);
    friend std::istream& operator>>(std::istream&, Tastatura&);
    friend std::ostream& operator<<(std::ostream&, Tastatura&);

};

#endif