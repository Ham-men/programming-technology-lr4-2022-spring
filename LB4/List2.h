#pragma once
#include <iostream>
using namespace std;
class List2
{

};

const int N = 5; //������ ����
struct Deque
{
	int data[N]; //������ ������
	int last; //��������� �� �����
};
void Creation(Deque* D) //�������� ����
{
	D->last = 0;
}
bool Full(Deque* D) //�������� ���� �� �������
{
	if (D->last == 0) return true;
	else return false;
}
void AddL(Deque* D) //���������� �������� � ������
{
	if (D->last == N)
	{
		cout << "\n��� ��������\n\n"; return;
	}
	int value;
	cout << "\n�������� > "; cin >> value;
	for (int i = D->last; i > 0; i--)
		D->data[i] = D->data[i - 1];
	D->data[0] = value;
	D->last++;
	cout << endl << "������� ��������\n\n";
}
void AddR(Deque* D) //���������� �������� � �����
{
	if (D->last == N)
	{
		cout << "\n��� ��������\n\n"; return;
	}
	int value;
	cout << "\n�������� > "; cin >> value;
	D->data[D->last++] = value;
	cout << endl << "������� ��������\n\n";
}
void DeleteL(Deque* D) //�������� ������� ��������
{
	for (int i = 0; i < D->last; i++) //�������� ���������
		D->data[i] = D->data[i + 1]; D->last--;
}
void DeleteR(Deque* D) //�������� ���������� ��������
{
	D->last--;
}
int OutputL(Deque* D) //����� ������� ��������
{
	return D->data[0];
}
int OutputR(Deque* D) //����� ���������� ��������
{
	return D->data[D->last - 1];
}
int Size(Deque* D) //������ ����
{
	return D->last;
}