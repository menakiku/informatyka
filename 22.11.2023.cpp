#include <iostream>
using namespace std;

int main(){
	
	short a = 2;
	while(a <= 30){
		cout << a << ", ";
		a += 2;
	}
	cout << endl << endl;
	// komentarz
	short liczba;
	do{ 
	     cout << "Podaj liczbe: ";
	     cin >> liczba;
	     
	}while(liczba != 5);
}