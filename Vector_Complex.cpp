#include "Vector_Complex.h"
#include "Numar_Complex.h"

using namespace std;

Vector_Complex::Vector_Complex(int x,int nr)
{
    n=x;
    vect= new Numar_Complex*[n];

    for(int i=0;i<n;i++0)
        vect[i]=nr;
}

Vector_Complex::Vector_Complex(const Vector_Complex& v)
{
    if(v.vect!=vect)
    {
        n=v.n;
        vect = new Numar_Complex*[n];

        for(int i=0;i<n;i++)
            vect[i]=v.vect[i];
    }
}

Vector_Complex::~Vector_Complex()
{
    for(int i=0;i<n;i++)
        delete [] vect[i];
    delete [] vect;
    //dtor
}

ostream& operator<<(ostream& out, Vector_Complex& v)
{
    for (int i=0;i<v.n;i++)
        out<<v.vect[i]<<" ";
    out<<endl;

    return out;
}

istream& operator>>(istream& in, Vector_Complex& v)
{
    in>>n;
    v.vect = new Numar_Complex*[v.n];
    for(int i=0;i<n;i++)
        in>>v.vect[i]<<" ";

    return in;
}

Vector_Complex& Vector_Complex::operator =(const Vector_Complex& k)
{
    if(this==&k)
        return *this;

    for(int i=0;i<n;i++)
        delete [] vect[i];
    delete [] vect;

    this->n=k.n;
    vect= new Numar_Complex*[n];

    for(int i=0;i<n;i++)
        vect[i]=k.vect[i];
    return *this;
}

Vector_Complex& Vector_Complex::operator +(const Vector_Complex& v)
{
    Vector_Complex sum(*this);
    for(int i=0;i<n;i++)
        sum.vect[i]=vect[i]+v.vect[i];
    return sum;
}

Vector_Complex& Vector_Complex::operator *(const Vector_Complex& v)
{
    if(n!=v.n)
        cout<<"Cei 2 vectori nu se pot inmulti";

    Vector_Complex rez(0,n,v.n),that(*this);
    const Numar_Complex aux(0,0);
    for(i=0;i<n;i++)
    {
        rez.vect[i]=aux;
        for(k=0;k<v.n;k++)
        {
            rez.vect[i]=rez.vect[i]+ that.vect[i]*v.vect[k];
        }
    }
    return rez;
}

void Vector_Complex::SortareModul()
{
    const Numar_Complex aux(0,0);

}
