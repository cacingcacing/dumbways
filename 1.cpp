#include<iostream>
#include<conio.h>

using namespace std;

long jumlah,kembalian,cashback,total_harga;

int hitungKembalian (long total_belanja, long jumlah_uang){
 	kembalian=jumlah_uang-total_belanja;
 	
 	if(total_belanja > 200000)
    {
    	cashback=total_belanja*10/100;
    	total_harga=total_belanja-cashback;
		kembalian=jumlah_uang-total_harga;
	}
	else if(total_belanja <= 200000)
    {
		kembalian=jumlah_uang-total_belanja;
	}
    
 	return kembalian;
 }
 

int main(){
    int x,y;

    cout << "Masukkan Total Belanja  : "; cin >> x;
    cout << "Masukkan Jumlah Uang    : "; cin >> y;
    cout << "Kembalian Anda          : "<< hitungKembalian(x,y) << endl << endl;
    
    if(kembalian >= 20000)
    {
	    jumlah = kembalian / 20000;
      	cout <<jumlah <<" Lembar Rp.20000\n"<< endl;
       	kembalian = kembalian - (jumlah * 20000);
    }
    if(kembalian >= 10000)
    {
	    jumlah = kembalian / 10000;
	    cout << jumlah <<" Lembar Rp.10000\n"<< endl;
	    kembalian = kembalian - (jumlah * 10000);
	}
	if(kembalian >= 5000)
    {
    	jumlah = kembalian / 5000;
       	cout <<jumlah <<" Lembar Rp.5000\n"<< endl;
       	kembalian = kembalian - (jumlah * 5000);
    }
	if(kembalian > 0)
    {
       	cout <<"Sisa Rp." <<kembalian << " (Sisa uang anda akan disumbangkan)\n"<< endl;
    }
    
    getch();  
    return 0;
}
