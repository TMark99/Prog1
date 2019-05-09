#include <iostream>

using namespace std;

int main()
{
	int a;
	int tiz=0, szaz=0;
	cout<<"Decimalis szam:\n";
	cin>>a;
	cout<<"A szam unarisban:\n";
	for (int i=0; i<a; i++){
		cout<<"1";
		++tiz;
		if (tiz==10) {cout<<" "; tiz=0;}
		if (szaz==100){cout<<"\n";szaz=0;}
	}
	return 0;
}
