/*
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "data.h"

 //Main menu and global variable for it
    int choise;
void Menu()
{
    std::cout << "---------------------------------------------\n";

    std::cout << "Select an option:" << std::endl;

    std::cout << "(0) Exit the program" << std::endl
     << "(1) Output of employee data" << std::endl
     << "(2) Output of crew data" << std::endl
     << "(3) Output of medical examination data of locomotive drivers" << std::endl
     << "(4) Output of station locomotives" << std::endl
     << "(5) Output of inspection data of locomotives of the station" << std::endl
     << "(6) Output of station trains" << std::endl
     << "(7) Output of canceled flights" << std::endl
     << "(8) Output of data of detained flights" << std::endl
     << "(9) Output of data on ticket sales" << std::endl
     << "(10) Output of route category data" << std::endl
     << "(11) Output of passenger data" << std::endl
     << "(12) Output of data of unredeemed tickets" << std::endl
     << "(13) Output of data on returned tickets" << std::endl
     << "(14) Display information about the creator of the program" << std::endl
     << "Your choise: ";

    std::cin >> choise;

    std::cout << "---------------------------------------------\n";
}

int main()
{

    //enum type to use main menu (for code readability)
    enum {exit_the_prog, workers, brigades, medical_examination, locomotives, locomotive_inspection, trains,
            cancelled_flights, delayed_flights, tickets_sales, routes, passengers, unredeemed_tickets,
            handed_over_tickets, Creator_of_the_program};

    int second_choise;

    //delimiters for better look in the terminal
    std::string single_delimeter = "______________________________________________________________\n";

    //the main cycle of the program
    Menu();
    while(choise != exit_the_prog)
    {
        switch (choise)
        {
            //Display employee data
            case workers:

                //enum type to use the menu (for code readability)
                enum {menu, all_employers,  workers_by_dep, workers_by_exp,
                        workers_by_sex, workers_by_age, workers_by_child,
                        workers_by_num_child, workers_by_salary, directors};

                std::cout << "Select the required data: " << std::endl;
                    std::cout << "(0) Return to the menu" << std::endl;
                    std::cout << "(1) Display data of all employees\n";
                    std::cout << "(2) Display workers' data sorted by departments\n";
                    std::cout << "(3) Display workers' data sorted by experience\n";
                    std::cout << "(4) Display workers' data sorted by sex\n";
                    std::cout << "(5) Display workers' data sorted by age\n";
                    std::cout << "(6) Display workers' data sorted by the presence of children\n";
                    std::cout << "(7) Display workers' data sorted by number of children\n";
                    std::cout << "(8) Display workers' data sorted by salary\n";
                    std::cout << "(9) Display directors data\n\n";
                    std::cout << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimeter;

                if(second_choise == menu)
                {
                    Menu();
                }

            break;

            case brigades:
                //data about brigades
            break;

            case medical_examination:
                //data about medical_examination
            break;

            case locomotives:
                //data about locomotives
            break;

            case locomotive_inspection:
                //data about locomotive_inspection
            break;

            case trains:
                //data about trains
            break;

            case cancelled_flights:
                //data about cancelled_flights
            break;

            case delayed_flights:
                //data about delayed_flights
            break;

            case tickets_sales:
                //data about tickets_sales
            break;

            case routes:
                //data about routes
            break;

            case passengers:
                //data about passengers
            break;

            case unredeemed_tickets:
                //data about unredeemed_tickets
            break;

            case handed_over_tickets:
                //data about handed_over_tickets
            break;

            case Creator_of_the_program:
                //data about Creator_of_the_program
            break;
            
            default:
                std::cout << "ERROR: Choose the correct option" << std::endl;
            break;
        }
    }

    return 0;
}