#include <iostream>

using namespace std;

int main()
{
    int number1;
    cout << "Enter first numbers you want to add " << endl;
    cin >> number1;
    int number2;
    cout << "now enter the second number you want to add" << endl;
    cin >> number2;
    cout << "the number you want to add together are: " << number1 << " and: " << number2 << endl;
    int answer = number1 + number2;
    cout << "the answer is: " << answer << endl;
    cout << "Thanks for using this caculator :)";

    return 0;
}
