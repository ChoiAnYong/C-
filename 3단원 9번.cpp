#include<iostream>

using namespace std;

class Oval {
private:
	int width, height;

public:
	Oval() {
		width = 1;
		height = 1;
	}

	Oval(int width, int height) {
		this->width = width;
		this->height = height;
	}

	~Oval() {
		cout << "Oval ?Ҹ? : width = " << width << ", height = " << height << endl;
	}

	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}

	void set(int w, int h) {
		this->width = w;
		this->height = h;
	}

	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}