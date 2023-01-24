#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish"); // Wyswietlanie Polskich znaków
	
	cout<<"7 Tablice"<<endl;
	cout<<"Zadanie 19"<<endl;
	cout<<"Napisz program, który wygeneruje wartoœci dla dwóch tablic kwadratowych o wymiarze 3 i wyœwietli wartoœci obu tablic."<<endl;
	cout<<"Dodaj obie tablice. Wynikiem jest tablica kwadratowa o wymiarze 3. Wyœwietl wartoœci nowej tablicy."<<endl;
	cout<<endl;
	
	srand(time(NULL));
	
	int tab[3][3],tab2[3][3], i,j;
	int wyn[3][3];
	
	
	// tworzenie tablicy randomowej 1
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			tab[i][j] = rand() %20 + 1;
		}
	}
	
	// tworzenie tablicy randomowej 2
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			tab2[i][j] = rand() %20 + 1;
		} 
	} 
		
		
	// wyswietlenie wartosci podstawowej
	cout<<"Tablica 1"<<endl;
	cout<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<tab[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl;

		
	cout<<"Tablica 2"<<endl;
	cout<<endl;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<tab2[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl;
	
	cout<<"------------------------------"<<endl;
	
	cout<<endl;
	cout<<"Wynik:"<<endl;
	cout<<endl;
	
	for(j=0; j<3; j++)
	{
		for(i=0; i<3; i++)
		{
			wyn[i][j] = tab[i][j] + tab2[i][j];
			cout<<wyn[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl;
	
		
	return 0;
} // main
