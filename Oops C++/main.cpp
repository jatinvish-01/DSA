#include <iostream>
#include <string>
using namespace std;

class Student{
      public:

            // Constructor

            Student(){
                  cout << "Student Default constructor called" << endl;
            }
            
            // Parameteriesed constructor
            Student(int id, int age, string name, int nos){
                  cout << "Student Parameteriesed constructor called" << endl;
                  this->id = id;     
                  this->age = age;     
                  this->name = name;     
                  this->nos = nos;     
            }

            // Copy Constructor
            Student(const Student &sourceCodeObject){
                  cout << "Student Copy Constructor called" << endl;
                  this->id = sourceCodeObject.id;     
                  this->age = sourceCodeObject.age;     
                  this->name = sourceCodeObject.name;     
                  this->nos = sourceCodeObject.nos;  // Copying a objects and pasted in c object (c = a)
            }

            // Attributes / instance
            int id, age, nos;
            string name;

            // Behaviours / Methods / Functions
            void study(){
                  cout << this->name << " :Studying" << endl;
            }
            void sleep(){
                  cout << this->name << " :Sleeping" << endl;
            }
            void bunk(){
                  cout << this->name << " :Bunking" << endl;
            }
            
            // Destructor
            ~Student(){
                  cout << "Student Default constructure called" << endl;
            }
};

int main(){
      // 1st method to print

      Student a;
      a.id = 1;
      a.age = 18;
      a.name = "Jatin";
      a.nos = 6;

      Student b;
      b.id = 2;
      b.age = 15;
      b.name = "rahul";
      b.nos = 4;

      a.study();
      b.bunk();

      // 1st method to print

      Student a(1, 15, "Ramish", 5);
      Student b(2, 14, "Rahul", 5);
      // Student c(3, 17, "aman", 5);
      // Student d(4, 15, "sohal", 5);

      cout << a.id << " " << a.name << " " << endl;

      a.sleep();
      b.bunk();

      // Copy Constructor
      Student c = (a);
      c.study();

      cout << c.name << " " << a.name << " " << endl;

      return 0;
}