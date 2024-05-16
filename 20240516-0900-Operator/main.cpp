#include <iostream>
#include <string>

using namespace std;

// 정적멤버

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

	// 클래스에 속해있어서 클래스 변수라고 합니다.
	static int MonsterCount; // 정적멤버 변수 : 정적멤버 변수는 객체에 속해 있지 않다.

public:

	Monster(string name, int health, int attack, int defense) // 인자를 받는 생성자
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "Monster 생성자 호출" << endl;
		MonsterCount++;

	}

	static int GetMonsterCount() { // 정적멤버 함수, 클래스 함수
		// 정적멤버 함수 블럭안에서 멤버변수에 접근하면 안됨
		return MonsterCount;
	}

	// 소멸자는 객체가 제거될때 자동으로 호출이 됨
	// 소멸자는 만들지 않으면 컴파일러가 자동으로 만들어 줌
	// 소멸자는 인자를 받지 않는다.
	// 소멸자에는 객체가 제거될 때 후단에 해줘야 하는 작업을 처리한다.

	~Monster() { // 소멸자
		cout << _name << "Monster 소멸자 호출" << endl;
		MonsterCount--;
	}

	void Info() {
		cout << "몬스터명 : " << _name << endl;
		cout << "생명력 : " << _health << endl;
		cout << "공격령 : " << _attack << endl;
		cout << "방어력 : " << _defense << endl;
		cout << "몬스터 총수 : " << MonsterCount << endl;
	}

};

// 정적멤버 변수는 객체에 속해있지 않다.
// 초기화 클래스 선언은 외부에서 해줘야 한다.
int Monster::MonsterCount = 0; // 정적멤버 변수 초기화

int main() {
	// 정적멤버 변수는 객체의 생성과는 무관
	// 클래스를 통해 접근이 가능
	cout << "0. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
	// :: (범위지정연산자)

	Monster dragon("dragon", 100, 300, 200);
	cout << "1. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
	// dragon.Info();
	{
		Monster ogre("ogre", 60, 10, 8);
		// 객체를 통해서도 정적멤버 변수에 접근이 가능
		// 정적멤버 변수도 접근 제어자의 영향을 받는다.
		cout << "2. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
		// ogre.Info();

		{
			Monster troll("troll", 60, 15, 10);
			cout << "3. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
			//troll.Info();
		}
		cout << "4. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
		// ogre.Info();
	}
	cout << "5. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
	// dragon.Info();
	Monster slime("slime", 30, 20, 5);

	cout << "6. 전체몬스터의 갯수 : " << Monster::GetMonsterCount() << endl;
	// slime.Info();

	return 0;
}