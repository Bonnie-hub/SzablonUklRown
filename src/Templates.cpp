#include "SWektor.cpp"
#include "SMacierz.cpp"
#include "SUklad.cpp"
#include "LZespolona.hh"

template class SUklad<Zespolona, ROZMIAR>;
template class SUklad<double, ROZMIAR>;
template std::istream& operator >> (std::istream &Strm, 
                        SUklad<Zespolona,ROZMIAR>  &UklRown);
template std::istream& operator >> (std::istream &Strm, 
                        SUklad<double,ROZMIAR>  &UklRown);
template std::ostream& operator << (std::ostream      &Strm,
                         SUklad<Zespolona,ROZMIAR> &UklRown);
template std::ostream& operator << (std::ostream      &Strm,
                        SUklad<double,ROZMIAR> &UklRown);

template class SMacierz<Zespolona, ROZMIAR>;
template class SMacierz<double, ROZMIAR>;
template std::istream& operator >> (std::istream &Strm, SMacierz<double, ROZMIAR> &Mac);
template std::ostream& operator << (std::ostream &Strm, const SMacierz<double, ROZMIAR> &Mac);
template std::istream& operator >> (std::istream &Strm, SMacierz<Zespolona, ROZMIAR> &Mac);
template std::ostream& operator << (std::ostream &Strm, const SMacierz<Zespolona, ROZMIAR> &Mac);

template class SWektor<Zespolona,5>;
template class SWektor<double,5>;
template std::istream& operator >> (std::istream &Strm, SWektor<Zespolona, 5> &Wek);
template std::istream& operator >> (std::istream &Strm, SWektor<double, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<Zespolona, 5> &Wek);
template std::ostream& operator << (std::ostream &Strm, const SWektor<double, 5> &Wek);
