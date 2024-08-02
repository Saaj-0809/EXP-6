//Name: Saaj Mulik
//Prn: 23070123109
//Class: Entc B-2

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    int i = 1;
    while (i <= n) 
    {
        int j = 1;
        while (j <= i) 
        {
            std::cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}
 /* OUTPUT
Enter the number of rows for the triangle: 8
*
**
***
****
*****
******
*******
********

--------------------------------
Process exited after 1.734 seconds with return value 0
Press any key to continue . . . */
