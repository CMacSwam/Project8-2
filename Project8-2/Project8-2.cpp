#include <iostream>
#include <string>
#include<cstring>

using namespace std;

int countWords(string str);

int main() {

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