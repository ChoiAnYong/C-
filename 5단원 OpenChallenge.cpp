#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class Morse {
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
public:
	Morse() {
		string alphabetMorese[26] = { ".-", "-...", "-.-.", "-..",".","..-.","--.","....","..",",---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
		string digitMorese[10] = { "-----",".----","..---","...--","....-",".....","-....","--...","----..","----." };
		slash = "-..-.", question = "..--..", comma = "--..--.", period = ".-.-.-", plus = ".-.-.", equal = "-...-";

		for (int i = 0; i < 26; i++) {
			alphabet[i] = alphabetMorese[i];
		}

		for (int i = 0; i < 10; i++) {
			digit[i] = digitMorese[i];
		}
	}
	void text2Morse(string text, string& morse) {
		morse = "";
		for (int i = 0; i < text.length(); i++) {
			char temp = text.at(i);
			if (isalpha(temp)) {
				for (int i = 0; i < 26; i++) {
					if (temp == (char)(65 + i) || temp == (char)(97 + i)) {
						morse = morse + alphabet[i] + " ";
						break;
					}
				}
			}
			else if (isdigit(temp)) {
				for (int i = 0; i < 10; i++) {
					if (temp == (char)(48 + i)) {
						morse = morse + digit[i] + " ";
						break;
					}
				}
			}
			else if (temp == ' ') morse += "  ";
			else {
				if (temp == '/') morse = morse + slash + " ";
				else if (temp == '?') morse = morse + question + " ";
				else if (temp == ',') morse = morse + comma + " ";
				else if (temp == '.') morse = morse + period + " ";
				else if (temp == '+') morse = morse + plus + " ";
				else if (temp == '=') morse = morse + equal + " ";
			}
		}
	}

	bool morse2text(string morse, string& text) {
		string al[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i",
					"j", "k", "l", "m", "n", "o", "p", "q", "r", "s",
					"t", "u", "v", "w", "x", "y", "z" };
		string di[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
		string change = "";
		string s = "";
		int count = 0;
		for (int i = 0; i < morse.length(); i++) {
			char tmp = morse.at(i);
			if (tmp != ' ') {
				count = 0;
				s += tmp;
			}
			else {
				count++;
				if (count == 1) {
					for (int i = 0; i < 26; i++) {
						if (s == alphabet[i]) {
							change += al[i];
							s = "";
							break;
						}
						else if (s == digit[i]) {
							change += di[i];
							s = "";
							break;
						}
						else if (s == slash) {
							change += "/";
							s = "";
							break;
						}
						else if (s == question) {
							change += "?";
							s = "";
							break;
						}
						else if (s == comma) {
							change += ",";
							s = "";
							break;
						}
						else if (s == period) {
							change += ".";
							s = "";
							break;
						}
						else if (s == plus) {
							change += "+";
							s = "";
							break;
						}
						else if(s==equal){
							change += "=";
							s = "";
							break;
						}
					}
				}
				else if (count == 3) {
					change += " ";
					count = 0;
				}
			}
		}
		if (text == change)return true;
		else return false;
	}
};
	int main() {
		string text, morse;
		Morse m;

		cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
		getline(cin, text);
		m.text2Morse(text, morse);
		cout << morse << endl << endl;

		cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
		if (m.morse2text(morse, text))cout << text << endl;
		else cout << "오류" << endl;
	}