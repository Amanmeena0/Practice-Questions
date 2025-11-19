#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name :" << name << endl;
        cout << "cgpa :" << *cgpaPtr << endl;
    }
};
int main()
{
    Student st("rahul kumar", 7.8);
    Student st1(st);
    st.getInfo();
    st1.name = "Aman";
    *(st1.cgpaPtr) = 9.3;
    st.getInfo();
    st1.getInfo();
    return 0;
}
