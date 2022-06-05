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
#include "workers.h"

//Main menu and global variable for it
    int choise;
void Menu()
{
    std::cout   << std::endl
                << " _____________________________________________________________ " << std::endl
                << "|                        Mini database                        |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << " _____________________________________________________________ " << std::endl
                << "|                      Select an option:                      |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                    [0] Exit the program                     |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                 [1] Output of employee data                 |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                   [2] Output of crew data                   |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "| [3] Output of medical examination data of locomotive drivers|" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|              [4] Output of station locomotives              |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "| [5] Output of inspection data of locomotives of the station |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                 [6] Output of station trains                |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                [7] Output of canceled routes                |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|             [8] Output of data of detained routes           |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|              [9] Output of data on ticket sales             |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|              [10] Output of route category data             |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|                 [11] Output of passenger data               |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|          [12] Output of data of unredeemed tickets          |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|           [13] Output of data on returned tickets           |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << "|  [14] Display information about the creator of the program  |" << std::endl
                << "|_____________________________________________________________|" << std::endl
                << " _____________________________________________________________ " << std::endl
                << "                         Your choise:";

    std::cin >> choise;

    std::cout << "|_____________________________________________________________|" << std::endl << std::endl;
}

//second menu for displaying department information
void worker_second_menu(std::string sort_by)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| [1] Show administrative department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [2] Show drivers department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [3] Show dispatch department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [4] Show the department of rolling stock repair " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [5] Show the department of road repair " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [6] Show cash department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [7] Show warehouse department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [8] Show help desk department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [9] Show accounting department " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << " _____________________________________________________________" << std::endl
                << "                         Your choise:";
}

//second menu for displaying brigades information
void brig_second_menu(std::string sort_by)
{
    std::cout   << " _____________________________________________________________ " << std::endl
                << "| [1] Display drivers brigades " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [2] Show repair brigades " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| [3] Show brigades of road repairmen " << sort_by << std::endl
                << "|_____________________________________________________________" << std::endl
                << " _____________________________________________________________ " << std::endl
                << "                         Your choise:";
}

//menu for displaying information sorted by sex
void men_or_women_menu()
{
    std::cout   << " ______________________________________________________________ " << std::endl
                << "|                       [1] Display men                        |" << std::endl
                << "|______________________________________________________________|" << std::endl
                << "|                      [2] Display women                       |" << std::endl
                << "|______________________________________________________________|" << std::endl
                << " _____________________________________________________________ " << std::endl
                << "                         Your choise:";
}

int main()
{

    //enum type to use main menu (for code readability)
    enum {exit_the_prog, workers, brigades, medical_examination, locomotives, locomotive_inspection, trains,
            cancelled_flights, delayed_flights, tickets_sales, routes, passengers, unredeemed_tickets,
            handed_over_tickets, Creator_of_the_program};

    int second_choise;
    int third_choise;
    int fourth_choise;

    //Error message
    std::string errorM = "ERROR: Choose the correct option";

    //delimiters for better look in the terminal
    std::string single_delimiter = "|_____________________________________________________________|\n\n";

    //the main cycle of the program
    Menu();
    while(choise != exit_the_prog && choise <= Creator_of_the_program)
    {
        switch (choise)
        {
            //Display employee data
            case workers:

                //enum type to use the menu (for code readability)
                enum {menu_a, all_employers,  workers_by_dep, workers_by_exp,
                        workers_by_sex, workers_by_age, workers_by_child,
                        workers_by_num_child, workers_by_salary, directors};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|              [1] Display data of all employees              |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|       [2] Display workers' data sorted by departments       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|        [3] Display workers' data sorted by experience       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [4] Display workers' data sorted by sex           |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [5] Display workers' data sorted by age           |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "| [6] Display workers' data sorted by the presence of children|" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|    [7] Display workers' data sorted by number of children   |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|         [8] Display workers' data sorted by salary          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                  [9] Display directors data                 |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_a)
                {
                    Menu();
                    break;
                }
                else if(second_choise == all_employers)
                {
                    //outputting all employees
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                   ADMINISTRATION DEPARTMENT                 |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputAdmin(adminList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                      DRIVER DEPARTMENT                      |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputDriver(driverList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                      DISPATCH DEPARTMENT                    |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(dispatcherList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                ROLLING STOCK REPAIR DEPARTMENT              |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(rollStRepairmanList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                    ROAD REPAIR DEPARTMENT                   |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(roadRepairmanList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                        CASH DEPARTMENT                      |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(cashierList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                     WAREHOUSE DEPARTMENT                    |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(warehousemanList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                     HELP DESK DEPARTMENT                    |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(helperList);

                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                     ACCOUNTING DEPARTMENT                   |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(accounterList);

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_dep)
                {
                    //outputting all employees data sorted by department
                    worker_second_menu("sorted by department");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        outputAdmin(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        outputDriver(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        outputWorker(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        outputWorker(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        outputWorker(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        outputWorker(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        outputWorker(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        outputWorker(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        outputWorker(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_exp)
                {
                    //outputting employees data sorted by experience
                    worker_second_menu("sorted by experience");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;
                    
                    if(third_choise == 1)
                    {
                        sortAdminByExp(adminList);
                        outputAdmin(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        sortDriverByExp(driverList);
                        outputDriver(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        sortWorkerByExp(dispatcherList);
                        outputWorker(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        sortWorkerByExp(rollStRepairmanList);
                        outputWorker(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        sortWorkerByExp(roadRepairmanList);
                        outputWorker(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        sortWorkerByExp(cashierList);
                        outputWorker(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        sortWorkerByExp(warehousemanList);
                        outputWorker(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        sortWorkerByExp(helperList);
                        outputWorker(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        sortWorkerByExp(accounterList);
                        outputWorker(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_sex)
                {
                    //outputting all employees data sorted by sex
                    worker_second_menu("sorted by sex");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;
                    
                    if(third_choise == 1)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputAdminBySex(adminList, fourth_choise);
                    }
                    else if(third_choise == 2)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputDriverBySex(driverList, fourth_choise);
                    }
                    else if(third_choise == 3)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(dispatcherList, fourth_choise);
                    }
                    else if(third_choise == 4)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(rollStRepairmanList, fourth_choise);
                    }
                    else if(third_choise == 5)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(roadRepairmanList, fourth_choise);
                    }
                    else if(third_choise == 6)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(cashierList, fourth_choise);
                    }
                    else if(third_choise == 7)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(warehousemanList, fourth_choise);
                    }
                    else if(third_choise == 8)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(helperList, fourth_choise);
                    }
                    else if(third_choise == 9)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;
                        std::cout << single_delimiter;

                        outputWorkerBySex(accounterList, fourth_choise);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_age)
                {
                    //outputting all employees data sorted by age
                    worker_second_menu("sorted by age");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        sortAdminByAge(adminList);
                        outputAdmin(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        sortDriverByAge(driverList);
                        outputDriver(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        sortWorkerByAge(dispatcherList);
                        outputWorker(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        sortWorkerByAge(rollStRepairmanList);
                        outputWorker(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        sortWorkerByAge(roadRepairmanList);
                        outputWorker(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        sortWorkerByAge(cashierList);
                        outputWorker(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        sortWorkerByAge(warehousemanList);
                        outputWorker(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        sortWorkerByAge(helperList);
                        outputWorker(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        sortWorkerByAge(accounterList);
                        outputWorker(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_child)
                {
                    //outputting all employees data sorted by the presence of children
                    worker_second_menu("sorted by the presence of children");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        outputAdminByChild(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        outputDriverByChild(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        outputWorkerByChild(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        outputWorkerByChild(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        outputWorkerByChild(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        outputWorkerByChild(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        outputWorkerByChild(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        outputWorkerByChild(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        outputWorkerByChild(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_num_child)
                {
                    //outputting all employees data sorted by number of children
                    worker_second_menu("sorted by number of children");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        sortAdminByChildNum(adminList);
                        outputAdmin(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        sortDriverByChildNum(driverList);
                        outputDriver(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        sortWorkerByChildNum(dispatcherList);
                        outputWorker(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        sortWorkerByChildNum(rollStRepairmanList);
                        outputWorker(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        sortWorkerByChildNum(roadRepairmanList);
                        outputWorker(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        sortWorkerByChildNum(cashierList);
                        outputWorker(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        sortWorkerByChildNum(warehousemanList);
                        outputWorker(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        sortWorkerByChildNum(helperList);
                        outputWorker(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        sortWorkerByChildNum(accounterList);
                        outputWorker(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_salary)
                {
                    //outputting all employees data sorted by salary
                    worker_second_menu("sorted by salary");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        sortAdminBySalary(adminList);
                        outputAdmin(adminList);
                    }
                    else if(third_choise == 2)
                    {
                        sortDriverBySalary(driverList);
                        outputDriver(driverList);
                    }
                    else if(third_choise == 3)
                    {
                        sortWorkerBySalary(dispatcherList);
                        outputWorker(dispatcherList);
                    }
                    else if(third_choise == 4)
                    {
                        sortWorkerBySalary(rollStRepairmanList);
                        outputWorker(rollStRepairmanList);
                    }
                    else if(third_choise == 5)
                    {
                        sortWorkerBySalary(roadRepairmanList);
                        outputWorker(roadRepairmanList);
                    }
                    else if(third_choise == 6)
                    {
                        sortWorkerBySalary(cashierList);
                        outputWorker(cashierList);
                    }
                    else if(third_choise == 7)
                    {
                        sortWorkerBySalary(warehousemanList);
                        outputWorker(warehousemanList);
                    }
                    else if(third_choise == 8)
                    {
                        sortWorkerBySalary(helperList);
                        outputWorker(helperList);
                    }
                    else if(third_choise == 9)
                    {
                        sortWorkerBySalary(accounterList);
                        outputWorker(accounterList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == directors)
                {
                    //outputting all directors data
                    outputAdmin(adminList);

                    Menu();
                    break;
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case brigades:
                //enum type to use the menu (for code readability)
                enum {menu_b, all_brig, brig_by_dep, brig_by_loc,
                        brig_by_age, brig_by_sum_salary,
                        brig_by_avar_salary};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [1] Display brigade from all departments          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [2] Display brigade in chosen department          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|             [3] Display the locomotives' brigade            |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|              [4] Display brigade (sorted by age)            |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|        [5] Display brigade (sorted by summary salary)       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|        [6] Display brigade (sorted by avarage salary)       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";
                
                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_b)
                {
                    Menu();
                    break;
                }
                else if(second_choise == all_brig)
                {
                    //outputting crews of driver department
                     std::cout  << " _____________________________________________________________ " << std::endl
                                << "|                      DRIVER DEPARTMENT                      |" << std::endl
                                << "|_____________________________________________________________|" << std::endl
                                << "|                          First crew                         |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputDriver(firstDriverCrew);
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                          Second crew                        |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputDriver(secondDriverCrew);

                    //outputting crews of rolling stock repair department
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                ROLLING STOCK REPAIR DEPARTMENT              |" << std::endl
                                << "|_____________________________________________________________|" << std::endl
                                << "|                          First crew                         |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(firstRollStRepairmanCrew);
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                          Second crew                        |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(secondRollStRepairmanCrew);

                    //outputting crews of road repair department
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                    ROAD REPAIR DEPARTMENT                   |" << std::endl
                                << "|_____________________________________________________________|" << std::endl
                                << "|                          First crew                         |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(firstRoadRepairmanCrew);
                    std::cout   << " _____________________________________________________________ " << std::endl
                                << "|                          Second crew                        |" << std::endl
                                << "|_____________________________________________________________|" << std::endl;
                    outputWorker(secondRoadRepairmanCrew);
                    
                    Menu();
                    break;
                }
                else if(second_choise == brig_by_dep)
                {
                    brig_second_menu("sorted by department");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;
                    
                    if(third_choise == 1)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputDriver(firstDriverCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(secondRoadRepairmanCrew);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == brig_by_loc)
                {
                    //outputting crews sorted by locomotive
                    brig_second_menu("sorted by locomotive");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 First crew (locomotive #001)                |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputDriver(firstDriverCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 Second crew (locomotive #002)               |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 First crew (locomotive #001)                |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 Second crew (locomotive #002)               |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 First crew (locomotive #001)                |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                 Second crew (locomotive #002)               |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        outputWorker(secondRoadRepairmanCrew);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == brig_by_age)
                {
                    //outputting crews sorted by age
                    brig_second_menu("sorted by age");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;
                    
                    if(third_choise == 1)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortDriverByAge(firstDriverCrew);
                        outputDriver(firstDriverCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortDriverByAge(secondDriverCrew);
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortWorkerByAge(firstRollStRepairmanCrew);
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortWorkerByAge(secondRollStRepairmanCrew);
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          First crew                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortWorkerByAge(firstRoadRepairmanCrew);
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                          Second crew                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl;
                        sortWorkerByAge(secondRoadRepairmanCrew);
                        outputWorker(secondRoadRepairmanCrew);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == brig_by_sum_salary)
                {
                    //outputting crews sorted by sum of salary
                    brig_second_menu("sorted by sum of salary");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        if(sortDriverBySumSalary(firstDriverCrew) > sortDriverBySumSalary(secondDriverCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(firstDriverCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(secondDriverCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(secondDriverCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(firstDriverCrew);
                        }
                    }
                    else if(third_choise == 2)
                    {
                        if(sortWorkerBySumSalary(firstRollStRepairmanCrew) > sortWorkerBySumSalary(secondRollStRepairmanCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                        }
                    }
                    else if(third_choise == 3)
                    {
                        if(sortWorkerBySumSalary(firstRoadRepairmanCrew) > sortWorkerBySumSalary(secondRoadRepairmanCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                        }
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else if(second_choise == brig_by_avar_salary)
                {
                    //outputting crews sorted by average salary
                    brig_second_menu("sorted by average salary");
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        if(sortDriverByAvgSalary(firstDriverCrew) > sortDriverByAvgSalary(secondDriverCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(firstDriverCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(secondDriverCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(secondDriverCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputDriver(firstDriverCrew);
                        }
                    }
                    else if(third_choise == 2)
                    {
                        if(sortWorkerByAvgSalary(firstRollStRepairmanCrew) > sortWorkerByAvgSalary(secondRollStRepairmanCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                        }
                    }
                    else if(third_choise == 3)
                    {
                        if(sortWorkerByAvgSalary(firstRoadRepairmanCrew) > sortWorkerByAvgSalary(secondRoadRepairmanCrew))
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          Second crew                        |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                            std::cout   << " _____________________________________________________________ " << std::endl
                                        << "|                          First crew                         |" << std::endl
                                        << "|_____________________________________________________________|" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                        }
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                    Menu();
                    break;
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case medical_examination:
                //enum type to use the menu (for code readability)
                enum {menu_c, mexam_sex, mexam_age, mexam_salary};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [1] Show data about driver's medical examination       |" << std::endl
                            << "|                       (sorted by sex)                       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [2] Show data about driver's medical examination       |" << std::endl
                            << "|                       (sorted by age)                       |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [3] Show data about driver's medical examination       |" << std::endl
                            << "|                      (sorted by salary)                     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_c)
                {
                    Menu();
                    break;
                }
                else if(second_choise == mexam_sex)
                {
                    //outputting medial examination data sorted by sex
                    men_or_women_menu();
                    std::cin >> fourth_choise;
                    std::cout << single_delimiter;

                    outputDriverMedBySex(driverList, fourth_choise);
                }
                else if(second_choise == mexam_age)
                {
                    //outputting medial examination data sorted by age
                    sortDriverByAge(driverList);
                    outputDriverMedByAge(driverList);
                }
                else if(second_choise == mexam_salary)
                {
                    //outputting medial examination data sorted by salary
                    sortDriverBySalary(driverList);
                    outputDriverMedBySalary(driverList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case locomotives:
                //enum type to use the menu (for code readability)
                enum{menu_d, loc_stay, loc_comeback, loc_count_trips};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|       [1] Show data about the locomotives sorted by         |" << std::endl
                            << "|                   staying at the station                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [2] Show locomotives data sorted by come back time      |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|    [3] Show locomotives data sorted by number of routes     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_d)
                {
                    Menu();
                    break;
                }
                else if(second_choise == loc_stay)
                {
                    //outputting locomotives data sorted by staying on the station
                    sortLocByStaying(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == loc_comeback)
                {
                    //outputting locomotives data sorted by come back time
                    sortLocByComeBack(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == loc_count_trips)
                {
                    //outputting locomotives data sorted by number of routes
                    sortLocByNumOfRoutes(locomList);
                    outputLocomotive(locomList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case locomotive_inspection:
                //enum type to use the menu (for code readability)
                enum{menu_e, insp_by_time, insp_by_repair, insp_by_rep_count, insp_by_flights, insp_by_age};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "| [1] Show locomotive inspection data (sorted by time period) |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "| [2] Show locomotive inspection data (sorted by repair time) |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|             [3] Show locomotive inspection data             |" << std::endl
                            << "|                (sorted by number of repairs)                |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|             [4] Show locomotive inspection data             |" << std::endl
                            << "|             (sorted by routes before overhaul)              |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [5] Show locomotive inspection data (sorted by age)     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";


                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_e)
                {
                    Menu();
                    break;
                }
                else if(second_choise == insp_by_time)
                {
                    //outputting locomotives data sorted by examination time
                    outputLocByExamPeriod(locomList);
                }
                else if(second_choise == insp_by_repair)
                {
                    //outputting locomotives data sorted by examination time
                    sortLocByExamTime(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == insp_by_rep_count)
                {
                    //outputting locomotives data sorted by number of repairs
                    sortLocByRepairNum(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == insp_by_flights)
                {
                    //outputting locomotives data sorted by number of routes before overhaul
                    sortLocByNumOfRoutesBefore(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == insp_by_age)
                {
                    //outputting locomotives data sorted by age
                    sortLocByAge(locomList);
                    outputLocomotive(locomList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case trains:
                //enum type to use the menu (for code readability)
                enum{menu_f, train_flight, train_f_duration, train_price, train_category};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [1] Show data about train (sorted by selected route)    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [2] Show data about train (sorted by route duration)    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [3] Show data about train (sorted by ticket price)     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [4] Show data about train (sorted by all categories)    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_f)
                {
                    Menu();
                    break;
                }
                else if(second_choise == train_flight)
                {
                    //outputting trains data sorted by route

                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Kyiv-Lviv                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                      [2] Uzhhorod-Lviv                      |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };
                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        outputFirstTrain(locomList, vagonList);
                    }
                    else if(third_choise == 2)
                    {
                        outputSecondTrain(locomList, vagonList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }
                }
                else if(second_choise == train_f_duration)
                {
                    //outputting trains data sorted by route duration
                    outputTrainsByRouteDuration(locomList, vagonList);
                }
                else if(second_choise == train_price)
                {
                    //outputting trains data sorted by ticket price
                    outputTrainsByTicketPrice(locomList, vagonList, ticketList);
                }
                else if(second_choise == train_category)
                {
                    //outputting trains data sorted by category

                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Passenger                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                          [2] Cargo                          |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };
                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        outputTrainByPassCategory(locomList, vagonList);
                    }
                    else if(third_choise == 2)
                    {
                        outputTrainByCargoCategory(locomList, vagonList);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }

                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case cancelled_flights:
                //enum type to use the menu (for code readability)
                enum{menu_g, can_route,};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|    [1] Show data about canceled routes in a given route     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";
                
                std::cin >> second_choise;
                std::cout << single_delimiter;

                //outputting data of cancelled routes
                if(second_choise == menu_g)
                {
                    Menu();
                    break;
                }
                else if(second_choise == can_route)
                {
                    outputRouteByStatus(locomList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case delayed_flights:
                //enum type to use the menu (for code readability)
                enum{menu_h, flight_reason, flight_route, handedIn_tickets};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [1] Show route delays (sorted by reason)          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [2] Show route delays (sorted by specified route)      |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|  [3] Show the number of tickets handed in during the delay  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout <<  single_delimiter;

                //outputting data of delayed routes
                if(second_choise == menu_h)
                {
                    Menu();
                    break;
                }
                else if(second_choise == flight_reason)
                {
                    outputRouteByReason(locomList);
                }
                else if(second_choise == flight_route)
                {
                    outputRouteByHandedTick(locomList);
                }
                else if(second_choise == handedIn_tickets)
                {
                    outputRouteByHandedTick(locomList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case tickets_sales:
                //enum type to use the menu (for code readability)
                enum{menu_i, tickets_period, tickets_route_duration,
                        tickets_by_price};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|           [1] Show the average number of tickets            |" << std::endl
                            << "|              sold over a given period of time               |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|         [2] Show the average number of tickets sold         |" << std::endl
                            << "|                  (sorted by route duration)                 |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|         [3] Show the average number of tickets sold         |" << std::endl
                            << "|                   (sorted by ticket price)                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                //outputting data of tickets sold
                if(second_choise == menu_i)
                {
                    Menu();
                    break;
                }
                else if(second_choise == tickets_period)
                {
                    outputTickBySold(locomList);
                }
                else if(second_choise == tickets_route_duration)
                {
                    outputTickByDuration(locomList);
                }
                else if(second_choise == tickets_by_price)
                {
                    outputTickByPrice(locomList, ticketList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case routes:
                //enum type to use the menu (for code readability)
                enum{menu_j, list_route, list_category};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                    [0] Return to the menu                   |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [1] Show list of routes of the specified category      |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|         [2] Show list of categories along the routes        |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                //outputting data of categories
                if(second_choise == menu_j)
                {
                    Menu();
                    break;
                }
                else if(second_choise == list_route)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Passenger                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                          [2] Cargo                          |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };
                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    if(third_choise == 1)
                    {
                        outputRouteByCategory(locomList, third_choise);
                    }
                    else if(third_choise == 2)
                    {
                        outputRouteByCategory(locomList, third_choise);
                    }
                    else
                    {
                        std::cout << errorM << std::endl;
                    }
                }
                else if(second_choise == list_category)
                {
                    outputCategoryByRoutes(locomList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case passengers:
                //enum type to use the menu (for code readability)
                enum{menu_k, pass_flight, pass_dep_day, pass_dep_abr,
                        pass_luggage, pass_sex, pass_age};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [1] Show passenger data (sorted by specified route)     |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|      [2] Show passenger data (sorted by departure day)      |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|   [3] Show passenger data (sorted by departure abroad day)  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [4] Show passenger data                   |" << std::endl
                            << "|  (sorted by delivery of things to the luggage compartment)  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|            [5] Show passenger data (sorted by sex)          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|            [6] Show passenger data (sorted by age)          |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                //outputting data of passengers
                if(second_choise == menu_k)
                {
                    Menu();
                    break;
                }
                else if(second_choise == pass_flight)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Kyiv-Lviv                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                      [2] Uzhhorod-Lviv                      |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };

                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    outputPassByRoute(passengerList, third_choise);
                }
                else if(second_choise == pass_dep_day)
                {
                    sortPassByDep(passengerList);
                    outputPassenger(passengerList);
                }
                else if(second_choise == pass_dep_abr)
                {
                    sortPassByDepAbr(passengerList);
                    outputPassenger(passengerList);
                }
                else if(second_choise == pass_luggage)
                {
                    outputPassByLuggage(passengerList);
                }
                else if(second_choise == pass_sex)
                {   
                    men_or_women_menu();
                    std::cin >> third_choise;
                    std::cout << single_delimiter;

                    outputPassBySex(passengerList, third_choise);
                }
                else if(second_choise == pass_age)
                {
                    sortPassByAge(passengerList);
                    outputPassenger(passengerList);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case unredeemed_tickets:
                //enum type to use the menu (for code readability)
                enum{menu_l, unp_tick_flight, unp_tick_day};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "| [1] Show data on unpurchased tickets on the specified route |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|     [2] Show data on unpurchased tickets sorted by day      |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_l)
                {
                    Menu();
                    break;
                }
                else if(second_choise == unp_tick_flight)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Kyiv-Lviv                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                      [2] Uzhhorod-Lviv                      |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };

                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    outputUnpTickByRoute(locomList, third_choise);
                }
                else if(second_choise == unp_tick_day)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] 20.05.22                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                        [2] 22.05.22                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };

                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;
                    
                    outputUnpTickByDate(locomList, third_choise);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case handed_over_tickets:
                //enum type to use the menu (for code readability)
                enum{menu_m, ret_tick_flight, ret_tick_day};

                std::cout   << " _____________________________________________________________ " << std::endl
                            << "|                  Select the required data:                  |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|                   [0] Return to the menu                    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|[1] Show the data of returned tickets on the specified route |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << "|   [2] Show returned tickets details on the specified day    |" << std::endl
                            << "|_____________________________________________________________|" << std::endl
                            << " _____________________________________________________________ " << std::endl
                            << "                         Your choise:";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_m)
                {
                    Menu();
                    break;
                }
                else if(second_choise == ret_tick_flight)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] Kyiv-Lviv                        |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                      [2] Uzhhorod-Lviv                      |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };

                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    outputHandOverTickByRoute(locomList, third_choise);
                }
                else if(second_choise == ret_tick_day)
                {
                    //lambda function for outputting a part of the menu
                    auto route_menu = []()
                    {
                        std::cout   << " _____________________________________________________________ " << std::endl
                                    << "|                        [1] 20.05.22                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << "|                        [2] 22.05.22                         |" << std::endl
                                    << "|_____________________________________________________________|" << std::endl
                                    << " _____________________________________________________________ " << std::endl
                                    << "                         Your choise:";
                    };

                    route_menu();
                    std::cin >> third_choise;
                    std::cout <<  single_delimiter;

                    outputHandedOverTickByDate(locomList, third_choise);
                }
                else
                {
                    std::cout << errorM << std::endl;
                    Menu();
                    break;
                }

                Menu();
            break;

            case Creator_of_the_program:
                // std::cout   << "====================================================================\n"
                //             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                //             << "University\n"
                //             << "           Work made by student\n"
                //             << "                       name surname\n"
                //             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                //             << "====================================================================\n";

                std::cout   << "====================================================================\n"
                            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                            << "    _____________________________________________________________\n"
                            << "   |  ---> Creator of this program: git-user-cpp (m!haly4) <---  |\n"
                            << "   |_____________________________________________________________|\n"
                            << "   |       ---> Link: https://github.com/git-user-cpp <---       |\n"
                            << "   |_____________________________________________________________|\n\n"
                            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                            << "====================================================================\n";

                Menu();
            break;
            
            default:
                std::cout << errorM << std::endl;
            break;
        }
    }

    std::cout   << " _____________________________________________________________ " << std::endl
                << "|                   The program is stopped                    |" << std::endl
                << "|_____________________________________________________________|" << std::endl;

    return 0;
}