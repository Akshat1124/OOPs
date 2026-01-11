#include<iostream>
using namespace std;
class employee{
    private:
    int id;

    public:
    void setId(int id){
        this->id = id;
    }

    int get(){
        cout << id << endl;
    }

};
int main(){
    employee e1;
    e1.setId(01);
    e1.get();

    return 0;
}