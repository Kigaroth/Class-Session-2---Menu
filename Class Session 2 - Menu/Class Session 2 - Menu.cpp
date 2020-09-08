// Class Session 2 - Menu.cpp //

#include <iostream>
#include <string>

int option;

int main()
{
    int option = 0; //When initialized, option should be 0 until input is recieved from the user//

    //Header//
    std::cout << "\t\t\t\t\t Test Menu\n\n";

    //Choices presented//
    do
    {
        std::cout <<
            "Choices:\n"
            "\t1. Print name\n"
            "\t2. Print 'How are you?'\n"
            "\t3. Print age\n"
            "\t4. Exit the program\n"
            "Choose an option (1-4): ";
        std::cin >> option;

        switch (option) //checks what the user input value in 'option' and prints the correct choice//
        {
            case 1:
                std::cout << "1. Print name\n";
                    break;
            case 2:
                std::cout << "2. Print 'How are you?'\n";
                    break;
            case 3:
                std::cout << "3. Print age\n";
                    break;
            case 4:
                std::cout << "4. Exit the program\n";
                    break;
            default:
                std::cout << "Invalid input. Please pick a number from 1-4.\n";
        }
    } while (option < 4 && option > 0);
    return option;
    return 0;
}

