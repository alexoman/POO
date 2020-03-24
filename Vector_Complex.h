#ifndef VECTOR_COMPLEX_H
#define VECTOR_COMPLEX_H

#include "Numar_Complex.h"
#include <iostream>

using namespace std;

class Vector_Complex
{
    private:
        int n;
        Numar_Complex** vect;
    public:
        Vector_Complex(int x=0, int nr=0);
        Vector_Complex(const Vector_Complex&);
        ~Vector_Complex();

        friend ostream& operator<<(ostream&, Vector_Complex&);
        friend istream& operator>>(istream&, Vector_Complex&);

        Vector_Complex operator +(const Vector_Complex&);
        Vector_Complex operator *(const Vector_Complex&);
        Vector_Complex operator =(const Vector_Complex&);

        void SortareModul();
};

#endif // VECTOR_COMPLEX_H
