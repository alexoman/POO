#include "Numar_Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

Numar_Complex::Numar_Complex(double r,double i)
{
    real=r;
    imag=i;
}

Numar_Complex::Numar_Complex(const Numar_Complex& c1)
{
    real=c1.real;
    imag=c1.imag;
}

Numar_Complex::~Numar_Complex(){}

void Numar_Complex:: Afisare()
{
    if(imag==0 && real==0)
        cout<<0;
    else
    {
        if(imag==0)
            cout<<real;
        else
        {
            if(real==0)
            {
                 if(imag<0)
                    cout<<real<<"-i*"<<(-1)*imag;
                else
                    cout<<real<<"+i*"<<imag;
            }
        }
    }
}

ostream& operator<<(ostream& out, Numar_Complex& c1)
{
    c1.Afisare();

    return out;
}

istream& operator>>(istream& in, Numar_Complex&c1)
{
    double r,i; // p.reala, p.imaginara

    in>>r>>" ">>i;
    cout<<'\n';
    c1.real=r;
    c1.imag=i;

    return in;
}

Numar_Complex& Numar_Complex::operator=(const Numar_Complex& c1)
{
    this->real=c1.real;
    imag=c1.imag;
    return *this;
}

Numar_Complex& Numar_Complex::operator+(const Numar_Complex& c2)
{
    Numar_Complex sum;
    sum.real=this->real+c2.real;
    sum.imag=imag+c2.imag;
    return sum;
}

Numar_Complex& Numar_Complex::operator*(const Numar_Complex& c2)
{
    Numar_Complex mult;
    mult.real=real*c2.real-imag*c2.imag;
    mult.imag=real*c2.imag+imag*c2.real;
    return mult;
}

void Numar_Complex:: Modul()
{
    mod=sqrt(real*real+imag*imag);
    return mod;
}
