#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //destructor
	void cetakData();
	void isiData();
};
//Definisi member functon
angka::angka(int i) { //costructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat array sudah dilepaskan" << endl;
}
void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = ";cin >> arr[i];
	}
	cout << endl;
}
