#include <iostream>

using namespace std;

int main()
{
    double score[5];

    cout << "1 : ";
    cin >> score[0];

    cout << "2 : ";
    cin >> score[1];

    cout << "3 : ";
    cin >> score[2];

    cout << "4 : ";
    cin >> score[3];

    cout << "5 : ";
    cin >> score[4];

    double total = score[0] + score[1] + score[2] + score[3] + score[4];
    double average = total / 5;

    cout << "Total : " << total << endl;
    cout << "Average : " << average << endl;

    return 0;
}