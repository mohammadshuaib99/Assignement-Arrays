#include <iostream>
using namespace std;

void displayPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void productOfElement(int *array, int size){
    for(int i = 1; i<=size; i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(int);
    displayPrint(array, n);
    productOfElement(array, n);

    return 0;
}