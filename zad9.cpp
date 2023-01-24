#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout<<"5. Instrukcje sterujace"<<endl;
	cout<<"Zadanie 9\nNapisz program liczacy pierwiastki rownania kwadratowego, tak by pozwalal na";
	cout<<"kolejne obliczenia, az do wpisania a=0"<<endl;
	
	float a, b, c, x1, x2, x0, delta;
	
	cout<<"Podaj wspolczyniki a, b, c: "<<endl;
	cin>>a>>b>>c;
	
	delta = b * b - 4 * a * c;
	
	if(delta>0)
	{
		delta = sqrt(delta);
		x1 = (-b - delta) / (2 * a);
		x2 = (-b + delta) / (2 * a);
		cout<<"Sa dwa pierwiastki rownania: "<<x1<<" i "<<x2;
	}
	else if(delta == 0)
	{
		x0 = -b / (2*a);
		cout<<"Jest jeden pierwiastek: "<<x0;
	}
	else
	{
		cout<<"Brak pierwiastkow";
	}
	return 0;
} // main
