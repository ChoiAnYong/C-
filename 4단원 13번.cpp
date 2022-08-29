#include<iostream>
#include<string>
using namespace std;

class Histogram {
	string text;
public:
	Histogram(string text) {
		this->text = text;
	}

	void put(string text) {
		this->text.append(text);
	}

	void putc(char c) {
		text += c;
	}

	void print() {
		int count=0;
		int alpha[26] = { 0 };
		cout << text << endl<<endl;
		
		for (int i = 0; i < text.length(); i++) {
			if (isalpha(text[i])) {
				count++;
				if(isupper(text[i]))text[i] = tolower(text[i]);
			}
		}

		for (int i = 0; i < text.length(); i++) {
			for (int j = 0; j < 26; j++) {
				if (text[i] == (char)97 + j)alpha[j]++;
			}
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl<<endl;
		for (int i = 0; i < 26; i++) {
			cout << (char)(97 + i) << "(" << alpha[i] << ") : ";
			for (int j = 0; j < alpha[i]; j++)cout << "*";
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}