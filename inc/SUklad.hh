#ifndef SUKLAD_HH
#define SUKLAD_HH

#include "SMacierz.hh"
template<class T, int SIZE>
class SUklad
{
    SWektor<T,SIZE> Wek;
    SMacierz<T,SIZE> Mac;

    public:

    SUklad ();
    SUklad (const SMacierz<T,SIZE> & M1, const SWektor<T,SIZE> & W1);
    ~SUklad ();
    SWektor<T,SIZE> & GetVector();
    SMacierz<T,SIZE> & GetMatrix();
    SWektor<T,SIZE> Solve() const;
};

template<class T, int SIZE>
std::istream& operator >> (std::istream&Strm, 
                        SUklad<T,SIZE> &UklRown);

template<class T, int SIZE>
std::ostream& operator << (std::ostream    &Strm,
                            SUklad<T,SIZE> &UklRown);
#endif