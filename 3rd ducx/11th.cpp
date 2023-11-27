#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Enter the final score: ";
    cin >> score;

    char grade;

    if (score >= 90 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 86 && score < 90)
    {
        grade = 'A-';
    }
    else if (score >= 82 && score <= 85)
    {
        grade = 'B+';
    }
    else if (score >= 78 && score <= 81)
    {
        grade = 'B';
    }
    else if (score >= 74 && score <= 77)
    {
        grade = 'B-';
    }
    else if (score >= 70 && score <= 73)
    {
        grade = 'C+';
    }
    else if (score >= 66 && score <= 69)
    {
        grade = 'C';
    }
    else if (score >= 62 && score <= 65)
    {
        grade = 'C-';
    }
    else if (score >= 58 && score <= 61)
    {
        grade = 'D+';
    }
    else if (score >= 55 && score <= 77)
    {
        grade = 'D';
    }
    else if (score > 55 && score <= 0)
    {
        grade = 'B-';
    }
    else
    {
        grade = 'F';
    }

    cout << "The grade for the student is: " << grade << endl;

    return 0;
}
