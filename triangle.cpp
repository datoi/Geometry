#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "size:";
    cin >> size;
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size - i; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}