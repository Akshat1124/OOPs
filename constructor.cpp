#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;
    string subject;
    double percentage; 

    Student(int i, string n, string s, double p){
        id = i;
        name = n;
        subject = s;
        percentage = p;
    }
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
}
};
int main(){
    Student s1(10, "Akshat", "IT", 50);
    s1.getInfo();

    return 0;
}