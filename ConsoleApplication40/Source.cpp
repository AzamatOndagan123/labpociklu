#include <iostream>
#include<locale.h>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ����� ������� :" << endl;
	int x; cin >> x;
	switch (x)
	{
	case 1:
	{
//	� ��������� ������ ������������ �������� ������ ������������ � 1, 2, 4, 8, 16, 32 � 64. 
		//���� ����������� ����� n.��� ���������� ����������� ����� �������� ����� ����� ��������� ����� 
		//n(������� ���������� ������ �� ������������ ��� ������� �����) ?
		//��������������, ��� ������� ���������� ������� ���������� ����� ���� ����������
	//	int n; cin >> n;
	//	for(int kup=1;kup<=64;kup++)





	}break;
	case 2:
	{

//	����� ����� ������������� �������� �����, ������� 50
		int sum = 0;
		for (int i = 1; i < 50; i++)
		{
			if ((i % 2) == 1)
				sum = sum+i;
		}
		cout << sum << endl;
		
	}break;
	case 3:
	{
//�������� ������ � ��������� ������� ������ �� ������.����� ����� ��������� ��� �������, ������� ����� ������ 1000 �����(���������� ����� ������� ����������).

		int n;
		int sum = 0;
		cout << "������� ���-�� �������" << endl;
		cin >> n;
		for (int i = 1; i < n; i++)
		{
			cout << "������� ��������� ������" << endl;
			int a; cin >> a;
			if (a > 1000)
			{
				sum = sum + a;
				
			}
			cout << " ����� �������= " << sum << endl;
		}
	}
	break;
	case 4:
	{
		//�������� ������ � ���������� ������� � ������ �� ���������� ����� � � ������ �� ���������� ��������.
		//����� ������� � ������ �� ����� 16. ����� ����� ����� ������� �� ���� ��������(���������� �������� ����������,
		//�� ��������, ��� ����� ������ ������� ��������� ����� ����� ������).


	}break;
	case 5:
	{
//�������� ����� �����, �������� �� ���� ������ �������, �� ���� ������, ...  � �� ���� ������������.
		//���������� ����� ����� �����, �������� � ������, �������, ����� � �.�.������� �����.
		//�������� ����� � �����, �������� �� 1 � �1, �� ������������.
		int k = 0;
		for (int klass = 1; klass <= 11; klass++)
		{
			int u = 15 + rand() % 30;
			if ((klass % 2) != 0)
			{
				k += u;
				cout << "����� ���������� �� ������ ������:" << k << endl;
			}
			else if ((klass % 2) == 0) {
				k += u;
				cout << "���������� �������� ������ �������:" << k << endl;
			}
		}
		}

	
	break;
	case 6:
	{
	//�������� ��� �������� ������� �������� �� ������.
		//���������� ����� �����, ���������� �� 1985 ����, � ����� �����, ���������� ����� 1990 ����
		int a = 0;
		int b = 0;
		cout << "������� ������� � ������?" << endl;
		int c; cin >> c;
		for (int i = 1; i < c; i++)
		{
			int d; cin >> d;
			if (d > 1990)
			{
				cout << "����� ����� ���������� �� 1990 ����:" << a;
			}
			if (d < 1985)
			{
				cout << "����� ����� ���������� �� 1985 ����:" << b;
			}

		}


	}break;
	case 7:
	{
//��� ������ ������� - ��������� ���������� �� ������� �������� �� ���������� ��������� �
		//���������� ����������.����������, ������� ������ ����� ������ ���������, ��� ����������



	}break;
	case 8:
	{
//�������� ������ ������� �������� �� ������ �� ���� ���������.���������� ���������� ��������� ������, ���������� �� �������� ������
		int oc=0;
		int sum = 0;
		cout << "���������� ���������=";
		int n; cin >> n;
		srand(time(NULL));
		
		for (int stud= 1; stud <= n; stud++)
		{
			for (int grup = 1; grup <=2; grup++)
			{
				oc = 1 + rand() % 4;
				if (oc == 2)
				cout << "�������= "<<stud<<"  ������� " << oc << endl;
			}
		}
	}break;
	case 9:
	{
//�������� ����� ������� �������� �� ��������� ������ �����.�����, ������� ����� ����� 100 ��, ����� ������� �������� �������
		//(��������, ��� � ������ ����, �� ������� ����, ���� ����� �������).���������� ������� ����� ������ ����� � ������� ����� ��������� �����.
		int k=0;
		cout << "���������� �����=";

			int n; cin >> n;
			srand(time(NULL));
			for (int i = 1; i <= n; i++)
			{
				k = 50 + rand() % 150;
				if (k > 100)


					cout<< "���� ������� ����� ����� 100 ��= " << k << endl;
				else
				{
					cout << "���� ������� ����� ������ 100 ��= " << k << endl;
				}
			}

			
	}break;
	case 10:
	{
		/*10.	� ��������� �� ������� ��������� ���������� ����������� - ���������� ������������ �� ������ ������, ��� ��������� � ������
		(�����, ����������� �� ����������� ��������� �����).�������� �� ����� ������ ��������� ����� ����� ���������� ���������� ����������*/
		int b = 90;
		for (int chel = 1; chel <= 10; chel++) {
			int t = 1 + rand() % 90;
			if (t >= 1) {
				cout << ":" << chel << ":" << t << endl;
			}
			else if (b <= t)
			{
				cout << "����� ������ ���������:" << t << endl;
			}
		}

	}
	}
}