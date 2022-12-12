#include "Tastatura.h"

Tastatura::Tastatura() {
    marca = NULL;
}

Tastatura::Tastatura(int p, const char *m) {
    pret = p;

    marca = new char[strlen(m) + 1];
    strcpy(marca, m);
}

Tastatura::Tastatura(const Tastatura &obj) {
    pret = obj.pret;

    marca = new char[strlen(obj.marca) + 1];
    strcpy(marca, obj.marca);
}

Tastatura::~Tastatura() {
    if(marca != NULL)
        delete []marca;
}

Tastatura& Tastatura::operator=(const Tastatura &obj) {
    this->pret = obj.pret;

    if(this->marca != NULL)
        delete []this->marca;

    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);

    return (*this);
}

std::istream& operator>>(std::istream &input, Tastatura &obj) {
    char aux[100];

    input >> obj.pret >> aux;

    if(obj.marca != NULL)
        delete []obj.marca;

    obj.marca = new char[strlen(aux) + 1];
    strcpy(obj.marca, aux);

    return input; 
}

std::ostream& operator<<(std::ostream &output, Tastatura &obj) {
    output << obj.pret << " " << obj.marca << '\n';

    return output;
}

int Tastatura::getPret() {
    return pret;
}