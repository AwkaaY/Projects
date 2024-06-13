#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int mystrcmp(const char* str1, const char* str2)
{
    return strcmp(str1, str2); 
}
int StringToNumber(char* str)
{ 
    return atoi(str); 
}
string NumberToString(int number)
{
    return to_string(number);  
}
char* Uppercase(char* str1)  
{ 
    for (int x = 0; x < strlen(str1); x++)
        putchar(toupper(str1[x]));
    cout << endl;
    return 0;
}
char* Lowercase(char* str1)
{
    for (int x = 0; x < strlen(str1); x++)
        putchar(tolower(str1[x]));  
    cout << endl;
    return 0;
}
string mystrrev(string str) 
{
    reverse(str.begin(),str.end()); 
    return str;
}

int main()
{
    setlocale(LC_ALL, "ru");
    char str1[] = "Hello! I am egor";
    char str2[] = "Hello! I am petr";
    char str[] = "445";
    int num = 432;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str << endl;
    cout << num << endl;
    cout << "Сравнение 1 и 2 строки: " << mystrcmp(str1, str2) << endl;
    cout << "Строку 3 в число: " << StringToNumber(str) << endl;
    cout << "Число 4 в строку: " << NumberToString(num) << endl;
    cout << "Верхний регистр 1 строки: ";
    Uppercase(str1);
    cout << "Нижний регистр 1 строки: ";
    Lowercase(str1);
    cout << "Развернутая 1 строка: " << mystrrev(str1) << endl;
    system("pause");
}


