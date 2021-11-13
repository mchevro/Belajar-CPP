#include <iostream>
using namespace std;

int main() {
	//Tabel Kebenaran 2 Variable
	bool a[4], b[4], output[4];
	char kode_logic;
	string logic;

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

	cout << "====================" << endl;
	cout << "TOOLS GERBANG LOGIKA" << endl;
	cout << "====================" << endl;
	cout << "[1] AND" << endl;
	cout << "[2] OR" << endl;
	cout << "[3] NOT" << endl;
	cout << "Plih Logika : ";
	cin >> kode_logic;

	switch (kode_logic)
	{
	case '1':
		cout << "------------------------------" << endl;
		cout << "A\tB\tA AND B" << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < 4; i++) {
			output[i] = a[i] && b[i];
			cout << a[i] << "\t" << b[i] << "\t   " << output[i] << endl;
		}
		break;

	case '2':
		cout << "------------------------------" << endl;
		cout << "A\tB\tA OR B" << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < 4; i++) {
			output[i] = a[i] || b[i];
			cout << a[i] << "\t" << b[i] << "\t   " << output[i] << endl;
		}
		break;

	case '3':
		cout << "------------------------------" << endl;
		cout << "A\tB\tNOT A" << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < 4; i++) {
			output[i] = !a[i];
			cout << a[i] << "\t" << b[i] << "\t   " << output[i] << endl;
		}
		break;
	default:
		break;
	}

	return 0;
}
