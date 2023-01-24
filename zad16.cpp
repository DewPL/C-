#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish"); // Wyswietlanie Polskich znaków
	
	cout<<"7 Tablice"<<endl;
	cout<<"Zadanie 16"<<endl;
	cout<<"NNapisz program, który znajdzie maksymalny element na g³ównej przek¹tnej kwadratowej tablicy dwuwymiarowej o wymiarze 4."<<endl;
	cout<<endl;
	
	srand(time(NULL));
	
	int tab[4][4];
	int i,j,max = 0,a,b;
	
	
		// tworzenie tablicy randomowej
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				tab[i][j] = rand() % 50 + 1;
			}
		}
		
		
		// wyswietlenie wartosci w macierzy
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				cout<<tab[i][j]<<"\t";
			}
			cout<<endl;	
		}
		
		cout<<endl;
		
		
		max = tab[0][0];
		
		// szukanie wartoœci 
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				if(i == j)
			
				if(max < tab[i][j])
				{
					max = tab[i][j];
				}
			}
		}
		
		if(max > a)
		{
			cout<<"Najwiêkszy element przek¹tnej tablicy to: "<<max;
		}
		cout<<endl;
	
		
	return 0;
} // main
