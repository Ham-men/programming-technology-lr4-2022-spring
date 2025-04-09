#include <iostream> 
using namespace std;
struct Node                             //���������, ���������� ������ ������
{
    int x;                             //�������� x ����� ������������ � ������
    Node* Next, * Prev;                 //��������� �� ������ ���������� � ����������� ��������� ������
};

class List                              //������� ��� ������ ������
{
    Node* Head, * Tail;                 //��������� �� ������ ������ ������ � ��� �����
public:
    List() :Head(NULL), Tail(NULL) {};    //�������������� ������ ��� ������
    ~List();                           //�������� �����������
    void Show();                       //�������� ������� ����������� ������ �� ������
    void Add(int x);                   //�������� ������� ���������� ��������� � ������
};
