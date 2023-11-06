#include <iostream>
using namespace std;

void SetSize(unsigned int& size, int minSize, int maxSize)
{
    cout << "Enter size of array: ";
    cin >> size;

    if (size < minSize) size = minSize;
    if (size > maxSize) size = maxSize;
}

void AllocateMemory(int*& ar, unsigned int size)
{
    ar = new int[size];
}

void FillArray(int* ar, unsigned int size, int minSize, int maxSize)
{
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % (maxSize - minSize + 1) + minSize;
    }
}

void ShowArray(int* ar, unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " , ";
    }
}

void FreeMemory(int* ar)
{
    delete[] ar;
}

int main()
{
    unsigned int size;
    SetSize(size, 10, 100000);

    int* ar = nullptr;
    AllocateMemory(ar, size);

    srand(time(NULL)); 

    FillArray(ar, size, 0, 100);

    ShowArray(ar, size);

    FreeMemory(ar);
}
