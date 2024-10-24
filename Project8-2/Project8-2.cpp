#include <iostream>
#include <string>
#include<cstring>

using namespace std;

int countWords(string str);

int main() {

	string input;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << countWords(input) << endl;

	}

}

int countWords(string str) {

	int count = 1;
	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	return count;
}