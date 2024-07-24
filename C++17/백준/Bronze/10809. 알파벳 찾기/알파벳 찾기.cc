#include <iostream>
using namespace std;
int main() {
	int Alphabet[26];
	for (int i = 0; i < 26; i++)
		Alphabet[i] = -1;
	string word;
	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		int num = word[i] - 'a';
		if (Alphabet[num] == -1)
			Alphabet[num] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << Alphabet[i] << " ";
	return 0;
}