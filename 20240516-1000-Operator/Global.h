#pragma once
// ���α׷� ���������� ����ϴ� ������
class Global {
private:
	static int Score;
	static int Score2;
	static int Score3;

public:
	// ������������� �ٷ� �����ϴ� �� ����
	// ��������Լ��� ���ؼ� �����ϵ��� �ϴ� ���� ����.
	static void SetScore(int value) {
		Score = value;
	}

	static int GetScore() {
		return Score;
	}

	static void SetScore2(int value) {
		Score2 = value;
	}

	static int GetScore2() {
		return Score2;
	}

	static void SetScore3(int value) {
		Score2 = value;
	}

	static int GetScore3() {
		return Score3;
	}
};