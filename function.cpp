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
void addPereche(std::vector<Student>& registru)
{   int num = registru.size();
    Disciplina newDisciplina;
    std::cout << "Da numele disciplinei noi \n";
    std::cin >> newDisciplina.numePereche;

    for (int i = 0; i < num; i++)
    {
        registru[i].discipline.push_back(newDisciplina);
    }
}
void printDiscipline( const std::vector<Student>& registru)
{
    int num = registru[0].discipline.size();
    for (int i = 0; i < num; i++)
    {
        std::cout << i << ". " << registru[0].discipline[i].numePereche << '\n';
    }
}