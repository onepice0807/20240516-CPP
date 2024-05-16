#include <iostream>
#include <string>

using namespace std;

// �������

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

	// Ŭ������ �����־ Ŭ���� ������� �մϴ�.
	static int MonsterCount; // ������� ���� : ������� ������ ��ü�� ���� ���� �ʴ�.

public:

	Monster(string name, int health, int attack, int defense) // ���ڸ� �޴� ������
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "Monster ������ ȣ��" << endl;
		MonsterCount++;

	}

	static int GetMonsterCount() { // ������� �Լ�, Ŭ���� �Լ�
		// ������� �Լ� ���ȿ��� ��������� �����ϸ� �ȵ�
		return MonsterCount;
	}

	// �Ҹ��ڴ� ��ü�� ���ŵɶ� �ڵ����� ȣ���� ��
	// �Ҹ��ڴ� ������ ������ �����Ϸ��� �ڵ����� ����� ��
	// �Ҹ��ڴ� ���ڸ� ���� �ʴ´�.
	// �Ҹ��ڿ��� ��ü�� ���ŵ� �� �Ĵܿ� ����� �ϴ� �۾��� ó���Ѵ�.

	~Monster() { // �Ҹ���
		cout << _name << "Monster �Ҹ��� ȣ��" << endl;
		MonsterCount--;
	}

	void Info() {
		cout << "���͸� : " << _name << endl;
		cout << "����� : " << _health << endl;
		cout << "���ݷ� : " << _attack << endl;
		cout << "���� : " << _defense << endl;
		cout << "���� �Ѽ� : " << MonsterCount << endl;
	}

};

// ������� ������ ��ü�� �������� �ʴ�.
// �ʱ�ȭ Ŭ���� ������ �ܺο��� ����� �Ѵ�.
int Monster::MonsterCount = 0; // ������� ���� �ʱ�ȭ

int main() {
	// ������� ������ ��ü�� �������� ����
	// Ŭ������ ���� ������ ����
	cout << "0. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
	// :: (��������������)

	Monster dragon("dragon", 100, 300, 200);
	cout << "1. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
	// dragon.Info();
	{
		Monster ogre("ogre", 60, 10, 8);
		// ��ü�� ���ؼ��� ������� ������ ������ ����
		// ������� ������ ���� �������� ������ �޴´�.
		cout << "2. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
		// ogre.Info();

		{
			Monster troll("troll", 60, 15, 10);
			cout << "3. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
			//troll.Info();
		}
		cout << "4. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
		// ogre.Info();
	}
	cout << "5. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
	// dragon.Info();
	Monster slime("slime", 30, 20, 5);

	cout << "6. ��ü������ ���� : " << Monster::GetMonsterCount() << endl;
	// slime.Info();

	return 0;
}