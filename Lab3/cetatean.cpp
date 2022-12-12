#include "cetatean.hpp"

Cetatean::Cetatean() {
    nume = NULL;
    prenume = NULL;
}

Cetatean::Cetatean(const char *n, const char *p, const char a[], int v) {
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);

    prenume = new char[strlen(p) + 1];
    strcpy(prenume, p);

    strcpy(adresa, a);
    varsta = v;
}

Cetatean::~Cetatean() {
    if(nume != NULL)
        delete []nume;
    
    if(prenume != NULL)
        delete []prenume;
}

void Cetatean::afisare() {
    cout << nume << " " << prenume << " " << adresa << " " << varsta << '\n';
}

void Cetatean::modif(const char *n, const char *p, const char a[], int v) {
    if(nume != NULL)
        delete []nume;

    nume = new char[strlen(n) + 1];
    strcpy(nume, n);

    if(prenume != NULL)
        delete []prenume;

    prenume = new char[strlen(p) + 1];
    strcpy(prenume, p);

    strcpy(adresa, a);
    varsta = v;
}

void Cetatean::modif(const Cetatean &obj) {
    if(nume != NULL)
        delete []nume;

    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume, obj.nume);

    if(prenume != NULL)
        delete []prenume;

    prenume = new char[strlen(obj.prenume) + 1];
    strcpy(prenume, obj.prenume);

    strcpy(adresa, obj.adresa);
    varsta = obj.varsta;
}

int Cetatean::getVarsta() {
    return varsta;
}

char* Cetatean::getNume() {
    return nume;
}