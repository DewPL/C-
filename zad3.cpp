#include<iostream>
using namespace std;
float a, b, c, wynik;

int main()
{
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 3 \nNapisz program, ktory pobierze wartosci dla 3 zmiennych i wykona:\n"<<endl;
	cout<<" - mnozenie liczby pierwszej oraz drugiej, gdy liczba pierwsza jest wieksza od trzeciej i liczba druga jest wiêksza\nod pierwszej"<<endl;
	cout<<" - dzielenie drugiej przez trzecia, gdy liczba druga jest mniejsza od trzeciej albo mniejsza od pierwszej"<<endl;
	cout<<" - dodawanie wszystkich trzech liczb w przypadku, gdy liczba trzecia jest wieksza od pierwszej i liczba druga nie \njest rowna 5 lub liczba druga jest wieksza od trzeciej oraz liczba pierwsza nie jest rowna 0."<<endl;
	
	cout<<"Podaj a:"<<endl;
	cin>>a;
	cout<<"Podaj b:"<<endl;
	cin>>b;
	cout<<"Podaj c:"<<endl;
	cin>>c;
		
	
	if(a > c && b > a)
	{
		wynik = a * b;
		cout<<a<<" * "<<b<<" = "<<wynik;
	}
	else if(b < c && b < a)
	{
		wynik = b / c;
		cout<<b<<" / "<<c<<" = "<<wynik;
	}
	else if(c > a && b != 5 && b > c && a != 0)
	{
		wynik = a + b + c;
		cout<<a<<" + "<<b<<" + "<<c<<" = "<<wynik;
	}
	else
	{
		cout<<"Tego w zadaniu nie bylo xd";
	}
	
	return 0;
} // main
