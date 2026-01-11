#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;

   student(string name, int rollno){
        this->name = name;
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "name: " << name <<endl;
        cout << "roll no: " << rollno <<endl;
    }

    ~student(){
        cout << "terminated";
    }

};
int main(){
    student s1("akshat", 29);
    s1.getInfo();
    return 0; 
}