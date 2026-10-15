#include <iostream>
using namespace std;

class Stack
{
private:
    int size = 10;
    int top = -1;
    int arr[10];

public:
    Stack()
    {
        cout << "Stack Created! " << endl;
    }

    void push(int val)
    {
        if (top > size - 1)
        {
            cout << "=====>" << " Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << "=====>" << val << " Pushed to Stack" << endl;
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "=====>" << " Stack Underflow" << endl;
            return;
        }
        cout << "=====>" << arr[top--] << " Popped" << endl;
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    Stack s;
    int val, choice;

    do
    {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to PUSH: ";
            cin >> val;
            s.push(val);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            cout << "Elements in Stack: ";
            s.display();
            cout<<endl;
            break;

        case 4:
            cout << "=====>  EXITED " << endl;
            break;

        default:
            cout << "Enter a Valid Choice" << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}