#include "calculator.hpp"

Calculator::Calculator() {
    firma = NULL;
    procesor = NULL;
}

Calculator::Calculator(const char *firma, const char serie[], const char *procesor, int RAM) {
    this->firma = new char[strlen(firma) + 1];
    strcpy(this->firma, firma);

    strcpy(this->serie, serie);

    this->procesor = new char[strlen(procesor) + 1];
    strcpy(this->procesor, procesor);
    
    this->RAM = RAM;
}

Calculator::Calculator(const Calculator &obj) {
    firma = new char[strlen(obj.firma) + 1];
    strcpy(firma, obj.firma);

    strcpy(serie, obj.serie);

    procesor = new char[strlen(obj.procesor) + 1];
    strcpy(procesor, obj.procesor);
    
    RAM = obj.RAM;
}

Calculator::~Calculator() {
    if(this->firma != NULL)
        delete []firma;
    
    if(this->procesor != NULL)
        delete []procesor;
}

void Calculator::afisare() {
    cout << firma << " " << serie << " " << procesor << " " << RAM << '\n';
}

void Calculator::modif(const char *firma, const char serie[], const char *procesor, int RAM) {
    if(this->firma != NULL)
        delete []this->firma;

    this->firma = new char[strlen(firma) + 1];
    strcpy(this->firma, firma);

    strcpy(this->serie, serie);

    if(this->procesor != NULL)
        delete []this->procesor;

    this->procesor = new char[strlen(procesor) + 1];
    strcpy(this->procesor, procesor);
    
    this->RAM = RAM;
}

char* Calculator::getProcesor() {
    return procesor;
}

int getRam(const Calculator &obj) {
    return obj.RAM;
}

void interschimbare(Calculator &obj1, Calculator &obj2) {
    Calculator aux(obj1);

    obj1.modif(obj2.firma, obj2.serie, obj2.procesor, obj2.RAM);
    obj2.modif(aux.firma, aux.serie, aux.procesor, aux.RAM);
}