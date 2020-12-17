#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<String>

using namespace std;

class CoreService {
public:
	void start() {
		cout << "This is just an exercise object" << endl;
		cout << "The code is very stupid,so it will run stupidly." << endl;
		Sleep(3000); 
		system("cls");
	}
	void stop() {
		system("cls");
		cout << "CoreService stoping..." << endl;
		cout << endl << "Build on Dec.14th by YMX" << endl;
		cout << "All Rights Reserved" << endl;
		Sleep(2000);
	}
	void get_op();
	void Run();
private:
	char key_now = 0;
	string next_step = "0";
};

class Player {
	void printplayer();
};

class Point {
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
private:
	int x = 0;
	int y = 0;
};

class Map1 {
public:
	void print_map() {
		cout << "¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡öexit¡ö " << endl;
		cout << "¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö                                           ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö                ¡ö ¡ö             ¡ö ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö    ¡ö ¡ö ¡ö    ¡ö ¡ö    ¡ö ¡ö    ¡ö ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö          ¡ö             ¡ö ¡ö    ¡ö ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö ¡ö    ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö    ¡ö ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö ¡ö                               ¡ö " << endl;
		cout << "¡ö    ¡ö                ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö    ¡ö " << endl;
		cout << "¡ö                                                 ¡ö " << endl;
		cout << "¡ö    ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö    ¡ö    ¡ö    ¡ö " << endl;
		cout << "¡ö          ¡ö ¡ö                ¡ö    ¡ö    ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö    ¡ö ¡ö ¡ö    ¡ö    ¡ö    ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö    ¡ö ¡ö ¡ö    ¡ö    ¡ö    ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö    ¡ö ¡ö    ¡ö ¡ö ¡ö    ¡ö    ¡ö    ¡ö    ¡ö " << endl;
		cout << "¡ö    ¡ö             ¡ö ¡ö ¡ö    ¡ö    ¡ö          ¡ö " << endl;
		cout << "¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö ¡ö " << endl;
	}
};

int main() {
	CoreService Core;
	Core.start();
}