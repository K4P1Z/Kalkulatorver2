#include <iostream>
#include <math.h>
using namespace std;
void opisKalkulatora(); //deklaracja funkcji nic nie zwracającej
float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
float mnozenie(float liczba1, float liczba2);
void dzielenie(float liczba1, float liczba2);
double pierwiastekLiczba1(float liczba1);
double pierwiastekLiczba2(float liczba2);
double Potegowanie(float liczba1, float liczba2);


int main()
{
	float liczba1, liczba2;
	opisKalkulatora();
	cout << "Podaj liczba1 = "; cin >> liczba1;
	cout << "Podaj liczba2 = "; cin >> liczba2;
	cout << "Dodawanie = " << dodawanie(liczba1, liczba2) << endl;
	cout << "Odejmowanie = " << odejmowanie(liczba1, liczba2) << endl;
	cout << "Mnozenie = " << mnozenie(liczba1, liczba2) << endl;
	dzielenie(liczba1, liczba2);
	cout << "PierwiastekL1 = " << pierwiastekLiczba1(liczba1) << endl;
	cout << "PierwiastekL2 = " << pierwiastekLiczba2(liczba2) << endl;
	cout << "Potegowanie = " << Potegowanie(liczba1, liczba2) << endl;



	system("pause");
}
//definicja funkcji wczesniej zadeklarowanej
void opisKalkulatora() {
	cout << "Kacper Kionka: Ver 2 Kalkulator" << endl;
}

float dodawanie(float liczba1, float liczba2)
{
	return liczba1 + liczba2;
}

float odejmowanie(float liczba1, float liczba2)
{
	return liczba1 - liczba2;
}

float mnozenie(float liczba1, float liczba2)
{
	return liczba1 * liczba2;
}

void dzielenie(float liczba1, float liczba2)
{
	if (liczba2 == 0) {
		cout << "Nie dziel Szlachcicu przez ZERO" << endl;
	}
	else {
		cout << "Dzielenie = " << liczba1 / liczba2 << endl;
	}
}

double pierwiastekLiczba1(float liczba1)
{
	if(liczba1==0) return sqrt(liczba1);
}

double pierwiastekLiczba2(float liczba2)
{
	if(liczba2==0) return sqrt(liczba2);
}

double Potegowanie(float liczba1, float liczba2)
{
	return pow(liczba1, liczba2);
}
