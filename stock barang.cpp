#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahandata{
private:
int stock;

	public :
	void pensil ();
	void buku ();
	void penghapus();
};

void penambahandata::pensil(){
	int stock = 8, stokpensil, total;
	cout<<"masukan jumlah stock barang = "; cin>> stokpensil;
	total = stock + stokpensil;
	cout<<"total stok pensil adalah"<<total<<endl;
}

void penambahandata::buku(){
	int stock = 10, stokbuku, total;
	cout<<"masukan jumlah stock barang ="; cin>>stokbuku;
	total = stock + stokbuku;
	cout<<"total stok buku adalah " <<total<<endl;
}

void penambahandata::penghapus(){
	int stock =28, stokpenghapus, total;
	cout<<"masukan jumlah stock barang = "; cin>>stokpenghapus;
	total = stock + stokpenghapus;
	cout<<"total stok penghapus adalah " <<total<<endl;
}

int main (int argc, char** agrv){
	int pilih;
	cout<<"no. \t nama barang  \t stock "<<endl;
	cout<<"1. \t pensil \t 8 "<<endl;
	cout<<"2. \t buku \t\t 10"<<endl;
	cout<<"3. \t penghapus \t 28"<<endl;
	
	cout<<"pilih barang yang akan di tambah stocknya [1,2,3] = "; cin>>pilih;
	
	if (pilih == 1){
		penambahandata pensil;
		pensil.pensil();
		cout<<"terima kasih"<<endl;
	}
	if (pilih == 2){
		penambahandata buku;
		buku.buku();
		cout<<"terima kasih"<<endl;
	}
	if (pilih == 3){
		penambahandata penghapus;
		penghapus.penghapus();
		cout<<"terima kasih"<<endl;
	}
	
	return 0;
	system ("pause");
	
}
	
