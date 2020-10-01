#include <iostream>
using namespace std;

template <class T>

T average()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    T arr[size];
    T total = 0;
    T average;

    cout << "Enter the array element ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
        cout << "Total " << total << endl;
    }

    average = total / size;

    cout << "Average = " << average << endl;
};

int main()
{

    average<int>();
    average<long>();
    average<double>();
    average<char>();
}