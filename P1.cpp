#include<iostream>
#include<cstring>
#include"Student.h"
#include"Node.h"

using namespace std;

int main() {
  char* fname;
  char* lname;
  strcpy(fname, "Arjun");
  strcpy(lname, "vinsel");
  Student* stu = new Student(fname,lname,4356,4);
  Node* node = new Node(stu);//tests contructor
  char* fname2;
  char* lname2;
  strcpy(fname2, "ian");
  strcpy(lname2, "williams");
  Student* stu2 = new Student(fname2,lname2,456,2);
  Node* node2 = new Node(stu2);//tests contructor
  node -> setNext(node2);//tests set next

  ((node) -> getStudent()) -> printStudent();//Tests get studetn and print student
  (((node) -> getNext()) ->getStudent()) -> printStudent();//tests get next
  node -> ~Node();//tests destructor
  return 0;
}
