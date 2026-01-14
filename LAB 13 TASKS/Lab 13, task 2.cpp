#include <iostream>
using namespace std;
int main() 
{
    int score = 100;
    int* ptr = &score;
    cout << "Original Value: " << score << endl;
    *ptr = 250;
    cout << "Modified Value: " << score << endl;
    return 0;
}
