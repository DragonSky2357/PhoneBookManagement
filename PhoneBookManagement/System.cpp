#include "System.h"

void System::drawMenu(void)
{
	cout << "1.새로운 번호 입력" << endl;
	cout << "2.전화번호 삭제" << endl;
	cout << "3.이름으로 검색" << endl;
	cout << "4.전화번호 전체 출력" << endl;
	cout << "5.매니저 정보" << endl;
	cout << "6.전화번호 저장" << endl;
	cout << "7.전화번호 불러오기" << endl;
}

void System::waitUntilSee(void)
{
	cout << "계속 진행하려면 아무키나 누르세요" << endl;
	_getch();
}

void System::clearScreen(void)
{
	system("cls");
}

void System::loadingDraw(void)
{
	for (int i = 0; i < 50; i++) {
		cout << '-';
		Sleep(50);
	}
	cout << endl;
	clearScreen();
}
