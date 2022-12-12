#include "Laptop.h"

Laptop::Laptop() {
    procesor = NULL;
}

Laptop::Laptop(int mem, int p, const char *pr, const char *m)
    :Tastatura(p, m) {
    memorie_ram = mem;

    procesor = new char[strlen(pr) + 1];
    strcpy(procesor, pr);
}

Laptop::Laptop(const Laptop &obj)
    :Tastatura(obj) {
    memorie_ram = obj.memorie_ram;

    if(procesor != NULL)
        delete []procesor;

    procesor = new char[strlen(obj.procesor) + 1];
    strcpy(procesor, obj.procesor);
}

Laptop::~Laptop() {
    if(procesor != NULL)
        delete []procesor;
}

Laptop& Laptop::operator=(const Laptop &obj) {
    this->memorie_ram = obj.memorie_ram;

    if(this->procesor != NULL)
        delete []this->procesor;

    this->procesor = new char[strlen(obj.procesor) + 1];
    strcpy(this->procesor, obj.procesor);

    Tastatura::operator=(obj);

    return (*this);
}

std::istream& operator>>(std::istream &input, Laptop &obj) {
    char aux1[100], aux2[100];

    input >> obj.pret >> aux1 >> obj.memorie_ram >> aux2;

    if(obj.marca != NULL)
        delete []obj.marca;
    if(obj.procesor != NULL)
        delete []obj.procesor;

    obj.marca = new char[strlen(aux1) + 1];
    strcpy(obj.marca, aux1);

    obj.procesor = new char[strlen(aux2) + 1];
    strcpy(obj.procesor, aux2);

    return input;
}

std::ostream& operator<<(std::ostream &output, Laptop &obj) {
    output << obj.pret << " " << obj.marca << " " << obj.memorie_ram << " " << obj.procesor << '\n';

    return output;
}

int Laptop::getMemorie() {
    return memorie_ram;
}