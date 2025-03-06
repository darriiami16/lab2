#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a;
    cout << "enter a(int): ";
    cin >> a;
    cout << "test" << endl;
    cout << "a=" << a << endl;
    Sleep(1000);
    printf("Hello, world2!\n");

    system("pause"); // Для Windows, чтобы консоль не закрывалась сразу
    return 0;
}