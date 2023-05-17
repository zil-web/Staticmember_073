#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setnim(int pnim) { nim = pnim; /*definisi funtion*/ }
	static int getnim() { return nim; /*definisi function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};
	int mahasiswa::nim=0;

	void mahasiswa::setID() {
		id = ++nim;
	}

	void mahasiswa::printAll() {
		cout << "ID = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << endl;
	}

	int main() {
		mahasiswa mhs1("sri Dadi");
		mahasiswa mhs2("Budi jatmiko");
		mahasiswa::setnim(9); //mengakses nim melalui static member function (setNim)
		mahasiswa mhs3("andi janu");
		mahasiswa mhs4("joko wahono");

		mhs1.printAll();
		mhs2.printAll();
		mhs3.printAll();
		mhs4.printAll();

		cout << "akses dari luar object =" << mahasiswa::getnim() << endl; //mengakses nim melalui static member function(getNim)

		return 0;
	}

