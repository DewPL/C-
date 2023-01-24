#include<iostream>
using namespace std;

int main()
{
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 15\nNapisz program, ktory sposrod liczb naturalnych mniejszych od 100 wyszuka i"<<endl;
	cout<<"wypisze liczby podzielne przez 5 i jednoczesnie niepodzielne przez 3.\n"<<endl;
	
	int i;
	
	cout<<"Liczby podzielne przez 5:\n"<<endl;
	
	for(i=0; i<100; i++)
	{
		if(i %5 == 0)
		{
			cout<<i<<endl;
		}
	}// for
	
	cout<<"\nLiczby niepodzielne przez 3:\n"<<endl;
	
	for(i=0; i<100; i++)
	{
		if(i %3 != 0)
		{
			cout<<i<<endl;
		}
	}// for2
	
	return 0;
} //main
