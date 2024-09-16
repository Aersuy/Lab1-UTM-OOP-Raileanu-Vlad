
#include "function.cpp"

int main()
{ 
    std::vector<Student> registru;
    int alegere = 1;

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
        
        default:
            break;
        }
    }
    
    

    
}
