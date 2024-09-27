#include <iostream>
#include <string>
using namespace std;

//abraction (must provide date to the contract)
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
//encapsulated
    string Company;
    int Age;
protected:
//can use Name in the child class now
    string Name;
public:
    //setter and getter for encapsulation
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company= company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 18){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }

    void intro(){
        cout << "my name is " << Name << endl;
        cout << "my company is " << Company << endl;
        cout << "my age is " << Age << endl;
    }
    //constructer
    Employee(string name, string company, int age): Name{name}, Company{company}, Age{}{} 

    void AskForPromotion(){
        if(Age > 30){
            cout << Name <<" got promoted!"<< endl;
        }else{
            cout << Name <<", sorry NO promotion for you!" << endl;
        }
    }

    //polymorphism
    virtual void Work(){
        cout << Name << " is checking email, task backlog, permforming tasks.." << endl;
    }
};

//INHERITENCE : now developer has all the properties of employee class. it is the child of developer
class Developer : public Employee{
public:
    string FavProgrammingLang;

    Developer (string name, string company, int age, string favProgrammingLang) : Employee(name,company,age){
        FavProgrammingLang = favProgrammingLang;
    }

    void FixBug (){
        cout << Name << " fixed bug using " << FavProgrammingLang << endl;
        cout << Name << " is " << getAge() << endl;
    }

    void Work(){
        cout << Name << " is writing " << FavProgrammingLang << " code." << endl;
    }
};

class Teacher : public Employee {
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }

    Teacher(string name, string company, int age, string subject) : Employee(name,company,age){
        Subject = subject;
    }

    void Work(){
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main(){
    Employee employee1 = Employee("Bob", "Ford", 25);
    Employee employee2 = Employee("John", "Ford", 35);

    //incapsulation example
    // employee1.setAge(22);
    // cout << employee1.getName() << " is " << employee1.getAge() << endl;

    //abtraction example
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    //Inheritence
    Developer dev = Developer("Taylor", "YouTube", 18, "C++");
    dev.FixBug();
    dev.AskForPromotion(); // must put public in front of employee in the delaration to inherit its methods

    Teacher teach1 = Teacher("Jack", "Cool School", 38, "History");
    teach1.PrepareLesson();
    teach1.AskForPromotion();

    //Polymorphism
    //the most common use of polymorphism is when a parent class reference is used to refer to a child class object
    Employee *e1 = &dev;
    Employee *e = new Developer("Taylor", "YouTube", 18, "C++");
    Employee *e2 = &teach1;

    e1->Work();
    e2->Work();

}