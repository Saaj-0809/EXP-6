//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include <iostream>
using namespace std;

int main() 
{
    int rows, columns, i = 1;
    char ch;

    cout << "number of rows: ";
    cin >> rows;

    cout << "number of columns: ";
    cin >> columns;

    cout << "character: ";
    cin >> ch;

    while (i <= rows) 
    {
        for (int j = 1; j <= columns; j++) 
        {
            cout << ch << " ";
        }
        cout <<endl;
        i++;
    }

    return 0;
}
