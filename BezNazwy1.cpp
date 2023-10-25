#include <iostream>
using namespace std;
int main ()
{ 
	// deklaracja zmiennych
    short liczba = 2;
    float zmiennoprzecinkowa = 3.21;
    string tekst = "tekst";
    char znak = 'A';
    bool logiczny = false;
    
    /*
    cout << "Hello world!";
    cout << endl;    // koniec lini
    cout << "Liczba: " << liczba;   // wyswietlenie zmiennej
    cout << endl;
    
    string wyraz;
    cout << "Podaj jakis wyraz: ";
    cin >> wyraz;
    cout <<"Podales wyraz: " << wyraz;
    */
    string imie; 
	cout << "Podaj swoe imie";
	cin  >> imie;
	
	short wiek;
	cout << "Podaj wiek";
	cin >> wiek;
	 
	
	cout <<" Witaj " << imie << " masz " <<wiek <<" lat ";

	
	
	
	
    return 0;

}