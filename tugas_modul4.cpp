#include <iostream>
using namespace std;

void garis() {
	for (int i = 0; i < 25; i++) {
		cout << "=";
	}
}

class Konversi {
public:
	void usd(float jumlah) {
		float konversi;
		konversi = jumlah / 14526.9;
		cout << "Jumlah nilai uang yang Anda masukkan dalam Dolar Amerika adalah USD " << konversi;
	}

	void euro(float jumlah) {
		float konversi;
		konversi = jumlah / 17406.04;
		cout << "Jumlah nilai uang yang Anda masukkan dalam Euro adalah EUR " << konversi;
	}

	void yen(float jumlah) {
		float konversi;
		konversi = jumlah / 133.54;
		cout << "Jumlah nilai uang yang Anda masukkan dalam Yen adalah JPY " << konversi;
	}
};

int main() {
	int angka;
	float jumlah;
	char pilihan;
	pilihan = 'y';
	Konversi Obj;
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
		cout << endl;
		switch (angka) {
		case 1:
			cout << "Masukkan nilai Rupiah yang ingin dikonversi: IDR ";
			cin >> jumlah;
			Obj.usd(jumlah);
			break;
		case 2:
			cout << "Masukkan nilai Rupiah yang ingin dikonversi: IDR ";
			cin >> jumlah;
			Obj.euro(jumlah);
			break;
		case 3:
			cout << "Masukkan nilai Rupiah yang ingin dikonversi: IDR ";
			cin >> jumlah;
			Obj.yen(jumlah);
			break;
		default:
			cout << "Input yang Anda masukkan salah.";
		}
		cout << endl << endl;
		cout << "Apakah Anda ingin mengulang program?" << endl;
		cout << "Jawab (y/n): ";
		cin >> pilihan;
		cout << endl;
	}
	cout << "Terima kasih";
}