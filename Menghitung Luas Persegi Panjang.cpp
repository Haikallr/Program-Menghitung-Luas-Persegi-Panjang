#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int panjang,lebar;
	float luas;
	cout<<"\t\t\t\t\tProgram Menghitung Luas Persegi Panjang \n"<<endl;
	cout<<" Input panjang persegi panjang: ";
	cin>>panjang;
	cout<<" Input lebar persegi panjang: ";
	cin>>lebar;
	
	luas=panjang*lebar;
	
	cout<<"\nLuas Persegi Panjang";
	cout<<"\nPanjang\t = "<<panjang;
	cout<<"\nLebar\t = "<<lebar;
	cout<<"\nLuas\t = "<<luas;
	
	getch();
}
