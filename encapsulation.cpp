#include<iostream>
using namespace std;
class Employee{
    private: 
    int salary; 

    public:
    void setSalary(int n){
        salary = n ;
    }

    int getSalary(){
        return salary; 
    }

};
int main(){
    Employee e1;
    e1.setSalary(40999);
    cout << e1.getSalary();
    return 0;
}