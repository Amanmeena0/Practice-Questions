#include <bits/stdc++.h>
using namespace std;
int main()
{
    int weight;
    cin >> weight;
    float height;
    cin >> height;
    float BMI = weight / (height * height);

    if (BMI < 18)
        cout << "0" << endl;
    else if (BMI >= 18 && BMI < 25)
        cout << "1" << endl;
    else if (BMI >= 25 && BMI < 30)
        cout << "2" << endl;
    else if (BMI >= 30 && BMI < 490)
        cout << "3" << endl;
    else if (BMI >= 40)
        cout << "4" << endl;
    return 0;
}