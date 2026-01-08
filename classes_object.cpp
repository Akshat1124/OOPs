#include<bits/stdc++.h>
using namespace std; 
class teacher {
    public:
    string name;
    string subject;
    int salary;
    string dep; 
};
int main(){
    teacher t1;
    t1.name = "Akshat";
    t1.subject = "computer science";
    t1.salary = 25000;
    t1.dep = "information technology";
    cout << t1.salary << endl;

    return 0;
}
