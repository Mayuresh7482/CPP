#ifndef Q50_HEADER_H
#define Q50_HEADER_H
#include <algorithm>
#include <iostream>
using namespace std;

// Standalone sort function
template <typename T>
void Sort(T arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // Swap arr[j] and arr[j+1]
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

template <typename T>
class Stack
{
private:
  int size;
  int top;
  T *stack;

public:
  // Default constructor
  Stack(int size) : size(size), top(-1)
  {
    stack = new T[size];
  }

  // Destructor
  ~Stack()
  {
    delete[] stack;
  }

  // Push an element onto the stack
  void push(T element)
  {
    if (top >= size - 1)
    {
      throw std::out_of_range("Stack<>::push(): stack overflow");
    }
    stack[++top] = element;
  }

  // Pop an element from the stack
  void pop()
  {
    if (top < 0)
    {
      throw std::out_of_range("Stack<>::pop(): stack underflow");
    }
    top--;
  }

  // Display the stack
  void display() const
  {
    for (int i = top; i >= 0; i--)
    {
      std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
  }
};

#endif