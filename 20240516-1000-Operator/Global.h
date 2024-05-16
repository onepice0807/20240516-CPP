#pragma once
// 프로그램 전반적으로 사용하는 데이터
class Global {
private:
	static int Score;
	static int Score2;
	static int Score3;

public:
	// 정적멤버변수도 바로 접근하는 것 보다
	// 정적멤버함수를 통해서 접근하도록 하는 것이 좋다.
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