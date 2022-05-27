#include <iostream>
using namespace std;

///////////// ZADANIE 2.2.1


/*    
int WartoscBezwzgledna(int liczba) {
	if (liczba > 0)
		return liczba;
	else
		return liczba * (-1);
}

int main() {
	int n;
	cout << "Podaj liczbe: "; cin >> n;
	cout << "Wartosc bezwzgledna danej liczby wynosi: " << WartoscBezwzgledna(n);
}
*/


///////////// ZADANIE 2.2.2


/*   
long long silnia(long long liczba) {
	long long wynik = 1;
	for (liczba; liczba > 1 ; liczba--) {
		wynik *= liczba;
	}
	return wynik;
}

int main(){
	long long n;
	cin >> n;
	while (n <= 0)
	{
		if (n <= 0) {
			cout << "Liczba musi byc wieksza od 0, podaj odpowiednia wartosc: "; cin >> n;
		}
	}
	cout << silnia(n);
}*/

///////////// ZADANIE 2.2.3

/*
int funkcja(int liczba) {
	int k = 1;
	for (int i = 1; i < liczba; i++) {
		liczba / i;
		if (liczba % i == 0) {
			k = i;
		}
	}
		return k;
}

int main() {
	int n;
	cin >> n;
	while ((n < 2) || (n == 2))
	{
		if ((n < 2) || (n == 2)) {
			cout << "Liczba musi byc wieksza od 2, podaj odpowiednia wartosc: "; cin >> n;
		}
	}
	cout << funkcja(n);
}*/


///////////// ZADANIE 2.2.4

/*int funkcja(int liczba) {
	int wynik = 1;
	for (int i = 1; i <= liczba; i++) {
		 wynik *= 2;
	}
	return wynik;
}

int main() {
	int n;
	cin >> n;
	while (n <= 0)
	{
		if (n <= 0) {
			cout << "Liczba musi byc wieksza od 0, podaj odpowiednia wartosc: "; cin >> n;
		}
	}
	cout << funkcja(n);
	}*/


///////////// ZADANIE 2.2.5


/*
float funkcja(int liczba) {
	float wynik = 1;

	if (liczba == 0)
		return 1;
	if(liczba > 0) {
		for (int i = 1; i <= liczba; i++) {
			wynik *= 2;
		}
		return wynik;
	}
	if (liczba < 0) {

		for (int i = -1; i >= liczba; i--) {
			wynik *= 2;
		}
		return wynik;
	}
}

int main() {
	int n;
	cin >> n;

	if (n >= 0)
		cout << funkcja(n);
	else
		cout << "1/" << funkcja(n);
}*/


/////Zadanie 6.2.5

//funkcja dla zadania 6.2.1
/*
int*** tablica3D(unsigned int n, unsigned int m, unsigned int o) {

	int*** tab = new int** [n];

	for (int i = 0; i < n; i++) {
		tab[i] = new int* [m];

		for (int j = 0; j < m; j++) {
			tab[i][j] = new int[o];
		}
	}
	return tab;
}

//funkcja dla zadania 6.2.3

void free(unsigned int n, unsigned int m, unsigned int o, int*** tab) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			delete[] tab[i][j];
		}
		delete[] tab[i];
	}
	delete[] tab;
}

int main() {
	unsigned int x; cin >> x;
	unsigned int y; cin >> y;
	unsigned int z; cin >> z;
	free(x, y, z, tablica3D(x, y, z));
}
*/


////// Zadanie 7.2.7


////// Zadanie 7.2.8


/*
struct Student {
	string imie;
	string nazwisko;
	string adres;
	char pesel[10];
	string kierunek;
	char nrLegitymacji[5];
};
void dodaj(struct Student* dane) {

	cin >> dane->imie;
	cin >> dane->nazwisko;
	getline(cin, dane->adres);
	getline(cin, dane->kierunek);

	for (int i = 0; i < 10; i++) {
		cin >> dane->pesel;
	}

	for (int i = 0; i < 5; i++) {
		cin >> dane->nrLegitymacji;
	}


}
int main() {
	struct Student student;
	struct Student* ktory;
	ktory = &student;

	dodaj(ktory);
}
*/