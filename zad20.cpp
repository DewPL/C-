#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish"); // Wyswietlanie Polskich znaków
	
	cout<<"7 Tablice"<<endl;
	cout<<"Zadanie 20"<<endl;
	cout<<"Napisz program, który wczyta wartoœci dla tablicy kwadratowej o wymiarze 3, podane przez u¿ytkownika."<<endl;
	cout<<"Zlicz liczbê wyst¹pieñ okreœlonych wartoœci i wyœwietl wyniki na ekranie monitora."<<endl;
	cout<<endl;
	

	
	int tab[3][3], i,j,x,n;
	int ile;
	size_t ilosc = 0;
	
	cout<<"Podaj parametry tablicy: "<<endl;
	// tworzenie tablicy randomowej 1
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>tab[i][j];
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


	for(i=0; i<3; i++)
	{
		for(j=0; j<ile; j++)
		{
			if(tab[i][j] == x)
			ilosc++;
		}
		cout<<ilosc<<" - "<<x<<endl;
	}


/*	int rozmiar = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        // Pomocnicza zmienna
    
        for (int j = 0; j < rozmiar; j++)
        {
            if (tab[i][j] == x) { // 'tab[j] == i' a nie 'tab[i] == j'
                ++ilosc;
            }
        }
        
        cout<<"Element: "<<x<<" - "<<ilosc<<endl;
    }*/
    
    
	cout<<"------------------------------"<<endl;
	
	
	return 0;
} // main
