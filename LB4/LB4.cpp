// LB4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <deque>
#include "List.h"

using namespace std;

template <typename T>
T sr_znach( T* mass, T& num)        //1 задание
{
    int res = 0;
    for (int i = 0; i < num; i++) 
    {
        res += mass[i];
    }
    return res/num;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("cls");

    srand(time(NULL));
    int num; // размер массива
    num = rand() % 100;

    int* mass = new int[num]; // Выделение памяти для массива
    for (int i = 0; i < num; i++) {
        // Заполнение массива и вывод значений его элементов
        mass[i] = rand() % 100;
        cout << "значение " << i << " элемента =  " << mass[i] << endl;
    }
    float i = sr_znach(mass, num);
    cout << "\nсреднее = " << i;


    //deque<int> myDeque;
    cout << "\n 2 задание\n";
    List list;
    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Show();

}

