#include "function.h"
#include <iostream>
void addStudent(std::vector<Student> &registru)
{ 
    Student newStudent;
    newStudent.studentID = registru.size();

    std::cout << "Da numele studentului nou \n";
    std::cin >> newStudent.nume;
    std::cout << "Da prenumele studentului nou \n";
    std::cin >> newStudent.prenume;

    registru.push_back(newStudent);

}
void studentName(const std::vector<Student>& registru)
{   int studentId;
    std::cout << "Da id-ul studentului, lista incepe de la 0 \n ";
    std::cin >> studentId;
   std::cout << registru[studentId].nume << ' ' << registru[studentId].prenume << '\n';
}