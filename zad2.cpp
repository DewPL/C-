#include<iostream>
using namespace std;

int main()
{
	int a, b, wynik;
	
	cout<<"5. Instrukcje steruj¹ce"<<endl;
	cout<<"Zadanie 2\nNapisz program, ktory wykona dodawanie dwoch wpisanych z klawiatury liczb, ale tylko wtedy, gdy nie bêd¹ sobie rowne. ";
	cout<<"\nW przeciwnym razie wykona dzielenie pierwszej przez druga (pod warunkiem ze liczby nie sa zerami)."<<endl;
	

	cout<<"\nPodaj a: "<<endl;
	cout<<"Podaj b: "<<endl;
	cin>>a;
	cin>>b;
	
	if(a != b)
	{
		wynik = a + b;
		cout<<"Dodawanie: "<< a << " + "<< b << " = " << wynik<<endl;
	}
	else if(a==b && a != 0 && b != 0)
	{
		wynik = a / b;
		cout<<"Dzielenie: "<< a << " / " << b << " = " << wynik << endl;
	}
	else
	{
		cout<<"Nie podziele przez 0";
	}
	

	return 0;
} // main
