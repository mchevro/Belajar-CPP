//AUTHOR : MCHEVRO

#include <iostream>
using namespace std;

int main() {
	//Tabel Kebenaran 2 Variable
	bool a[4];
	bool b[4];
	bool output[4];

	for (int x = 0; x < 4; x++) {
		a[x] = 0;
		if (x == 2 || x == 3) {
			a[x] = 1;
		}
		//cout << "Index Ke : " << x << " Nilai : " << a[x] << endl;
	}

	for (int x = 0; x < 4; x++) {
		b[x] = 0;
		if (x % 2) {
			b[x] = 1;
		}
		//cout << "Index Ke : " << x << " Nilai : " << b[x] << endl;
	}

	cout << "------------------------------" << endl;
	cout << "A\tB\tA AND B" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < 4; i++) {
		output[i] = a[i] && b[i];
		cout << a[i] << "\t" << b[i] << "\t   " << output[i] << endl;
	}
	return 0;
}
