
#include "function.cpp"

int main()
{ 
    std::vector<Student> registru;
     addStudent(registru);
     studentName(registru);

     addStudent(registru);
     studentName(registru);

     addPereche(registru);
     printDiscipline(registru);

     addMedie(registru,0,0);
     printMedie(registru,0,0);
     
     addMedie(registru,1,0);
     printMedie(registru,1,0);
    

    
}
