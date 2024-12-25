#include <iostream> //Menyertakan library iostream yang digunakan untuk operasi input dan output, seperti cin (input) dan cout (output).

using namespace std; // Ini memungkinkan penggunaan elemen dari namespace std tanpa perlu menuliskan std:: di depan setiap elemen, seperti std::cout atau std::cin. Jadi, kode Anda hanya perlu cout atau cin.



main ()
{
	int inpt; //Variabel untuk menyimpan jumlah jenis barang yang akan dibeli oleh pelanggan
	float hr [10], jml[10], tothr = 0,totbyr = 0, totbel, hasildis, dis = 0;
	char nm [10] [10]; //Array dua dimensi yang digunakan untuk menyimpan nama barang
	string pilih, nama, barang [10];
	
	cout << "------------------------------------------------------------" << endl ;
	cout << " | Nama: MOCH DIVA MARTIN |" << endl ;
	cout << " | Nim: 41037006241077    |" << endl ;
	cout << " | Fakultas: TEKNIK       |" << endl ;
	cout << " | Prodi: INFORMATIKA     |" << endl ;
	cout << "------------------------------------------------------------" << endl ;
	
	cout << "----------------------------------------------------------" << endl;
	cout << "| Mini Market Fakultas Teknik |" << endl;
	cout << "| Universitas Islam Nusantara |" << endl;
	cout << "----------------------------------------------------------" << endl;
	
	cout << "Member atau Non member (ya/tdk):"; //Program meminta input dari pengguna apakah mereka adalah member (ya) atau non-member (tdk)
	cin >> pilih;
	cout << "-----------------------------------------------------------" << endl;
	if (pilih == "ya") //program menanyakan nama pelanggan, jumlah barang, dan detail masing-masing barang yang dibeli
	{
		cout << "------------------Hai Member----------------------------" << endl;
		cout << "Nama :";
		cin >> nama;
		cout << "Jumlah Jenis Barang  :";
		cin >> inpt;
		for (int i=0; i<inpt; i++)
		{
			cout << "-------------------------------------------------" << endl;
			cout << "Nama Barang  :";
			cin >> barang [i];
			cout << "Jumlah : ";
			cin >> jml[i];
			cout << "Harga : ";
			cin >> hr [i];
			totbel += hr[i]*jml[i];	
		}
			{
				cout << "Total Harga : " << totbel << endl;
				cout << "Jumlah Bayar :";
				cin >> totbyr;
			}
		if (totbel >= 250000) //Jika total belanja lebih dari 250.000, diskon 15% diberikan
		{
			dis = 0.15 * totbel;
			hasildis = totbel - dis;
			cout << "----------------------Pembayaran--------------------" << endl;
			cout << "Jenis member : ya" << endl;
			cout << "Nama Pelanggan : " << nama << endl;
			cout << "Jumlah Belanja : " << totbel << endl;
			cout << "Diskon (15%) :" << dis << endl;
			cout << "Total Sebelum Belanja : " << totbel << endl;
			cout << "Total Setelah Diskon : " << hasildis << endl;
			cout << "Total Kembalian : " << totbyr-hasildis << endl;
			cout << "----------------------------------------------------" << endl;
		}
		else if (150000)
		{
			dis = 0.10 * totbel;
			cout << "-------------------Pembayaran-----------------------" << endl;
			cout << "Jenis Member : ya " << endl;
			cout << "Nama Pelanggan :" << nama << endl;
			cout << "Jumlah Belanja : " << totbel << endl;
			cout << "Diskon 10% : " << dis << endl;
			cout << "Total senbelum Diskon : " << totbel << endl;
			cout << "Total Setelah Diskon : " << hasildis << endl;
			cout << "Total kembalian : " << totbyr-hasildis << endl;
			cout << "----------------------------------------------------" << endl;	
		}
		else if (50000)
		{
			dis = 0.05 * totbel;
			cout << "-------------------Pembayaran-----------------------" << endl;
			cout << "Jenis Member : ya " << endl;
			cout << "Nama Pelanggan :" << nama << endl;
			cout << "Jumlah Belanja : " << totbel << endl;
			cout << "Diskon 5% : " << dis << endl;
			cout << "Total senbelum Diskon : " << totbel << endl;
			cout << "Total Setelah Diskon : " << hasildis << endl;
			cout << "Total kembalian : " << totbyr-hasildis << endl;
			cout << "----------------------------------------------------" << endl;	
		}
		else 
		{
			cout << "--------------------Pembayaran----------------------" << endl;
			cout << "Jenis member : ya" << endl;
			cout << "Nama Pelanggan : " << nama << endl;
			cout << "Diskon : -" << endl;
			cout << "Total Belanja : " << totbel << endl;
			cout << "Total Kembalian :" <<totbyr-totbel << endl;
			cout <<"-----------------------------------------------------" << endl;
		}		//Program menampilkan informasi pembayaran setelah diskon, termasuk total belanja, diskon, dan kembalian
	}
	else if (pilih == "tdk") //program akan meminta input nama, jumlah barang, dan detail barang yang dibeli oleh pelanggan non-member
	{
		cout << "-------------------Non Member------------------------------" << endl;
		cout << "Nama : " << endl;
		cin >> nama;
		cout << "Jumlah Jenis Barang :" << endl;
		cin >> inpt;
		for (int i=0; i<inpt; i++)
		{
			cout << "-------------------------------------------------------" << endl;
			cout << "Nama Barang : ";
			cin >> barang [i];
			cout << "Harga : ";
			cin >> hr[i];
			cout << "Jumlah : ";
			cin >> jml[i];
			totbel += hr[i] * jml [i];
		}
			
			{
				cout << "Total Harga : " << totbel << endl;
				cout << "Jumlah Bayar : ";
				cin >> totbyr;
			}
			if (totbel >= 250000)
			{
				dis = 0.10 * totbel;
				hasildis = totbel - dis;
				cout << "---------------------Pembayaran--------------------" << endl;
				cout << "Jenis Member : tidak " << endl;
				cout << "Nama Pelanggan : " << nama << endl;
				cout << "Diskon (10%) : " << dis << endl;
				cout << "Total Sebelum Diskon : " << totbel << endl;
				cout << "Total setelah Diskon : " << hasildis << endl;
				cout << "Total Kembalian : " << totbyr-hasildis << endl;
				cout <<"----------------------------------------------------" << endl;
			}
			else if (totbel >=100000)
			{
				dis = 0.05 * totbel;
				hasildis = totbel - dis;
				cout << "-----------------Pembayaran--------------------" << endl;
				cout << "Jenis Member : tidak " << endl;
				cout << "Nama Pelanggan : " << nama << endl;
				cout << "Diskon (5%) :" << dis << endl;
				cout << "Total sebelum diskon : " << totbel << endl;
				cout << "Total Setelah Diskon : " << hasildis << endl;
				cout << "Total kembalian : " << totbyr-hasildis << endl;
				cout << "-----------------------------------------------" << endl;	
			}      //Program kemudian menampilkan informasi pembayaran untuk non-member, termasuk diskon dan total kembalian
			else 
			{
				cout << "---------------Pembayaran----------------------" << endl;  //Setelah menghitung diskon, program menampilkan informasi detail mengenai pembayaran, yaitu
				cout << "Jenis Member : tidak " << endl;
				cout << "Nama pelanggan : " << nama << endl;
				cout << "Diskon : " << dis << endl; //Jumlah belanja sebelum dan sesudah diskon
				cout << "Total Kembalian " << totbyr-totbel << endl; //Total kembalian yang harus diberikan
				cout << "-----------------------------------------------" << endl;
			}
	}
}
