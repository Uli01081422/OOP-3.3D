#include "Complex_Public.h"
#include "Pair.h"

using namespace std;

Complex_Public::Complex_Public()
	: Pair(0, 0)
{}
Complex_Public::Complex_Public(double a, double b)
	: Pair(a, b)
{}

Complex_Public::Complex_Public(const Pair&m)
	: Pair(m.get_a(), m.get_b())
{}


Complex_Public& Complex_Public:: operator ++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}
Complex_Public& Complex_Public:: operator --()
{
	this->set_a(this->get_a() - 1);
	return *this;
}
Complex_Public Complex_Public:: operator ++(int)
{
	Complex_Public p(*this);
	this->set_a(this->get_a() + 1);
	return p;
}
Complex_Public Complex_Public:: operator --(int)
{
	Complex_Public p(*this);
	this->set_a(this->get_a() - 1);
	return p;
}

Complex_Public::operator string() const
{
	stringstream ss;
	ss << " a = " << get_a() << "; " << "b = " << get_b() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Complex_Public& f)
{
	out << string(f);
	return out;
}
istream& operator >> (istream& in, Complex_Public& m)
{
	int a, b;
	cout << "a: "; in >> a;
	cout << "b: "; in >> b;
	cout << endl;
	m.set_a(a);
	m.set_b(b);

	return in;
}

Complex_Public operator - (Complex_Public l, Complex_Public r)
{
	Pair h(l.get_a() - r.get_b(), l.get_a() - r.get_b());
	return h;
}

Complex_Public operator + (Complex_Public l, Complex_Public r)
{
	Pair h(l.get_a() + r.get_b(), l.get_a() + r.get_b());
	return h;
}

Complex_Public operator * (Complex_Public l, Complex_Public r)
{
	Pair h(l.get_a() * r.get_b() - l.get_a()* r.get_b(), l.get_a() * r.get_b() + l.get_a() * r.get_b());
	return h;
}


