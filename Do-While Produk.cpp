#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float x, harga, qty, sub, 
	total,ppn, grand, cash;
	
	char produk[40], jawab;
	
	do {
		x++;
		cout<<"Produk ke : "<<x <<endl;
		cout<<"Input Produk : ";cin.ignore();gets(produk);
		cout<<"Input Harga : ";cin>>harga;
		cout<<"Input Qty : ";cin>>qty;
		
		sub = harga * qty;
		total = total + sub;
		ppn = 0.1 * total;
		grand = ppn + total;
		
		cout<<"Sub : "<<sub <<endl;
		
		cout<<"\n Apakah ada produk lagi ?[y/t] = ";cin>>jawab;
		
	}
	while(jawab=='y' || jawab == 'Y');
	
	cout<<"================================================="<<endl;
	
	cout<<"Total = "<<total <<endl;
	cout<<"PPN(10%) = "<<ppn <<endl;
	cout<<"Grand = "<<grand <<endl;
	
	cout<<"================================================="<<endl;
	cout<<"Input Cash = ";cin>>cash;
	
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Sisa = "<<cash - grand;

	getch();
	return 0;
}
