#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int choice = 0;
    do
    {
        cout << "Какое задание вас интереует:\n ";
        cout << "Введите номер задания от 1 - 6(Для выхода нажмите 7): ";
        cin >> choice;
        switch (choice) 
        {
        case 1:
        {
            string text;
            int num;
            cout << "Введите строку\n";
            cin >> text;
            cout << "Введите номер элемента который надо удалить\n";
            cin >> num;
            text = text.replace(num - 1, 1, "");
            cout << text;
            cout << endl;
            break;
        }
        case 2:
        {
            string text;
            char symb;
            cout << "Введите строку\n";
            cin >> text;
            cout << "Введите символ который хотите удалить\n";
            cin >> symb;
            for (int i = 0; i < text.length(); i++)
            {
                if (text[i] == symb)
                {
                    text = text.replace(i, 1, "");
                }
            }
            cout << text;
            cout << endl;
            break;
        }
        case 3:
        {
            string text;
            string symb;
            cout << "Введите строку\n";
            cin >> text;
            cout << "Введите символ который хотите вставить\n";
            cin >> symb;
            cout << "Введите куда надо вставить\n";
            int num;
            cin >> num;
            text.insert(num, symb);
            cout << text;
            cout << endl;
            break;
        }
        case 4:
        {
            string text;
            char symb;
            cout << "Введите строку\n";
            cin >> text;
            symb = '.';
            for (int i = 0; i < text.length(); i++)
            {
                if (text[i] == symb)
                {
                   text.replace(i, 1, "!");
                }
            }
            cout << text;
            cout << endl;
            break;

        }
        case 5:
        {
            string text;
            char symb;
            int counter = 0;
            cout << "Введите строку\n";
            cin >> text;
            cout << "Введите символ который хотите найти\n";
            cin >> symb;
            for (int i = 0; i < text.length(); i++)
            {
                if (text[i] == symb)
                {
                    counter++;
                }
            }
            cout << "Количество символов: " << counter;
            cout << endl;
            break;
        }
        case 6:
        {
            string text;
            char symb;
            int counter = 0;
            cout << "Введите строку\n";
            cin >> text;
            for (int i = 0; i < text.length(); i++)
            {
                if (isdigit(text[i]))
                {
                    counter++;
                }
            }
            cout << "Количество цифр: " << counter <<"\nКоличество символов:" << text.length() - counter; 
            cout << endl;
            break;
        }
        default:
            break;
        }
    } while (choice != 7);
    string str;
    getline(cin, str);
    cout << str;

    
    system("pause");
}


