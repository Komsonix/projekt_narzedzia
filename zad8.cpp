#include<iostream>

using namespace std;

void zamiana(int n, int m, int tab1[10][10], int tab2[10][10])
{
	cout<<"Wczytaj 1 tablice"<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin>>tab1[i][j];
		}
	}
	cout<<"Wczytaj 2 tablice"<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin>>tab2[i][j];
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			swap(tab1[i][j], tab2[i][j]);
		}
	}
	cout<<"Tablica 1:"<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout<<tab1[i][j]<<endl;
		}
	}
	cout<<"Tablica 2:"<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout<<tab2[i][j]<<endl;
		}
	}
}

int main()
{
	int n,m;
	cout<<"Wczytaj wymiary tablic"<<endl;
	cin>>n>>m;
	int tab1[10][10];
	int tab2[10][10];
	
	zamiana(n,m,tab1,tab2);
	
	system("PAUSE");
	return 0;
}
