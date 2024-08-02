# EXP-6

## Aim: 
Creating for, while, do while loops.

## Theory: 
For loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop whiile loops can execute a block of code as long as a specified condition is reached do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true.

## CODE1:

```
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"enter how many numbers you want to print: ";
    cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}
```

## OUTPUT1:

![image](https://github.com/user-attachments/assets/10eb39ff-b57f-4e9a-b944-1e73b9ba2333)

## CODE2:

```
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
```

## OUTPUT2: 

![image](https://github.com/user-attachments/assets/6be508cf-ea02-4376-bb24-487a156b3a69)

## CODE3:

```
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
```

## OUTPUT3:

![image](https://github.com/user-attachments/assets/0ee1a312-7553-4605-b88e-26b259c37ebc)

## CODE4:

```
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"enter the number of digits you want to print: ";
    cin>>n;
    do
    {
        cout<<i<<endl;
        i++;

    }
    while(i<=n);

    return 0;    
}
```

## OUTPUT4:

![image](https://github.com/user-attachments/assets/d849c6f1-79c6-477b-91b6-d70d5ee7d28c)

## CODE5:

```
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include<iostream>
using namespace std;

int main()
{
    int i,j,k=0,n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        while (k!=(2*i-1))
        {
            cout<<"% ";
            k++;
        }
        k=0;
        cout<<endl;
    }

    cout<<endl;
    return 0;
}
```

## OUTPUT5:

![image](https://github.com/user-attachments/assets/0d0a4752-b928-4d4a-bee0-1c79b8e5ae02)

## CODE6:

```
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
```

## OUTPUT6:

![image](https://github.com/user-attachments/assets/c59a50e8-166d-4936-a6f8-2daaba925827)

## CODE7:

```
//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2

#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=0;i<13;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
```

## OUTPUT7:

![image](https://github.com/user-attachments/assets/91f1160d-e917-408a-b0f3-a10395f9a2de)

## Conclusion:

Mastering for, while, and do-while loops in C++ allows you to handle repetitive tasks efficiently. Use for for a known number of iterations, while for conditions checked before execution, and do-while for conditions checked after execution.
