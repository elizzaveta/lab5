#include"Tree.h"

vector<string> get_statements(ifstream& file);

int main() {
	

	ifstream file("file.txt");
	vector<string> statements = get_statements(file);
	//test:
	cout << "statements:" << endl;
	for (int i = 0; i < statements.size(); i++) {
		cout << statements[i] << endl;
	}
	//end test.

}