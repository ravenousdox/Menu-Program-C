#include <iostream>
#include "Menu.h"

using namespace std;

int main() {
	cout << "NULL" << endl;
	cout << "NULL" << endl;
	string choices[] = {"Selection 1", "Selection 2", "Selection 3", "Selection 4"};
	int size = sizeof(choices)/sizeof(choices[0]);
	int selection = menu(choices, size);
	cout << "NULL" << endl;
	cout << "NULL" << endl;
	cout << "\nSelected: " << choices[selection];
	cin.get();
}
