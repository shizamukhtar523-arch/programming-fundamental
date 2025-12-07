#include <iostream>
using namespace std;

int main()
 {
    int s1, s2, s3;
    cout << "Enter marks of 3 subjects: ";
    cin >> s1 >> s2 >> s3;
    int total = s1 + s2 + s3;
    float percentage = total / 3.0;
    char g1, g2, g3;
    // Grade for subject 1
    if (s1 >= 90) g1 = 'A';
    else if (s1 >= 80) g1 = 'B';
    else if (s1 >= 70) g1 = 'C';
    else if (s1 >= 60) g1 = 'D';
    else g1 = 'F';
    // Grade for subject 2
    if (s2 >= 90) g2 = 'A';
    else if (s2 >= 80) g2 = 'B';
    else if (s2 >= 70) g2 = 'C';
    else if (s2 >= 60) g2 = 'D';
    else g2 = 'F';
    // Grade for subject 3
    if (s3 >= 90) g3 = 'A';
    else if (s3 >= 80) g3 = 'B';
    else if (s3 >= 70) g3 = 'C';
    else if (s3 >= 60) g3 = 'D';
    else g3 = 'F';
    if (g1 == 'F' || g2 == 'F' || g3 == 'F')
	 {
        cout << "\nTotal Marks = " << total;
        cout << "\nPercentage = " << percentage;
        cout << "\nGrade in subjects: " << g1 << ", " << g2 << ", " << g3;
        cout << "\nResult: FAILED";
        return 0; 
    }
    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage;
    cout << "\nGrade in subjects: " << g1 << ", " << g2 << ", " << g3;
    if (g1 == 'A' && g2 == 'A' && g3 == 'A')
	 {
        if (total >= 270) {
            cout << "\nScholarship: MERIT Scholarship";
        }
    }
    else if (g1 >= 'B' && g2 >= 'B' && g3 >= 'B') 
	{
        if (total >= 240)
		 {
            cout << "\nScholarship: REGULAR Scholarship";
        }
    }
    else {
        cout << "\nScholarship: Not Eligible";
    }

    return 0;
}
