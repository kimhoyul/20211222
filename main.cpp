#include <iostream>

using namespace std;

int main()
{
	int Height = 0;
	int Base = 0;
	float Triangle = 0;

	cout << "���̸� �Է����ּ���." << endl;
	cin >> Height;
	cout << "�غ��� �Է����ּ���." << endl;
	cin >> Base;

	Triangle = (
		static_cast<float>(Height) * static_cast<float>(Base)
		) / 2.0f;

	cout << "�ﰢ���� ���̴� " << Triangle << " �Դϴ�." << endl;
	cout << "�ƿ�ǲ �߰�" << endl;

	return 0;
}