#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; // chain function
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	//bukunya.setJudul("matematika");
	//cout << bukunya.getJudul();
	cout << bukunya.setJudul("matematika").getJudul(); //chain function calls
	return 0;
}