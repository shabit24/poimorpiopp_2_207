#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;

	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;
	manusia(string pJenisKelamin) :
		jenisKelamin(pJenisKelamin) {
		cout << "manusia dibuat\n" << endl;

	}
	~manusia() {
		cout << "manusia dihapus" << endl;
	}

};

class pelajar : private manusia, public orang {
public:
	string sekolah;
	pelajar(string pNama, string pJenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(pSekolah) {
		cout << "pelajer dibuat\n" << endl;

	}
	~pelajar() {
		cout << "pelajar dihapus" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + "dengan jenis kelamin" + jenisKelamin + "dari sekolah " + sekolah + "\n\n";
	}
};


int main() {
	pelajar andi("andi laksono", "Laki-Laki", "belajarcpp");
	cout << andi.perkenalan();
	return 0;
}

