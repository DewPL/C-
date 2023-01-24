#include<iostream>
#include<cmath>
using namespace std;

float a, b, c, por, obr, obp;

int main()
{
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 5 \nNapisz program, ktory wczyta trzy liczby: a, b, c, oraz sprawdzi, czy mozna z nich zbudowac trojkat."<<endl;
	cout<<"Jesli tak, to sprawdz, czy jest to trojkat rownoboczny, czy - prostokatny."<<endl;
	cout<<"Jesli to trojkat rownoboczny, oblicz jego obwod i pole."<<endl; 
	cout<<"Wyniki wyswietl na ekranie monitora. Jesli jest to trojkat prostokatny, oblicz jego obwod i wyswietl ";
	cout<<"jego wartosc. Jesli liczby a, b, c nie tworza trojkata, wyswietl komunikat: "<<endl;
	cout<<"„Z tych bokow nie mozna zbudowac trojkata\". Uwaga: Boki trójk¹ta s¹ liczbami dodatnimi."<<endl;
	
	cout<<"Podaj bok a:"<<endl;
	cin>>a;
	cout<<"Podaj bok b:"<<endl;
	cin>>b;
	cout<<"Podaj bok c:"<<endl;
	cin>>c;
	
	if(a == b && a == c && a > 0)
	{
		cout<<"Z podanych bokow zbujesz trojkat: ";
		cout<<"rownoboczny"<<endl;
		por = a * a * sqrt(3) / 4;
		obr = a + b + c;
		cout<<"Pole trojkatarownobocznego wynosi: "<<por<<" a obowod: "<<obr<<endl;
	}
	else if(a < b && b < c)
	{
		obp = a + b + c;
		cout<<"Jest to trojkat prostokatny o obwodzie: "<<obp<<endl;
	}
	else
	{
		cout<<"Z tych bokow nie mozna zbudowac trojkata";
	}
	
	return 0;
} // main
