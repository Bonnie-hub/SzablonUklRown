#include "SWektor.cpp"
#include "SMacierz.cpp"
#include "LZespolona.hh"

template class SMacierz<double, ROZMIAR>;
template std::istream& operator >> (std::istream &Strm, SMacierz<double, ROZMIAR> &Mac);
template std::ostream& operator << (std::ostream &Strm, const SMacierz<double, ROZMIAR> &Mac);

template class SWektor<Zespolona,5>;
template class SWektor<double,5>;
template std::istream& operator >> (std::istream &Strm, SWektor<Zespolona, 5> &Wek);
template std::istream& operator >> (std::istream &Strm, SWektor<double, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<Zespolona, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<double, 5> &Wek);
