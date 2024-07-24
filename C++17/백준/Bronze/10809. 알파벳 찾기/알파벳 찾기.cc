#include <iostream>
using namespace std;
int main() {
	int Alphabet[27];
	for (int i = 0; i < 26; i++)
		Alphabet[i] = -1;
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		char Alp = word[i];
		switch (Alp)
		{
		case 'a':
			if (Alphabet[0] == -1)
				Alphabet[0] = i;
			else
				break;
			break;
		case 'b':
			if (Alphabet[1] == -1)
				Alphabet[1] = i;
			else
				break;
			break;
		case 'c':
			if (Alphabet[2] == -1)
				Alphabet[2] = i;
			else
				break;
			break;
		case 'd':
			if (Alphabet[3] == -1)
				Alphabet[3] = i;
			else
				break;
			break;
		case 'e':
			if (Alphabet[4] == -1)
				Alphabet[4] = i;
			else
				break;
			break;
		case 'f':
			if (Alphabet[5] == -1)
				Alphabet[5] = i;
			else
				break;
			break;
		case 'g':
			if (Alphabet[6] == -1)
				Alphabet[6] = i;
			else
				break;
			break;
		case 'h':
			if (Alphabet[7] == -1)
				Alphabet[7] = i;
			else
				break;
			break;
		case 'i':
			if (Alphabet[8] == -1)
				Alphabet[8] = i;
			else
				break;
			break;
		case 'j':
			if (Alphabet[9] == -1)
				Alphabet[9] = i;
			else
				break;
			break;
		case 'k':
			if (Alphabet[10] == -1)
				Alphabet[10] = i;
			else
				break;
			break;
		case 'l':
			if (Alphabet[11] == -1)
				Alphabet[11] = i;
			else
				break;
			break;
		case 'm':
			if (Alphabet[12] == -1)
				Alphabet[12] = i;
			else
				break;
			break;
		case 'n':
			if (Alphabet[13] == -1)
				Alphabet[13] = i;
			else
				break;
			break;
		case 'o':
			if (Alphabet[14] == -1)
				Alphabet[14] = i;
			else
				break;
			break;
		case 'p':
			if (Alphabet[15] == -1)
				Alphabet[15] = i;
			else
				break;
			break;
		case 'q':
			if (Alphabet[16] == -1)
				Alphabet[16] = i;
			else
				break;
			break;
		case 'r':
			if (Alphabet[17] == -1)
				Alphabet[17] = i;
			else
				break;
			break;
		case 's':
			if (Alphabet[18] == -1)
				Alphabet[18] = i;
			else
				break;
			break;
		case 't':
			if (Alphabet[19] == -1)
				Alphabet[19] = i;
			else
				break;
			break;
		case 'u':
			if (Alphabet[20] == -1)
				Alphabet[20] = i;
			else
				break;
			break;
		case 'v':
			if (Alphabet[21] == -1)
				Alphabet[21] = i;
			else
				break;
			break;
		case 'w':
			if (Alphabet[22] == -1)
				Alphabet[22] = i;
			else
				break;
			break;
		case 'x':
			if (Alphabet[23] == -1)
				Alphabet[23] = i;
			else
				break;
			break;
		case 'y':
			if (Alphabet[24] == -1)
				Alphabet[24] = i;
			else
				break;
			break;
		case 'z':
			if (Alphabet[25] == -1)
				Alphabet[25] = i;
			else
				break;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 26; i++)
		cout << Alphabet[i] << " ";
	return 0;
}