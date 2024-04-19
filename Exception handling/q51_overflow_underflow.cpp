#include <iostream>
#include <stdexcept>

// Template function for sorting data of any kind
template<typename T>
void Sort(T* arr, int size) {
    // Implement sorting algorithm here, e.g., bubble sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template class for Stack (LIFO)
template<typename T>
class Stack {
private:
    int size;
    int top;
    T* data;

public:
    Stack(int s) : size(s), top(-1) {
        data = new T[size];
    }

    ~Stack() {
        delete[] data;
    }

    void push(T item) {
        if (top == size - 1) {
            throw std::overflow_error("Stack Overflow");
        }
        data[++top] = item;
    }

    T pop() {
        if (top == -1) {
            throw std::underflow_error("Stack Underflow");
        }
        return data[top--];
    }

    void display() {
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

// Class Account
class Account {
private:
    double balance;

public:
    Account() : balance(0) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 15000) {
            throw std::invalid_argument("OverLimit");
        }
        if (amount > balance) {
            throw std::invalid_argument("InsufficientBalance");
        }
        balance -= amount;
    }
};

int main() {
    // Testing Sort function
    int intArr[] = {3, 1, 4, 1, 5, 9};
    Sort(intArr, 6);

    double doubleArr[] = {3.14, 1.414, 2.718, 1.732, 2.236};
    Sort(doubleArr, 5);

    // Testing Stack class
    Stack<int> intStack(5);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.display();

    try {
        intStack.pop();
        intStack.pop();
        intStack.pop();
        intStack.pop();  // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Testing Account class
    Account acc;
    acc.deposit(20000);

    try {
        acc.withdraw(16000);  // This should throw an OverLimit exception
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        acc.withdraw(25000);  // This should throw an InsufficientBalance exception
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}