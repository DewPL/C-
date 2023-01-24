#include<iostream>
using namespace std;

int main()
{
	int a, b, wynik;
	
	cout<<"5. Instrukcje steruj¹ce"<<endl;
	cout<<"Zadanie 1\n\nNapisz program, ktory wykona mnozenie dwoch wczesniej podanych przez ciebie";
	cout<<" liczb, przypisze wynik pewnej zmiennej, a nastepnie sprawdzi, czy wynik mnozenia";
	cout<<" jest wiekszy, rowny, czy mniejszy od 100"<<endl;
	

	
	cout<<"\nPodaj a: "<<endl;
	cout<<"Podaj b: "<<endl;
	cin>>a;
	cin>>b;
	wynik = a * b;
	cout<<"\nWynik:"<<wynik<<"\n"<<endl;
	
	if(wynik > 100)
	{
		cout<<"Wynik jest wiekszy niz 100"<<endl;
		
	}
		else if(wynik == 100)
	{
		cout<<"Wynik jest rowny 100"<<endl;
	}
	else
	{
		cout<<"Wynik jest mniejszy od 100"<<endl;
	}

	return 0;
} // main
