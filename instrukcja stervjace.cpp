	#include <iostream>
	using namespace std;

	int main (){
	// liczby calkowite - short, int, long, unsigned short
	short a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	
	// instrukcja warunkowa - if(warunek)
	if(a > b){ // jezeli warunek sie spelni to wykona to co jest w klamrach
	    cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
	}
	// = operator przypisania
	// == operator porownania
	// != nie rowne (rozne od)
	else if (a == b){ // jezeli warunek powyzej zwroci falsz to sprawdza kolejny warunek
		cout << a << " ==  "<< b;
	}
	else{ // jezeli zaden z powyszych warunkow sie nie spelnil to wykonuje else 
		cout << a << "  < " << b;
	}	
	
	cout << endl;
	system("pause");
	}
	