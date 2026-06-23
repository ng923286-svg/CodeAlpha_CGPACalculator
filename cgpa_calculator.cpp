#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of courses: ";
    cin >> n;

    vector<string> courseName(n);
    vector<float> grade(n), credits(n);

    float totalGradePoints = 0, totalCredits = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courseName[i];

        cout << "Enter grade point (out of 10): ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalGradePoints += grade[i] * credits[i];
        totalCredits += credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n----- Course Details -----\n";
    cout << left << setw(15) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << courseName[i]
             << setw(15) << grade[i]
             << setw(15) << credits[i] << endl;
    }

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nFinal CGPA = " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
