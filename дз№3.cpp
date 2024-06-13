#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int** task1(int& size_col, int size_row, int** arr)
{
    
    int num;
    cout << "Где хотите добавить столбец: ";
    cin >> num;
    int counter = 0;
    int temp_size = size_col + 1; 
    int** mass = new int* [size_row];  
    for (int i = 0; i < size_row; i++) 
    {
        mass[i] = new int[temp_size];  
    }
    for (size_t i = 0; i < size_row; i++) 
    {
        for (size_t j = 0; j < temp_size; j++) 
        {
            if (j == num - 1)
            {
                counter++;
                continue;
            }
            else
            {
                mass[i][j] = arr[i][j - counter];  
            }       
        }  
        counter = 0;
    }
    for (int i = 0; i < size_row; i++) 
    {
          mass[i][num - 1] = 1 + rand() % (10 - 1); 
    }
    for (size_t i = 0; i < size_row; i++)   
    {
        delete[] arr[i];
    }
    delete[] arr;
    size_col = temp_size; 
    for (size_t i = 0; i < size_row; i++) 
    {
        for (size_t j = 0; j < size_col; j++)  
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    return mass;
}
int** task2(int& size_col, int size_row, int** arr)
{

    int num;
    cout << "Где хотите убрать столбец: ";
    cin >> num;
    int counter = 0;
    int temp_size = size_col - 1;
    int** mass = new int* [size_row];
    for (int i = 0; i < size_row; i++)
    {
        mass[i] = new int[temp_size];
    }
    for (size_t i = 0; i < size_row; i++)
    {
        for (size_t j = 0; j < temp_size; j++)
        {
            if (j == num - 1)
            {
                counter++;
            }
            mass[i][j] = arr[i][j + counter];   
        }
        counter = 0;
    }
    for (size_t i = 0; i < size_row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    size_col = temp_size;
    for (size_t i = 0; i < size_row; i++)
    {
        for (size_t j = 0; j < size_col; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    return mass;
}
void move(int size_col, int size_row, int** arr)
{
    int choice;
    cout << "В какую сторону будет сдвиг?\n1 - Вправо\n2 - Влево\n3 - Вверх\n4 - Вниз" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int


    case 2: 



    case 3:



    case 4:



    default:
        break;
    }
}

int main()
{
	setlocale(LC_ALL, "ru");
    int size_col, size_row;
    cout << "Введите размер массива: ";
    cin >> size_col >> size_row; 
    int** arr = new int* [size_row];
    for (int i = 0; i < size_row; i++)
    {
        arr[i] = new int[size_col];
    }
    for (size_t i = 0; i < size_row; i++)
    {
        for (size_t j = 0; j < size_col; j++)
        {
            arr[i][j] = 1 + rand() % (10 - 1);
        }
    }
    for (size_t i = 0; i < size_row; i++)
    {
        for (size_t j = 0; j < size_col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    task2(size_col, size_row, arr);  


    /*bool start = true;
    do
    {
        cout << "Что вас интересует?\n1 - Задание 1\n2 - Задание 2\n3 - Выход\nВаш выбор: ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            task1();
        }
        else if(choice == 2)
        {
            task2();
        }
        else if (choice == 3)
        {
            start = false;
        }
        else
        {
            cout << "Неверный ввод";
        }
    } while (start); */
	system("pause");
    return 0;
}


