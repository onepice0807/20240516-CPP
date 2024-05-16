#include <iostream>
#include <iomanip>
#include "Global.h"
#include "test.h"

using namespace std;

// 잡다하고 유용한 함수를
// 하나의 클래스에 모아 놓은 Utility 클래스
class Utility {
public:
	static float add(int a, int b) {
		return a + b;
	}

	static float sub(int a, int b) {
		return a - b;
	}

	static float mul(int a, int b) {
		return a * b;
	}

	static float div(int a, int b) {
		return a / (float)b;
	}
};

int main() {

	int a = 20;
	int b = 20;

	Utility util; 

	std::cout << a << " + " << b << " = " << util.add(a, b) << endl;
	std::cout.precision(2);
	std::cout << a << " - " << b << " = " << util.sub(a, b) << endl;
	std::cout << a << " x " << b << " = " << util.mul(a, b) << endl;
	std::cout << a << " / " << b << " = " << util.div(a, b) << endl;

	// 멤버함수를 접근하기 위해서 매번 객체를 만들어야 되는 불편함이 있다.
	// 그래서 멤버 함수를 정적멤버 함수로 만들고 객체를 생성하지 않고 접근하도록 합니다.

	std::cout << a << " + " << b << " = " << Utility::add(a, b) << endl;
	std::cout << a << " - " << b << " = " << Utility::sub(a, b) << endl;
	std::cout << a << " x " << b << " = " << Utility::mul(a, b) << endl;
	std::cout << a << " / " << b << " = " << Utility::div(a, b) << endl;

	Global::SetScore(100);

	cout << Global::GetScore() << endl;

	Global::SetScore2(10000);

	PrintGlobalScore2();

	return 0;
}