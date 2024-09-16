#pragma once
#include <string>
#include <vector>
struct Disciplina
{
   int disciplinaId{};
   std::string numePereche{};
   double medie{};
   std::vector<std::string> absente;
   int numAbsente;
} typedef Disciplina;

struct Student 
{
    int studentID{};
    std::string nume{};
    std::string prenume{};
    double medie{};
    double numAbsente{};
    std::vector<Disciplina> discipline{};
} typedef Student;
void addStudent(std::vector<Student> &registru);
void studentName(const std::vector<Student> &registru,int);
void studentList(const std::vector<Student> &registru);
void addPereche(std::vector<Student> &registru);
void printDiscipline(const std::vector<Student> &registru);
void numeDiscipline(const std::vector<Student> &registru);
void addAbsenta(std::vector<Student> &registru,int, int);
void printAbsente(const std::vector<Student> &registru, int, int);
void addMedie(std::vector<Student> &registru,int ,int);
void printMedie(const std::vector<Student> &registru,int, int);
void calcMedie(std::vector<Student> &registru,int);


void mainMenu();
void studentMenu();
void disciplinaMenu();