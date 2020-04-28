#include "Templates.cpp"
#include "SWektor.hh"
#include "SMacierz.hh"
#include <iostream>
#include <fstream>
 
using namespace std;

void TestLiczbReal()
{
    //double tab[ROZMIAR][ROZMIAR], tab2[ROZMIAR][ROZMIAR], stala=2.5;
    //SWektor<double, ROZMIAR> Wek[ROZMIAR], Wek2[ROZMIAR];
    double stala=2.5;
    SMacierz<double,ROZMIAR> Mac, Mac2; 
    for(int i=0; i<ROZMIAR; i++)
    {
        for(int j=0; j<ROZMIAR; j++)
        {

            double a=j-i;        
            cin >> Mac[i][j];
            Mac2[i][j] = Mac[j][i] + a;
        }
    }

    cout << "1 macierz:" << endl << Mac << endl;
    cout << "2 macierz:" << endl << Mac2<< endl;
    cout << Mac + Mac2<< endl;
    cout << Mac2 - Mac<< endl;
    cout << Mac * Mac2 << endl;
    cout << Mac * stala<< endl;
    
}

void TestLiczbZesp()
{
    Zespolona stala(2.0, 2.0);
    Zespolona zmienna;
    SMacierz<Zespolona,ROZMIAR> Mac, Mac2;
    for(int i=0; i<ROZMIAR; i++)
    {
        for(int j=0; j<ROZMIAR; j++)
        {
            zmienna.SetRe() = i+1.5*j;
            zmienna.SetIm() = i-j;
            cin >> Mac[i][j];
            Mac2[i][j] = Mac[j][i] + zmienna;
        }
    }

    cout << "1 macierz:" << endl << Mac << endl;
    cout << "2 macierz:" << endl << Mac2<< endl;
    cout << Mac + Mac2<< endl;
    cout << Mac2 - Mac<< endl;
    cout << Mac * Mac2 << endl;
    cout << Mac * stala<< endl;
}
void LiczbyZesp()
{
    Zespolona liczba(2, 2), liczba2(3, 3);
    Zespolona liczba3(1.0, 1.0);
    double stala = 2;
    cout << liczba3*liczba2 << endl;
    cout << liczba3*liczba2/liczba << endl;
    liczba3 = liczba3*stala-liczba3*liczba2/liczba;
    cout << liczba3 << endl;
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        switch (*argv[1])
        {
        case 'z':
            TestLiczbZesp();
            break;
       
        case 'r':
            TestLiczbReal();    
            break;
        
		case 'l':
			LiczbyZesp();
			break;
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