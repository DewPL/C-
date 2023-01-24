#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	float a, b, pol, o, d;
	char c = 'p'; 'k';
	
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 6\nNapisz program, ktory poprosi uzytkownika o podanie zmiennej znakowej k. Jesli k"<<endl;
	cout<<" bedzie litera (p), popros o podanie dlugosci bokow prostokata i sprawdz, czy wprowadzone liczbami dodatnimi."<<endl;
	cout<<"Jesli tak, to oblicz pole i obwod prostokata. Jesli k bedzie litera (k), to popros o podanie dlugosci "<<endl;
	cout<<"boku kwadratu. Sprawdz, czy wprowadzona wartosc jest dodatnia. Jesli tak, to oblicz dlugosc przekatnej kwadratu. "<<endl;
	cout<<"Dla kazdej innej litery wprowadzonej przez uzytkownika wyswietl komunikat:\"Koniec programu\".\n\n"<<endl;
	
	cout<<"Podaj prosze zmienna k"<<endl;
	cin>>c;
	
	if(c == 'p')																			// prostokat
	{
		cout<<"Obliczymy teraz pole oraz obwod prostokata"<<endl;		
	
		cout<<"Podaj dlugosc boku a: "<<endl;
		cin>>a;
		
		cout<<"Podaj dlugosc boku b: "<<endl;
		cin>>b;
		
		if(a > 0 && b > 0)
		{
			if(a == b)
			{
				cout<<"Z tego nie zbudujemy prostokata!!";
			}
			else
			{
			
				pol = a * b;
				o = a * a + b * b;
				cout<<"Pole prostokata o bokach a: "<<a<<" i b: "<<b<<" wynosi: "<<pol<<endl;
				cout<<"Obwod tego prostokata to "<<o<<endl;
			} // else if3
		} // if 2
		else
		{
			cout<<"Bledne dane";
		}
	} // if 1
	else if(c == 'k')  																		// Kwadrat
	{
		cout<<"Obliczymy teraz pole, obwod i przekatna kwadratu"<<endl;
		cout<<"Podaj dlugosc boku a "<<endl;
		cin>>a;
		
		if(a > 0)
		{
			pol = a * a; 			// pole
			o = 4 * a; 				// obwod
			d = a * sqrt(2);		// przekatna
			
			cout<<"Pole kwadratu o boku a "<<a<<" rowna sie "<<pol<<endl;
			cout<<"A obowod takiego kwadratu wynosi "<<o<<endl;
			cout<<"Przekatna tego kwadratu wynosi "<<d;
		}
		else
		{
			cout<<"Bledne dane";
		}
	} // else if
	else
	{
		cout<<"Bledne dane";
	}

	return 0;
} // main
