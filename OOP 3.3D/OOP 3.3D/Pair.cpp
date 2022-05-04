#include <iostream>
#include "Pair.h"
#include <sstream> 

using namespace std;


Pair::Pair()
    : a(0), b(0)
{}



Pair::Pair(double a, double b)
    : a(a), b(b)
{}

Pair::Pair(const Pair& m)
    : a(m.a), b(m.b)
{}

Pair::~Pair(void)
{}

Pair& Pair::operator=(const Pair& m)
{
    this->a = m.a;
    this->b = m.b;
    return  *this;
}

Pair::operator string() const
{
    stringstream ss;
    ss;
    ss << " a = " << a << "; " << "b = " << b << endl;
    return ss.str();
}


Pair operator+(const Pair& l, const Pair& r)
{
    Pair t;
    t.a = l.a + r.a;
    t.b = l.b + r.b;
    return t;
}
