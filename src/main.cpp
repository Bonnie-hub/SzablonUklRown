#include "Templates.cpp"
#include "SWektor.hh"
#include "SMacierz.hh"
#include "SUklad.hh"
#include <iostream>
#include <fstream>
 
using namespace std;

void UkladReal()
{
    SUklad<double, ROZMIAR> Ukl;
    cin >> Ukl;
    cout << "Układ równań:" << endl << Ukl << endl;
    cout << Ukl.Solve() << endl;
}

void UkladZesp()
{
    SUklad<Zespolona, ROZMIAR> Ukl;
    cin >> Ukl;
    cout << "Układ równań:" << endl << Ukl << endl;
    cout << Ukl.Solve() << endl;
}

void TestLiczbReal()
{
    double stala=2.5;
    SMacierz<double,ROZMIAR> Mac, Mac2; 
    cin >> Mac;
    for(int i=0; i<ROZMIAR; i++)
    {
        for(int j=0; j<ROZMIAR; j++)
        {

            double a=j-i;        
            Mac2[i][j] = Mac[j][i] + a;
        }
    }

    cout << "1 macierz:" << endl << Mac << endl;
    cout << "2 macierz:" << endl << Mac2<< endl;
    cout << Mac + Mac2<< endl;
    cout << Mac2 - Mac<< endl;
    cout << Mac * Mac2 << endl;
    cout << Mac * stala<< endl;
    cout << "wyznacznik macierzy 1:  " << Mac.Wyznacznik_Gaussa() << endl;
    cout << "wyznacznik macierzy 2:  " << Mac2.Wyznacznik_Gaussa() << endl;
}

void TestLiczbZesp()
{
    Zespolona stala(2.0, 2.0);
    Zespolona zmienna;
    SMacierz<Zespolona,ROZMIAR> Mac, Mac2;
    cin >> Mac;
    for(int i=0; i<ROZMIAR; i++)
    {
        for(int j=0; j<ROZMIAR; j++)
        {
            zmienna.SetRe() = i+1.5*j;
            zmienna.SetIm() = i-j;
            Mac2[i][j] = Mac[j][i] + zmienna;
        }
    }

    cout << "1 macierz:" << endl << Mac << endl;
    //cout << "2 macierz:" << endl << Mac2<< endl;
    //cout << Mac + Mac2<< endl;
    //cout << Mac2 - Mac<< endl;
    //cout << Mac * Mac2 << endl;
    //cout << Mac * stala<< endl;
    cout << "Wyznacznik 1 macierzy:  " << Mac.Wyznacznik_Gaussa()<< endl;
    //cout << "Wyznacznik 2 macierzy:  " << Mac2.Wyznacznik_Gaussa()<< endl;
}

void WektorZesp()
{
    SWektor<Zespolona, ROZMIAR> Wek;
    cin >> Wek;
    cout << Wek << endl;
}

void LiczbyZesp()
{   
    Zespolona liczba(2,1), liczba2(1,3);
    cout << liczba << " " << liczba2 << endl;
    cout << liczba/liczba2 << endl;
    cout << liczba*liczba2 << endl;
    cout << liczba2*liczba<< endl;
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        switch (*argv[1])
        {
        case 'Z':
            TestLiczbZesp();
            break;
       
        case 'R':
            TestLiczbReal();    
            break;
        
		case 'l':
			LiczbyZesp();
			break;

        case 'z':
			UkladZesp();
			break;

        case 'r':
			UkladReal();
			break;

        case 'W':
			WektorZesp();
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