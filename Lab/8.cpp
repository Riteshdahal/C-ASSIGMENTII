#include <iostream>
using namespace std;

template <class T>

T ArrSort()
{

    T arr[10];
    T temp;

    for (int m = 0; m < 10; m++)
    {
        cout << "arr[" << m << "]=";
        cin >> arr[m];
    }
    for (int m = 0; m < 10; m++) //Sorting logic
    {
        for (int n = m + 1; n < 10; n++)
        {
            if (arr[m] > arr[n])
            {
                temp = arr[m];
                arr[m] = arr[n];
                arr[n] = temp;
            }
        }
    }

    for (int m = 0; m < 10; m++) //Displaying logic
    {
        cout << arr[m] << "\n";
    }
};

int main()
{
    ArrSort<int>();
    ArrSort<float>();
};