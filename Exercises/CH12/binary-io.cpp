#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

int main() {

	int arr[20];
	for (int i = 0; i < 20; i++) {
		arr[i] = i;
	}
	std::ofstream os = std::ofstream("gad.txt", ios::binary);
	os.write(reinterpret_cast<char*>(arr), 20 * sizeof(int));
	os.close();

	for (int i = 0; i < 20; i++) {
		arr[i] = 0;
	}

	std::ifstream is = std::ifstream("gad.txt", ios::binary);
	is.read(reinterpret_cast<char*>(arr), 20*sizeof(int));
	is.close();

	for (int i = 0; i < 20; i++) {
		cout << arr[i];
	}

	return 0;
}