#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

int main()
{

    string imie;
    cout << "Podaj swe imie: "<<endl;
    cin >> imie;

    char plec;
    cout << "Podaj swoja plec. Jesli jestes kobieta, podaj K, jesli jestes mezczyzna, podaj M: "<< endl;
    plec=getch();
    cout << plec << endl;

    if (plec == 'M' || plec == 'm')
       cout <<imie<<", witam Pana!" << endl;
    else if (plec == 'K' || plec == 'k')
       cout <<imie<<", witam Pania!" << endl;
    else
        cout << "Podano niepoprawne dane!"<<endl;

    int liczba_a,liczba_b;
    cout << "podaj liczbe a: ";
    cin >> liczba_a;
    cout <<"podaj liczbe b: ";
    cin >> liczba_b;
    cout << endl;

    if (liczba_a>=0)
        cout << "Liczba a = " << liczba_a << " jest nieujemna!" << endl;
    else
        cout <<"liczba a = " << liczba_a << " jest ujemna!"<< endl;

    if (liczba_b>=0)
        cout << "Liczba b = " << liczba_b << " jest nieujemna!" << endl;
    else
        cout <<"liczba b = " << liczba_b << " jest ujemna!"<< endl;




    if (liczba_a>-10 && liczba_a<10)
        cout << "Liczba a jest jednocyfrowa"<<endl;
    if (liczba_a>=10 && liczba_a<100|| liczba_a<=-10&& liczba_a>-100)
        cout << "Liczba a jest dwucyfrowa"<< endl;
    else if (liczba_a>=100 || liczba_a<=-100)
        cout << "Liczba a jest inna"<< endl;

    if (liczba_b>-10 && liczba_b<10)
        cout << "Liczba b jest jednocyfrowa"<<endl;
    else if (liczba_b>=10 && liczba_b<100 || liczba_b<=-10 && liczba_b>-100)
        cout << "Liczba b jest dwucyfrowa"<< endl;
    else if (liczba_b>=100 || liczba_b<=-100)
        cout << "Liczba b jest inna"<< endl;

    float dwa=2;

    if((2*liczba_b)==0)
        cout << "Przykro mi, przez zero nie dzielimy :(" << endl;
    else
       cout << liczba_a <<" : (2 * "<<liczba_b <<") = " << liczba_a/(dwa*liczba_b);


    return 0;
}
