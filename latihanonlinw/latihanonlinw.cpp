#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p, float l) {
	return p * l;
}

float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

float LuasLingkaran(float r) {
	return 3.14 * r * r;
}

int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;

	do {
		cout << "=========================" << endl;
		cout << "======== M E N U ========" << endl;
		cout << "=========================" << endl;
		cout << "1. Luas Persegi Panjang  " << endl;
		cout << "2. Luas Segitiga         " << endl;
		cout << "3. Luas Lingkaran        " << endl;
		cout << "4. Exit                  " << endl;
		cout << "=== Masukan Pilihanya ===" << endl;
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "\nMasukan Panjangnya = ";
			cin >> panjang;
			cout << "\nMasukan Lebarnya   = ";
			cin >> lebar;
			cout << "\nMaka Luasnya adalah = " << LuasPersegiPanjang(panjang, lebar) << endl;
			break;
		case 2:
			cout << "\nMasukan alasnya   = ";
			cin >> alas;
			cout << "\nMasukan tingginya = ";
			cin >> tinggi;
			cout << "\nMaka Luasnya adalah = " << LuasSegitiga(alas, tinggi) << endl;
			break;
		case 3:
			cout << "\nMasukan Jari - Jarinya = ";
			cin >> jejari;
			cout << "\nMaka Luasnya adalah = " << LuasLingkaran(jejari) << endl;
			break;
		case 4:
			break;
		default:
			cout << "\nPilihan yang anda masukan salah !";
			break;
		}
	} while (pilihan != 4);
}
