#include "List.h"

List::~List()                           //����������
{
    while (Head)                       //���� �� ������ �� ������ ������ ���-�� ����
    {
        Tail = Head->Next;             //��������� ����� ������ ���������� ����� ������
        delete Head;                   //������� ������ �� ������� �����
        Head = Tail;                   //����� ������ ������ �� ����� ���������� ��������
    }
}

void List::Add(int x)
{
    Node* temp = new Node;               //��������� ������ ��� ����� ������� ���������
    temp->Next = NULL;                   //���������, ��� ���������� �� ���������� ������ �����
    temp->x = x;                         //���������� �������� � ���������

    if (Head != NULL)                    //���� ������ �� ����
    {
        temp->Prev = Tail;               //��������� ����� �� ���������� ������� � �����. ����
        Tail->Next = temp;               //��������� ����� ���������� �� ������� ��������
        Tail = temp;                     //������ ����� ������
    }
    else //���� ������ ������
    {
        temp->Prev = NULL;               //���������� ������� ��������� � �������
        Head = Tail = temp;              //������=�����=��� �������, ��� ������ ��������
    }
}

void List::Show()
{
    //������� ������ � �����
    Node* temp = Tail;                   //��������� ��������� �� ����� ���������� ��������

    while (temp != NULL)               //���� �� ���������� ������ ��������
    {
        cout << temp->x << " ";        //�������� �������� �� �����
        temp = temp->Prev;             //���������, ��� ����� ����� ����������� ��������
    }
    cout << "\n";

    //������� ������ � ������
    temp = Head;                       //�������� ��������� �� ����� ������� ��������
    while (temp != NULL)              //���� �� �������� ������ ��������
    {
        cout << temp->x << " ";        //������� ������ ��������� �������� �� �����
        temp = temp->Next;             //����� ������ �� ����� ���������� ��������
    }
    cout << "\n";
}