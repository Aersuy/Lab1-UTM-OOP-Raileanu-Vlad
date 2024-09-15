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
    std::vector<Disciplina> discipline{};
} typedef Student;

