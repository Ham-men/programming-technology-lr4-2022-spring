Задание 1 
Написать функцию-шаблон, вычисляющую среднее значение в массиве. Размер массива и значения задаются случайным образом (до 100).

Важно учитывать при реализации:
●	Необходимо выполнить разделение на h и cpp файлы для каждого класса. h файлы содержат определение, cpp файлы содержат реализацию. функция main обязана располагаться в отдельном cpp файле.
●	Реализовать динамическое выделение памяти и очищение.
●	Данные класса обязаны находиться в области доступа private. Должны быть созданы функции для получения значения данных и установки значения. Прямого доступа к данным быть не должно.
●	Если требуется реализовать стек/очередь/дек/список, то элемент такой дисциплины обязан быть выполнен в виде класса. В классе элемента данные и ссылка (-и) обязаны располагаться в области private. Обязательно создание функций для извлечения данных и изменения этих данных и ссылок (-и)..
●	Обязательно реализовать работу с исключительными ситуациями - генерация и обработку. Если в ЛР студенту не очевидно какую исключительную ситуацию следует обрабатывать,следует обратиться к преподавателю. Обработка исключений должна производиться в обоих заданиях.
●	Реализовать пользовательское меню согласно заданию. Обязательно реализовать возможность выбора типа данных, с которыми возможно взаимодействие в каждом задании: int, char, float, double, char*. Не должно быть в программе параметров, которые задаются в main, все, что может задать пользователь должно задаваться с клавиатуры, если в задании не указано иначе (имеется в виду заполнение случайными данными).
●	Класс должен содержать конструктор со списком инициализации, конструктор с параметром, деструктор.
