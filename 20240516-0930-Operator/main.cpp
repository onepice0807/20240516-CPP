#include <iostream>
#include <string>

using namespace std;

int GetScore(int value) {
	static int sum = 0; // 로컬변수, 자동변수 => 정적변수(함수를 호출할때 생성되고 프로그램이
						// 종료될때 변수의 저장공간이 유지가 된다.)

	sum += value;

	return sum;
}

int main() {

	for (int i = 0; i < 10; i++) {
		GetScore(i);
	}

	int ret = GetScore(0);

	cout << "ret = " << ret << endl;

	return 0;
}