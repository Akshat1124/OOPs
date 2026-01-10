#include<iostream>
using namespace std; 
class employee{
    private:
    int salary;
    protected:
    int id;
    public:
    void setSalary(int n){
        salary = n; 
    }
    int getSalary(){
        return salary; 
    }

};
int main(){
    employee e1;
    e1.setSalary(50000);
   cout << e1.getSalary();

    return 0;
}