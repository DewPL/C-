#include<iostream>
#include<cmath>
using namespace std;
float x,y,z,t,k,wynik;

int main()
{
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 4\nNapisz program, który poprosi u¿ytkownika o podanie czterech liczb rzeczywistych:"<<endl;
	cout<<"x, y, z, t, oraz obliczy wartoœæ wyra¿enia... Wynik wyœwietl w konsoli."<<endl;
	
	
	cout<<"Wprowadz dane x: "<<endl;
	cin>>x;
	cout<<"Wprowadz dane y: "<<endl;
	cin>>y;
	cout<<"Wprowadz dane z: "<<endl;
	cin>>z;	
	cout<<"Wprowadz dane t: "<<endl;
	cin>>t;
	
	k = 7 * t - 1 + z;
	wynik = sqrt(k) + x / y - 2;
	
	if(k < 0) // https://www.matemaks.pl/pierwiastkowanie.html
	{
		cout<<"Zle nie da sie wyliczyc"<<endl;
	}
	else
	{
	cout<<"Wynik: "<<k<<"\n\n"<<"pierwiastek z "<<k<<" to: "<<wynik;
	}
	
}
