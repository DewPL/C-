#include<iostream>
using namespace std;

int main()
{
	cout<<"5 Instrukcje sterujace"<<endl;
	cout<<"Zadanie 12\nNapisz program, ktory obliczy sume n liczb naturalnych konczacych sie cyfra 5"<<endl;
	
	int n, cyfra, suma = 0;
	
	cout<<"Podaj n: "<<endl;
	cin>>n;
	
	for(int i = 0; i <= n; i++)
	{
		cyfra = i % 10;
		
		if(cyfra == 5)
		{
			cout<<(i > 2 ? " + " : "")<<i;
			suma += i;
		}
	} // for
	cout<<" = "<< suma;
	
	return 0;
} //main
