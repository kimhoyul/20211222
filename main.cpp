#include <iostream>

using namespace std;

int main()
{
	int Height = 0;
	int Base = 0;
	float Triangle = 0;

	cout << "높이를 입력해주세요." << endl;
	cin >> Height;
	cout << "밑변을 입력해주세요." << endl;
	cin >> Base;

	Triangle = (
		static_cast<float>(Height) * static_cast<float>(Base)
		) / 2.0f;

	cout << "삼각형의 넓이는 " << Triangle << " 입니다." << endl;
	cout << "아웃풋 추가" << endl;

	return 0;
}