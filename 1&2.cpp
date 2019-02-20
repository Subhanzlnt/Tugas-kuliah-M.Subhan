#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main (){
	struct dbuku{
	char kbuku[99];
	char nbuku[99];
	char pbuku[99];
	char tbuku[99];
	char hrg[99];
	};
	
	
	
int menu,pilih,jml,edit,i,hps,tbh =0;
	menuutama:
	system("cls");
	dbuku dbk[10];
	cout << "---------------------------"<< endl;
	cout << "Pendataan buku"<< endl; 
	cout << "---------------------------"<< endl;
	cout << "1. tambah buku"<<endl;
	cout << "2. edit buku"<<endl;
	cout << "3. hapus"<<endl;
	cout << "4. tampil"<<endl;
	cout << "pilih menu : "; cin >> menu; 
	cout << "---------------------------"<< endl;
	
	
	if(menu == 1){
		cout << "junlah buku : " ; 
		
		cin >> jml;
		for (i=0;i<jml;i++){
			fflush(stdin);
			cout << "Data Buku ke - " << i+1 << endl;
			cout << "masukkan Kode buku : "; cin.getline(dbk[tbh].kbuku,99); 
			cout << "masukkan Nama buku : "; cin.getline(dbk[tbh].nbuku,99); 
			cout << "masukkan Nama Pengarang : "; cin.getline(dbk[tbh].pbuku,99);
			cout << "masukkan Tahun terbit : "; cin.getline(dbk[tbh].tbuku,99); 
			cout << "masukkan Harga buku : "; cin.getline(dbk[tbh].hrg,99); 
			cout << endl;
			cout << tbh;
			//break ;
			tbh = tbh +1;
			}
		cout<<" _____________________________\n\n";
        cout<<" 1.Kembali ke Menu Utama\n\n";
		cout<<" 2.Keluar dari program\n";
		cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
		cout<<endl;
		if(pilih==1)
		{
      	  goto menuutama;
		}
   	 	 else if(pilih==2)
		{
      	  goto keluar;
		}
    }
		
		
		
	else if (menu == 2){
		cout << "No." << "Kode Buku\t" << "Nama Buku\t" << "Nama Pengarang\t" << "Nama Terbit\t" << "Harga" << endl;
		for (i=0;i<tbh;i++){
			cout << i + 1 << ". \t" << dbk[i].kbuku << "\t" << dbk[i].nbuku << "\t" << dbk[i].pbuku << "\t" << dbk[i].tbuku << "\t" << dbk[i].hrg << endl;
		}
		cout << "Pilih buku yang ingin di edit : ";
		//edit = i;
		cin >> edit;
		
		//cin.get();
			if (dbk[edit].nbuku[99] != '-')
			{
				
				fflush(stdin);
				cout << "\nTuliskan \nKode Buku :";
				cin.getline(dbk[edit-1].kbuku,99);
 				cout << "Nama Buku : ";
				cin.getline(dbk[edit-1].nbuku,99);
				cout << "Tahun Terbit  : ";
				cin.getline(dbk[edit-1].tbuku,99);
				cout << "Nama Pengarang : ";
				cin.getline(dbk[edit-1].pbuku,99);
				cout << "Harga : ";
				cin.getline (dbk[edit-1].hrg,99);
				
			}
			else
			{
				cout << "Buku tidak ada";
			}
			
		cout<<" _____________________________\n\n";
        cout<<" 1.Kembali ke Menu Utama\n\n";
		cout<<" 2.Keluar dari program\n";
		cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
		cout<<endl;
		if(pilih==1)
		{
      	  goto menuutama;
		}
   	 	 else if(pilih==2)
		{
      	  goto keluar;
		}
	}
	
	else if (menu == 3){
		cout << "No." << "Kode Buku\t" << "Nama Buku\t" << "Nama Pengarang\t" << "Nama Terbit\t" << "Harga" << endl;
		for (i=0;i<tbh;i++){
			cout << i + 1 << ". \t" << dbk[i].kbuku << "\t" << dbk[i].nbuku << "\t" << dbk[i].pbuku << "\t" << dbk[i].tbuku << "\t" << dbk[i].hrg << endl;
		}
		cout << "---------------------------"<< endl;
		cout << "Pilih Buku yang ingin dihapus : ";
		cin >> hps ;
		cout << "---------------------------"<< endl;
		if (dbk[hps-1].nbuku[99] != '-'){
			for (int h=hps;h<i;h++){
			dbk[i] = dbk[i-1];
			}
		tbh=tbh-1;	
		cout << "Buku berhasil dihapus" << endl;
		}
		else {
			cout << "Buku tidak di temukan" << endl;
		}
		cout<<" _____________________________\n\n";
        cout<<" 1.Kembali ke Menu Utama\n\n";
		cout<<" 2.Keluar dari program\n";
		cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
		cout<<endl;
		if(pilih==1)
		{
      	  goto menuutama;
		}
   	 	 else if(pilih==2)
		{
      	  goto keluar;
		}
	}
	
	else if (menu == 4){
			cout << "Daftar buku" << endl;
			cout << "---------------------------" << endl;
			cout << "No.\t" << "Kode Buku\t" << "Nama Buku\t" << "Nama Pengarang\t" << "Nama Terbit\t" << "Harga" << endl;
			for(int i=0;i<tbh;i++){
				cout << i + 1 << ". \t"<< dbk[i].kbuku << "\t" << dbk[i].nbuku << "\t" << dbk[i].pbuku << "\t" << dbk[i].tbuku << "\t" << dbk[i].hrg << endl;
			}
		cout<<" _____________________________\n\n";
        cout<<" 1.Kembali ke Menu Utama\n\n";
		cout<<" 2.Keluar dari program\n";
		cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
		cout<<endl;
		if(pilih==1)
		{
      	  goto menuutama;
		}
   	 	 else if(pilih==2)
		{
      	  goto keluar;
		}
		}
		
	keluar:
	system("cls");
	cout << "TERIMA KASIH";
	getch();	
	return 0;
}