#include <iostream>
using namespace std;

int Binary_calculation(int Number);

int main()
{
    int UserDecimal;
    cout << "\nEnter a decimal number: ";
    cin >> UserDecimal;

    Binary_calculation(UserDecimal);

    system("pause>0");
}

int Binary_calculation(int Number)
{
    cout << "Binary of " << Number << ":" << endl;
    int i = 0;
    int binNumber[32];
    while (Number > 0)
    {
        binNumber[i] = Number % 2;
        Number = Number / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binNumber[j];
    }
}