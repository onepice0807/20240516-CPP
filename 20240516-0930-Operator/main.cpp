#include <iostream>
#include <string>

using namespace std;

int GetScore(int value) {
	static int sum = 0; // ���ú���, �ڵ����� => ��������(�Լ��� ȣ���Ҷ� �����ǰ� ���α׷���
						// ����ɶ� ������ ��������� ������ �ȴ�.)

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