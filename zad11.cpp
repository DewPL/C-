#include<iostream>
using namespace std;

int main()
{
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 11\nNapisz program, ktory dla podanej przez uzytkownika liczby calkowitej obliczy sume cyfr tej liczby"<<endl;
	int i, wynik = 0;
	
	cout<<"\nPodaj jakas liczbe: "<<endl;
	cin>>i;
	while(i > 0)
	{
		wynik += i % 10;
		i /= 10;
	}
	cout<<"Suma cyfr liczby podanej wynosi: "<<wynik<<endl;
	
	return 0;
}
