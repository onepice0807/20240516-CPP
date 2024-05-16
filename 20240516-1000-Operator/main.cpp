#include <iostream>
#include <iomanip>
#include "Global.h"
#include "test.h"

using namespace std;

// ����ϰ� ������ �Լ���
// �ϳ��� Ŭ������ ��� ���� Utility Ŭ����
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

	// ����Լ��� �����ϱ� ���ؼ� �Ź� ��ü�� ������ �Ǵ� �������� �ִ�.
	// �׷��� ��� �Լ��� ������� �Լ��� ����� ��ü�� �������� �ʰ� �����ϵ��� �մϴ�.

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