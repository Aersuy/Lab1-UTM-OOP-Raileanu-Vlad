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
void studentName(const std::vector<Student>& registru,int studentId)
{
   std::cout << registru[studentId].nume << ' ' << registru[studentId].prenume << '\n';
}
void addPereche(std::vector<Student>& registru)
{   int num = registru.size();
    Disciplina newDisciplina;
    std::cout << "Da numele disciplinei noi \n";
    std::cin >> newDisciplina.numePereche;
    for (int iterator = 0; iterator < num; iterator++)
    {
        registru[iterator].discipline.push_back(newDisciplina);
    }
}
void printDiscipline( const std::vector<Student>& registru)
{
    int num = registru[0].discipline.size();
    for (int iterator = 0; iterator < num; iterator++)
    {
        std::cout << iterator << ". " << registru[0].discipline[iterator].numePereche << '\n';
    }
}
void numeDiscipline(const std::vector<Student>& registru, int studentId,int disciplinaId)
{
    std::cout << registru[studentId].discipline[disciplinaId].numePereche << '\n';
}
void addAbsenta(std::vector<Student> &registru, int studentId,int disciplinaId)
{   std::string data;
    std::cout << "Da data in care a absentat \n";
    std::cin.clear();
    std::cin.ignore(INT_MAX,'\n');
    std::getline(std::cin,data);
    registru[studentId].discipline[disciplinaId].absente.push_back(data);
    registru[studentId].discipline[disciplinaId].numAbsente++;
    registru[studentId].numAbsente++;
}
void printAbsente(const std::vector<Student> &registru,int studentId, int disciplinaId)
{   std::cout << registru[studentId].discipline[disciplinaId].numAbsente+1 << " absente \n";
    int num = registru[studentId].discipline[disciplinaId].absente.size();
    for (int iterator = 0; iterator < num; iterator++)
    {
        std::cout << iterator << ". " << registru[studentId].discipline[disciplinaId].absente[iterator] << '\n';
    }
    
}

void addMedie(std::vector<Student> &registru, int studentId,int disciplinaId)
{
    std::cout << "Da media lui " << registru[studentId].nume << ' ' << registru[studentId].prenume << " la " << registru[studentId].discipline[disciplinaId].numePereche << '\n';
    std::cin >> registru[studentId].discipline[disciplinaId].medie;

    calcMedie(registru,studentId);
}
void printMedie(const std::vector<Student> &registru, int studentId,int disciplinaId)
{
    std::cout << registru[studentId].nume << ' ' << registru[studentId].prenume << " are media: " << registru[studentId].discipline[disciplinaId].medie << '\n';
}
void calcMedie(std::vector<Student> &registru, int studentId)
{
    int max = registru[studentId].discipline.size();
    double sum = 0;

    for (int iterator = 0; iterator < max; iterator++)
    {
        sum += registru[studentId].discipline[iterator].medie;
    }
    registru[studentId].medie = sum / registru[studentId].discipline.size();
    
}
void studentList(std::vector<Student> &registru)
{
   int max = registru.size();
   for (int iterator = 0; iterator < max; iterator++)
   {
    std::cout << iterator << ". ";
    studentName(registru,iterator);
   }
   

}

void highestMedie(const std::vector<Student> &registru)
{
    int iterator, ordHighest;
    double bestMedie = 0;
    for ( iterator = 0; iterator < registru.size(); iterator++)
    {
        if (registru[iterator].medie > bestMedie)
        {
            bestMedie = registru[iterator].medie;
            ordHighest = iterator;
        }
        
    }
    studentName(registru,ordHighest);
    std::cout << "Are cea mai mare medie generala : " << registru[ordHighest].medie << '\n';
    
}

void highestAbsente(const std::vector<Student> & registru)
{
    int iterator, ordHighest, highest;
    highest = 0;
      for ( iterator = 0; iterator < registru.size(); iterator++)
    {
        if (registru[iterator].numAbsente > highest)
        {
            highest = registru[iterator].numAbsente;
            ordHighest = iterator;
        }
        
    }
     studentName(registru,ordHighest);
    std::cout << "Are cele mai multe absente : " << registru[ordHighest].numAbsente << '\n';
}
void mainMenu()
{
    std::cout << "Apasa 1 pentru a adauga un student now \n";
    std::cout << "Apasa 2 pentru a arata lista de studenti \n";
    std::cout << "Apasa 3 pentru a adauga o pereche noua \n";
    std::cout << "Apasa 4 pentru a gasi studentul cu cea mai mare medie \n";
    std::cout << "Apasa 5 pentru a gasi studentul cu cele mai multe absente \n";
    std::cout << "Apasa 6 pentru a intra in meniul unui anumit student (cu id-ul) \n ";
    std::cout << "Apasa 0 pentru a iesi din program \n \n";
}
void studentMenu()
{
    std::cout << "Apasa 1 pentru a citi numele studentului \n";
    std::cout << "Apasa 2 pentru a printa lista de discipline la care studentul participa \n";
    std::cout << "Apasa 3 pentru a printa media generala a studentului \n";
    std::cout << "Apasa 4 pentru a printa numarul de absente totale ale studentului \n";
    std::cout << "Apasa 5 pentru a alege o anumita disciplina(folosind numarul de ordine, incepand cu 0) \n";
    std::cout << "Apasa 0 a iesi in meniul anterior \n \n";
}
void disciplinaMenu()
{
    std::cout << "Apasa 1 pentru a citi numele perechi \n";
    std::cout << "Apasa 2 pentru a adauga media studentului la perechea aceasta \n";
    std::cout << "Apasa 3 pentru a citi mediea studentului la perechea aceasta \n";
    std::cout << "Apasa 4 pentru a adauga o absenta \n";
    std::cout << "Apasa 5 pentru a citi numarul de absente la perechea aceasta \n";
    std::cout << "Apasa 0 pentru a iesi in meniul anterior \n \n";
}