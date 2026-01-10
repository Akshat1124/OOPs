#include <iostream>
using namespace std;
class Student{
    public:
    int id;
    string name; 

    void display (){
        cout << id << " " << name;
    }

};
int main(){
    Student s1;
    s1.id = 001;
    s1.name = "Akshat";
    s1.display();
    return 0; 
}