#include<iostream>
using namespace std;

class teacher{
 
    private:

    string name;
    string subject;
    string Dept;
    double salary;

    void changeDept (string newDept);
    {
        Dept = newDept;
  }

};

int main (){
    teacher t1;
    t1.name  = "prahi";
    cout << t1.name<<endl;
    t1.subject = "c++";
    cout << t1.subject<<endl;
    t1.dept = "computer science";
    cout << t1.dept<<endl;
    t1.salary = "100000";
    cout << t1.salary<<endl;
   

return 0
}