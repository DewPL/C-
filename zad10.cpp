#include<iostream>
using namespace std;


int main()
{
	int a;
	
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 10\nNapisz program, ktory wczytuje liczby z klawiatury az do momentu, gdy uzytkownik poda liczbe z przedzialu <10,15>."<<endl;
	
	cout<<"\nPodaj liczbe z przedzialu 10-15"<<endl;
	cin>>a;
	
	
	while(a<10 || a>15)
	{
		cin>>a;
		if(a>=10 && a<=15)
		{
		cout<<"Dobrze.";
		}
		
		if(a < 10)
		{
			cout<<"Za nisko"<<endl;
			cout<<"Sprobuj raz jeszcze: \n"<<endl;
			//cin>>a;
		}
		
		else if(a>15)
		{
			cout<<"Za wysoko"<<endl;
			cout<<"Sprobuj raz jeszcze: \n"<<endl;
			//cin>>a;
		}
	} // while
	
	
	return 0;
} // main
