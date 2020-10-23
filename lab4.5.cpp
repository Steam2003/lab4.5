#include <Windows.h>
#include <time.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "R = "; cin >> R;

	srand((unsigned) time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "������ �: "; cin >> x;
		cout << "������ �: "; cin >> y;
		cout << endl;
		if ((x <= 0 && x >= -R && y >= 0 && y <= R && pow((x + R), 2) + pow((y - R), 2) >= R * R)
			|| (x >= 0 && x <= R && y <= 0 && y >= -R && x * x + y * y <= R * R))
			cout << "�����" << endl;
		else
			cout << "�� �����" << endl;
	}
	cout << endl << fixed;
	cout << "----------------------------------------" << endl;
	cout << setw(6) << "x" << setw(5) << "|" << setw(5) << "y" << setw(6) << "|" << setw(15) << "�����/�� �����" <<  endl;
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < 10; i++)
		
	{
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;
		if ((x <= 0 && x >= -R && y >= 0 && y <= R && pow((x + R), 2) + pow((y - R), 2) >= R * R)
			|| (x >= 0 && x <= R && y <= 0 && y >= -R && x * x + y * y <= R * R))
			cout << setw(8) << setprecision(4) << x << setw(3) << "|"
			<< setw(8) << setprecision(4) << y << setw(3) << "|" << setw(7) << "�����" << endl;
		else
			cout << setw(8) << setprecision(4) << x << setw(3) << "|"
			<< setw(8) << setprecision(4) << y << setw(3) << "|" << setw(10) << "�� �����" << endl;
	}
	cin.get();
	return 0;
}
