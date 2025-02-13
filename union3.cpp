#include <iostream>
 using namespace std;
 struct student {
    int rollno;
    char name[50];
    float cgpa;
 } s1;
 union student2 {
    int rollno;
    char name[50];
    float cgpa;
 } u1;
 int main(int argc, char** argv) {
    cout << "Struct student size = " << sizeof (s1);
    cout << "\nUnion  student size = " << sizeof (u1);
    return 0;
 }