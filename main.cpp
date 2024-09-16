
#include "function.cpp"

int main()
{ 
    std::vector<Student> registru;
    int alegere = 1;
    int alegere2,alegere3;
    int studentId,disciplinID;

    while (alegere != 0)
    {
        mainMenu();
        std::cin >> alegere;
        switch (alegere)
        {
        case 1:
            addStudent(registru);
            break;
        case 2:
           studentList(registru);
        break;
          
        case 3:
         addPereche(registru);
        break;
        case 4:

        break;

        case 5:

        break;

        case 6:
          std::cout << "Da ID-ul studentului, (din lista) \n";
          std::cin >> studentId;
          alegere2 = 1;
          while (alegere2 != 0)
          {
            studentMenu();
            std::cin >> alegere2;
             switch (alegere2)
             {
             case 1:
                studentName(registru,studentId);
                break;
             case 2:
                printDiscipline(registru);
                break;
             
             case 3:
                  std::cout << "Media : " << registru[studentId].medie << '\n';
                 break;
             case 4:
                  std::cout << registru[studentId].numAbsente << " absente \n";
                break;
             case 5:
                  std::cout << "Alege o anumita disciplina, dupa id \n";
                  std::cin >> disciplinID;
                  alegere3 = 1;
                  while (alegere3 != 0)
                  {
                    disciplinaMenu();
                    std::cin >> alegere3;
                    switch (alegere3)
                    {
                    case 1:
                        numeDiscipline(registru,studentId,disciplinID);
                        break;
                    case 2:
                        addMedie(registru,studentId,disciplinID);
                    break;

                    case 3:
                         printMedie(registru,studentId,disciplinID);
                    break;

                    case 4:
                        addAbsenta(registru,studentId,disciplinID);
                    break;

                    case 5:
                          printAbsente(registru,studentId,disciplinID);
                    break;
                    
                    default:
                        break;
                    }
                  }
                  
                break;
             default:
                break;
             }
          }
          
        break;
        
        default:
            break;
        }
    }
    
    

    
}
