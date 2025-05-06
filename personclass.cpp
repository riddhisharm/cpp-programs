// Create a class person with private attributes name, age, and public mehtods to set and get the values.
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Person p1;
    p1.setName("Riddhima Sharma");
    cout << "Person name is: " << p1.getName() << endl;
    p1.setAge(19);
    cout << "Person age is: " << p1.getAge() << endl;
    return 0;
}