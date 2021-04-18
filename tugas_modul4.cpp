#include <iostream>
using namespace std;

void garis() {
	for (int i = 0; i < 25; i++) {
		cout << "=";
	}
}

int main() {
	int angka;
	float jumlah;
	char pilihan;
	pilihan = 'y';
	garis();
	cout << endl;
	cout << "Kelompok 20" << endl;
	garis();
	cout << endl;
	cout << "A.Miftachul Hidayat" << endl;
	cout << "Aldo Serena Safiola" << endl;
	cout << "Ariz Muhammad Fajar" << endl;
	cout << "Putri Almaas Auliasari" << endl << endl;
	while (pilihan == 'y') {
		cout << "Selamat datang di program konversi nilai Rupiah sederhana" << endl;
		for (int i = 0; i < 57; i++) {
			cout << "-";
		}
		cout << endl;
		cout << "Pilih konversi" << endl;
		cout << "1. Rupiah => Dolar Amerika" << endl;
		cout << "2. Rupiah => Euro" << endl;
		cout << "3. Rupiah => Yen" << endl;
		cout << "Masukkan input: ";
		cin >> angka;
	}
}