#include<iostream>
using namespace std;


int main()
{
	float a, b, c, o;
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 8\nNapisz program obliczaj¹cy obwód trójk¹ta, którego d³ugoœci boków wprowadza uzytkownik."<<endl;
	cout<<"W przypadku podania liczb ujemnych lub rownych zero uzytkownik ma zostac poproszony o ponowne podanie dlugosci bokow.\n"<<endl;
	
	do
	{
		cout<<"Podaj dlugosc boku a"<<endl;
		cin>>a;
		cout<<"Podaj dlugosc boku b"<<endl;
		cin>>b;
		cout<<"Podaj dlugosc boku c"<<endl;
		cin>>c;
		
		if(a > 0 && b > 0 && c > 0)
		{
			o = a + b + c;
			cout<<"Obwod trojkata wynosi:"<<o;
		}
		else
		{
			cout<<"Bledne dane. Wprowadz poprawne\n"<<endl;
		}
	}
	while(a < 0 && b < 0 && c < 0);
	
	return 0;
} // main
