#include <iostream>
#include<string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};
int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID =" << id << endl;
	cout << "nama =" << nama << endl;
	cout << endl;
}


