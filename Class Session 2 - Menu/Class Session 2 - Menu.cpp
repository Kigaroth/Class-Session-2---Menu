// Class Session 2 - Menu.cpp //

#include <iostream>
#include <string>

int answer;

int main()
{
    //Header//
    std::cout << "\t\t\t\t\t Test Menu";

    //Choices presented//
    do
    {
        switch (answer)
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
    } while (answer <= 0 || answer > 3);
    return answer;
}

