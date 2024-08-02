//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include <iostream>
using namespace std;

int main() 

{
    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 1; j <= 5; ++j) 
        {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}

/* OUTPUT 
1 x 1 = 1       1 x 2 = 2       1 x 3 = 3       1 x 4 = 4       1 x 5 = 5
2 x 1 = 2       2 x 2 = 4       2 x 3 = 6       2 x 4 = 8       2 x 5 = 10
3 x 1 = 3       3 x 2 = 6       3 x 3 = 9       3 x 4 = 12      3 x 5 = 15
4 x 1 = 4       4 x 2 = 8       4 x 3 = 12      4 x 4 = 16      4 x 5 = 20
5 x 1 = 5       5 x 2 = 10      5 x 3 = 15      5 x 4 = 20      5 x 5 = 25

--------------------------------
Process exited after 0.08846 seconds with return value 0
Press any key to continue . . . */
