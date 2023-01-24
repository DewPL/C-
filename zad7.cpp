#include<iostream>
using namespace std;


int main()
{
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 7\nNapisz program, ktory wypisze w postaci kolumnowej liczby calkowite od 1 do 25 w porzadku rosnacym i porzadku malejacym."<<endl;
	
	int i = 1;
	do
	{
		cout<<i<<endl;
		i++;
	}
	while(i<=25);
	
	cout<<"\n\n"<<endl;
	
	int j=25;
	do
	{
		cout<<i<<endl;
		i--;
	}
	while(i>=1);

	return 0;
}
