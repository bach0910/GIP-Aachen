#include<bits/stdc++.h>
using namespace std;
double a,b,auswahl,ans,question;
int main(){
	cout<<"Ihre Eingabe: ? ";
	cin>>question;
	cout<<endl;
	cout<<"Ihre Auswahl der Umwandlung: "<<endl<<" 1 - Celsius in Fahrenheit"<<endl<<" 2 - Meter in Fuss"<<endl<<" 3 - Euro in US Dollar"<<endl;
	cin>>auswahl;
	a=-1.73295*auswahl*auswahl+6.67965*auswahl-3.1467;
	b=16*auswahl*auswahl-80*auswahl+96;
	//cout<<a<<endl<<b<<endl;
	ans=a*question+b;
	cout<<endl;
	cout<<"Das Ergebnis lautet: "<<ans;
}
