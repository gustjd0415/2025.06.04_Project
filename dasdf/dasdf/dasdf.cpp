﻿#include <iostream>

using namespace std;

int main()
{
    double score[5];

    cout << "1 번째 학생 점수를 입력해주세요 : ";
    cin >> score[0];

    cout << "2 번째 학생 점수를 입력해주세요 : ";
    cin >> score[1];

    cout << "3 번째 학생 점수를 입력해주세요 : ";
    cin >> score[2];

    cout << "4 번째 학생 점수를 입력해주세요 : ";
    cin >> score[3];

    cout << "5 번째 학생 점수를 입력해주세요 : ";
    cin >> score[4];

    double total = score[0] + score[1] + score[2] + score[3] + score[4];
    double average = total / 5;

    cout << "총점 : " << total << endl;
    cout << "평균 : " << average << endl;

    return 0;
}