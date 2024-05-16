#include "Global.h"
#include <iostream>

using namespace std;

void PrintGlobalScore() {
	cout << "PrintGlobal() = " << Global::GetScore() << endl;
}

void PrintGlobalScore2() {
	cout << "PrintGlobal2() = " << Global::GetScore2() << endl;
}