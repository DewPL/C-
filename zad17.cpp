#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish"); // Wyswietlanie Polskich znaków
	
	cout<<"7 Tablice"<<endl;
	cout<<"Zadanie 17"<<endl;
	cout<<"Napisz program, który wygeneruje wartoœci dla dwóch tablic kwadratowych o wymiarze 3."<<endl;
	cout<<"Wyœwietl elementy tych tablic w postaci macierzowej."<<endl; 
	cout<<"Parzyste wiersze pierwszej tablicy zast¹p parzystymi elementami drugiej tablicy"<<endl;
	cout<<"i wyœwietl ponownie elementy nowych tablic."<<endl;
	cout<<endl;
	
	srand(time(NULL));
	
	int tab[3][3], tab2[3][3], par1[3][3], par2[3][3];
	int i,j,a,b, c,d, e,f;
	//g,h,k,l;
	
	
		// tworzenie tablicy randomowej 1
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				tab[i][j] = rand() %50 + 1;
			}
		}
		
		// tworzenie randomowej tablicy 2
		
		for(a=0; a<3; a++)
		{
			for(b=0; b<3; b++)
			{
				tab2[a][b] = rand() %50 + 1;
			}
		}
		
		// wyswietlenie wartosci w macierzy
		
		cout<<endl;
		cout<<"Tab1:"<<endl;
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
		cout<<"Tab2:"<<endl;
		cout<<endl;
		
		for(a=0; a<3; a++)
		{
			for(b=0; b<3; b++)
			{
				cout<<tab2[a][b]<<"\t";
			}
			cout<<endl;
		}
		
			
		// -------------------------------
		
		cout<<"--------------------"<<endl;
		cout<<endl;
		cout<<"Parzyste w tablicy:"<<endl;
		cout<<endl;
		
		// Przeszukiwanie tablic
		
		cout<<"Tab1:"<<endl;
		cout<<endl;
		
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				if(tab[i][j] %2==0)
				{
					par1[c][d] = tab[i][j]; // zapisanie parametrow w zmiennej pomocnicznej
					cout<<par1[c][d]<<"\t";
				}
			} // for 2	
			cout<<endl;
		} // for
		
		cout<<endl;
		cout<<"Tab2:"<<endl;
		cout<<endl;
		
		for(a=0; a<3; a++)
		{
			for(b=0; b<3; b++)
			{
				if(tab2[a][b] %2==0)
				{
					par2[e][f] = tab2[a][b]; // zapisanie parametrow w zmiennej pomocnicznej
					cout<<par2[e][f]<<"\t";
				}
			} // for2
			cout<<endl;
		} // for
		
		
		// Zamiana parzystych elementow tablic ---------------------------------------------------------
		
		cout<<"--------------------"<<endl;
		
		
		cout<<endl;
		cout<<"tab1"<<endl;
		cout<<endl;
		
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				if(tab[i][j] %2==0)
				{
				tab[i][j] = par2[e][f];
				}
				cout<<tab[i][j]<<"\t";
			} // for2
			cout<<endl;
		} // for
		
		
		cout<<endl;
		cout<<"tab2"<<endl;
		cout<<endl;
		
		for(a=0; a<3; a++)
		{
			for(b=0; b<3; b++)
			{
				if(tab2[a][b] %2==0)
				{
				tab2[a][b] = par1[c][d];
				}
				cout<<tab2[a][b]<<"\t";
			} // for2
			cout<<endl;
		} // for
		
	return 0;
} // main
