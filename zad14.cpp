#include<iostream>
using namespace std;

int main()
{
	int tab[6];
	int suma;
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 14\nNapisz program, ktory sposrod s liczb podanych przez uzytkownika wyszuka te, ktore"<<endl;
	cout<<"sa podzielne przez 3, i obliczy ich sume."<<endl;
	
	cout<<"\nPodaj liczby: "<<endl;
	
	for(int i=0; i<6; i++)
	{
	cin>>tab[i];
	}
	
	for(int i=0; i<6; i++)
	{
		if(tab[i] %3 == 0)
		{
			cout<<"Liczby podzielne przez 3 to: "<<tab[i]<<endl;
			suma += tab[i];
		}
	}// for2
			cout<<"Suma tych liczb to: "<<suma<<endl;
	
	return 0;
} //main
