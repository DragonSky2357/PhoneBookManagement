#include "System.h"

void System::drawMenu(void)
{
	cout << "1.���ο� ��ȣ �Է�" << endl;
	cout << "2.��ȭ��ȣ ����" << endl;
	cout << "3.�̸����� �˻�" << endl;
	cout << "4.��ȭ��ȣ ��ü ���" << endl;
	cout << "5.�Ŵ��� ����" << endl;
	cout << "6.��ȭ��ȣ ����" << endl;
	cout << "7.��ȭ��ȣ �ҷ�����" << endl;
}

void System::waitUntilSee(void)
{
	cout << "��� �����Ϸ��� �ƹ�Ű�� ��������" << endl;
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
