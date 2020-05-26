#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



string get_rid_of_spaces(string s) {
	string result = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') result += s[i];
	}
	return result;
}

vector<string> get_statements(ifstream& file) {
	string line;
	vector<string> statements;
	while (getline(file, line)) {
		line = get_rid_of_spaces(line);
		statements.push_back(line);
	}
	return statements;
}