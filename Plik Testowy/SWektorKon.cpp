#include "SWektor.cpp"
//#include "Wektor.cpp"
//#include "Macierz.cpp"
#include "LZespolona.hh"

template class SWektor<Zespolona,5>;
template class SWektor<double,5>;
template std::istream& operator >> (std::istream &Strm, SWektor<Zespolona, 5> &Wek);
template std::istream& operator >> (std::istream &Strm, SWektor<double, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<Zespolona, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<double, 5> &Wek);