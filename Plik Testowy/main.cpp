#include "SWektorKon.cpp"
#include <iostream>
#include <fstream>
 
 


using namespace std;


int main(int argc, char **argv)
{
    if(argc == 2)
    {
        switch (*argv[1])
        {
        case 'r':
        {
			ifstream plik;
			plik.open("PlikReal.txt", ios::in);
            double tab[ROZMIAR];
            for(int i=0; i<ROZMIAR; i++)
                plik >> tab[i];
            SWektor<double, 5> Wek(tab, ROZMIAR);
            cout << Wek << endl;
			plik.close();
            break;
        }
        case 'z':
        {
			ifstream plik;
			plik.open("PlikZesp.txt", ios::in);
            Zespolona tabZ[ROZMIAR];
            for(int i=0; i<ROZMIAR; i++)
                plik >> tabZ[i];
            SWektor<Zespolona, 5> WekZ(tabZ, ROZMIAR);
            cout << WekZ << endl;
			plik.close();
            break;
        }
        default:
            cerr << "Nie podano odpowiedniego parametru, musi być 'r' lub 'z'" << endl;
            break;
        }
        return 0;
    }
    else
    {
        cerr << "Nie podano odpowiedniego parametru, 'r' lub 'z'" << endl;
        return 1;
    }
    
}
/*
UkladRownanLiniowych Rownanie;
cin >> Rownanie;
cout << "Równanie liniowe postaci: " << endl << Rownanie << endl;
Wektor WektorWynik = Rownanie.Solve();
cout << "Rozwiązanie: " << endl << WektorWynik << endl;
Wektor WektorBledu = Rownanie.GetMatrix()*WektorWynik - Rownanie.GetVector();
cout << "Wektor błędu: " << endl << WektorBledu << endl;
cout << "Długość wektora błędu: " << endl <<  WektorBledu.dlugosc() << endl;
*/