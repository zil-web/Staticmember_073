#include <iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	nim = 0;
	nama = "";
}

mahasiswa::mahasiswa(int inim) {
	nim = inim;
}

mahasiswa::mahasiswa(string iNama) {
	nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim= iNim;
	nama = iNama;
}
void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "nama =" << nama << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("indra");
	mahasiswa mhs4(30, "fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}