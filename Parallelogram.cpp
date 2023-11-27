#include <iostream>
using namespace std;
int main()
{
    int width;
    cout << "Width: ";
    cin >> width;
    for (int l = 0; l <= width; l++)
    {
        for (int k = 0; k <= width - l; k++)
        {
            cout << " ";
        }
        for (int i = 0; i <= width; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}