#include "complex.hpp"

NrComplex::NrComplex(double pr, double pi) {
    parteReala = pr;
    parteImaginara = pi;
}

NrComplex::NrComplex(const NrComplex &obj) {
    this->parteReala = obj.parteReala;
    this->parteImaginara = obj.parteImaginara;
}

NrComplex::~NrComplex(){}

float NrComplex::getReal() const {
    return (float)parteReala;
}

float NrComplex::getImaginar() const { 
    return (float)parteImaginara;
}

double NrComplex::getModul() const {
    return sqrt(parteReala*parteReala + parteImaginara*parteImaginara);
}

NrComplex NrComplex::getConjugat() const {
    NrComplex a;

    a.parteReala = this->parteReala;
    a.parteImaginara = this->parteImaginara*(-1);

    return a;
}

void NrComplex::setNrComplex(double pr, double pi) {
    parteReala = pr;
    parteImaginara = pi;
}

void NrComplex::afisNrComplex(){
    cout << parteReala << " + " << parteImaginara << "i\n";
}

NrComplex& NrComplex::operator=(const NrComplex &obj) { 
    this->parteReala = obj.parteReala;
    this->parteImaginara = obj.parteImaginara;

    return (*this);
}

NrComplex operator+(const NrComplex &obj1, const NrComplex &obj2) {
    return NrComplex(obj1.parteReala + obj2.parteReala, obj1.parteImaginara + obj2.parteImaginara);
}

NrComplex operator-(const NrComplex &obj1, const NrComplex &obj2 ){
    return NrComplex(obj1.parteReala - obj2.parteReala, obj1.parteImaginara - obj2.parteImaginara);
}

NrComplex operator-(const NrComplex &obj) {
    return NrComplex(-obj.parteReala, -obj.parteImaginara);
}

NrComplex operator*(const NrComplex &obj1, const NrComplex &obj2) {
    return NrComplex(obj1.parteReala * obj2.parteReala, obj1.parteImaginara * obj2.parteImaginara);
}

NrComplex operator/(const NrComplex &obj1, const NrComplex &obj2) {
    return NrComplex(obj1.parteReala / obj2.parteReala, obj1.parteImaginara / obj2.parteImaginara);
}

NrComplex& NrComplex::operator+=(const NrComplex &obj) {
    this->parteReala += obj.parteReala;
    this->parteImaginara += obj.parteImaginara;

    return (*this);
}

NrComplex& NrComplex::operator-=(const NrComplex &obj) {
    this->parteReala -= obj.parteReala;
    this->parteImaginara -= obj.parteImaginara;

    return (*this);
}

NrComplex& NrComplex::operator*=(const NrComplex &obj) {
    this->parteReala *= obj.parteReala;
    this->parteImaginara *= obj.parteImaginara;

    return (*this);
}

NrComplex& NrComplex::operator/=(const NrComplex &obj) {
    this->parteReala /= obj.parteReala;
    this->parteImaginara /= obj.parteImaginara;

    return (*this);
}

bool NrComplex::operator==(const NrComplex &obj) {
    return ((this->parteReala == obj.parteReala) && (this->parteImaginara == obj.parteImaginara));
}

bool NrComplex::operator!=(const NrComplex &obj) {
    return !((*this) == obj);
}

bool NrComplex::operator>(const NrComplex &obj) {
    return ((this->parteReala > obj.parteReala) && (this->parteImaginara > obj.parteImaginara));
}

bool NrComplex::operator>=(const NrComplex &obj) {
    return ((this->parteReala >= obj.parteReala) && (this->parteImaginara >= obj.parteImaginara));
}

bool NrComplex::operator<(const NrComplex &obj){
    return ((this->parteReala < obj.parteReala) && (this->parteImaginara < obj.parteImaginara));
}

bool NrComplex::operator<=(const NrComplex &obj) {
    return ((this->parteReala <= obj.parteReala) && (this->parteImaginara <= obj.parteImaginara));
}