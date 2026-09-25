#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T, int CAPACITY>
class Stack {
private:
    T arr[CAPACITY];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    void push(T value) {
        if (topIndex >= CAPACITY - 1) {
            throw runtime_error("Stack Overflow: Cannot push, stack is full.");
        }
        arr[++topIndex] = value;
    }

    void pop() {
        if (isEmpty()) {
            throw out_of_range("Stack Underflow: Cannot pop from an empty stack.");
        }
        topIndex--;
    }

    T top() const {
        if (isEmpty()) {
            throw out_of_range("Stack Empty: No top element exists.");
        }
        return arr[topIndex];
    }

    bool isEmpty() const {
        return topIndex == -1;
    }
};

int main() {
    Stack<int, 2> myStack;

    try {
        cout << "Pushing 10 and 20...\n";
        myStack.push(10);
        myStack.push(20);

        cout << "Attempting to push 30 (Overflow test)...\n";
        myStack.push(30);
    }
    catch (const out_of_range& e) {
        cout << "Caught Range Error: " << e.what() << "\n\n";
    }
    catch (const runtime_error& e) {
        cout << "Caught Runtime Error: " << e.what() << "\n\n";
    }

    Stack<int, 5> emptyStack;
    try {
        cout << "Attempting to pop from an empty stack (Underflow test)...\n";
        emptyStack.pop();
    }
    catch (const out_of_range& e) {
        cout << "Caught Range Error: " << e.what() << "\n";
    }
    catch (const runtime_error& e) {
        cout << "Caught Runtime Error: " << e.what() << "\n";
    }

    return 0;
}

