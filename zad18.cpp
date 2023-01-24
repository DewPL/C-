#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish"); // Wyswietlanie Polskich znaków
	
	cout<<"7 Tablice"<<endl;
	cout<<"Zadanie 18"<<endl;
	cout<<"Napisz program, który wygeneruje wartoœci dla tablicy kwadratowej o wymiarze 4, a nastêpnie zamieni miejscami"<<endl;
	cout<<"wiersze z kolumnami. Wypisz powsta³¹ tablicê."<<endl;
	cout<<endl;
	
	srand(time(NULL));
	
	int tab[4][4],tab2[4][4], i,j;
	
	
	// tworzenie tablicy randomowej 1
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			tab[i][j] = rand() %50 + 1;
		}
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			tab2[i][j] = tab[j][i];
		} // for2
	} // for
		
		
	// wyswietlenie wartosci podstawowej
	cout<<"Tablica wersja 1"<<endl;
	cout<<endl;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<tab[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl;
	cout<<"------------------------------"<<endl;
		
		
	// wyswietlenie zawartosci po zamianie
	cout<<"Tablica wersja 2"<<endl;
	cout<<endl;
	
	for(j=0; j<4; j++)
	{
		for(i=0; i<4; i++)
		{
			cout<<tab2[j][i]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl;
		
	return 0;
} // main
