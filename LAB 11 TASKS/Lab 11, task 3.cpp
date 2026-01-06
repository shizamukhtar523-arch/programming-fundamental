#include <iostream>
using namespace std;
int main()
 {
    int arr[] = {5, 15, 25, 35, 45};
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
	 {
        sum += arr[i];
    }
    float average = (float)sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}
