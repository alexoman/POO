#ifndef NUMAR_COMPLEX_H
#define NUMAR_COMPLEX_H
#include <iostream>
#include <cmath>

using namespace std;

class Numar_Complex
{
    private:
        double real,imag;
    public:
        Numar_Complex(double r=0, double i=0);
        Numar_Complex(const Numar_Complex&);
        ~Numar_Complex();


        Numar_Complex operator +(const Numar_Complex&);
        Numar_Complex operator *(const Numar_Complex&);
        Numar_Complex operator =(const Numar_Complex&);


        friend ostream& operator<<(ostream&, numar_complex&);
        friend istream& operator>>(istream&, numar_complex&);

        double Modul();
        void Afisare();
        void Citire();
};

#endif // NUMAR_COMPLEX_H
