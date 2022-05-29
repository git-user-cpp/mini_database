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
    std::cout << "Select an option:" << std::endl;

    std::cout   << "(0) Exit the program" << std::endl
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

    std::cout << "--------------------------------------------------------------\n";
}

//second menu for displaying department information
void worker_second_menu(std::string sort_by)
{
    std::cout   << "(1) Show administrative department " << sort_by << std::endl
                << "(2) Show drivers department " << sort_by << std::endl
                << "(3) Show dispatch department " << sort_by << std::endl
                << "(4) Show the department of rolling stock repair " << sort_by << std::endl
                << "(5) Show the department of road repair " << sort_by << std::endl
                << "(6) Show cash department " << sort_by << std::endl
                << "(7) Show warehouse department " << sort_by << std::endl
                << "(8) Show help desk department " << sort_by << std::endl
                << "(9) Show accounting department " << sort_by << std::endl
                << "\nYour choise: ";
}

//second menu for displaying brigades information
void brig_second_menu(std::string sort_by)
{
    std::cout   << "(1) Display drivers brigades " << sort_by << std::endl
                << "(2) Show repair brigades " << sort_by << std::endl
                << "(3) Show brigades of road repairmen " << sort_by << std::endl
                << "\nYour choise: ";
}

//menu for displaying information sorted by sex
void men_or_women_menu()
{
    std::cout   << "(1) Display men\n"
                << "(2) Display women\n"
                << "\nYour choise: ";
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
    std::string single_delimiter = "\n______________________________________________________________\n";
    std::string double_delimiter = "\n==============================================================\n";

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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Display data of all employees\n"
                            << "(2) Display workers' data sorted by departments\n"
                            << "(3) Display workers' data sorted by experience\n"
                            << "(4) Display workers' data sorted by sex\n"
                            << "(5) Display workers' data sorted by age\n"
                            << "(6) Display workers' data sorted by the presence of children\n"
                            << "(7) Display workers' data sorted by number of children\n"
                            << "(8) Display workers' data sorted by salary\n"
                            << "(9) Display directors data\n\n"
                            << "Your choise: ";

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
                    std::cout   << double_delimiter
                                << "ADMINISTRATION DEPARTMENT" << std::endl;
                    outputAdmin(adminList);

                    std::cout   << double_delimiter
                                << "DRIVER DEPARTMENT" << std::endl;
                    outputDriver(driverList);

                    std::cout   << double_delimiter
                                << "DISPATCH DEPARTMENT" << std::endl;
                    outputWorker(dispatcherList);

                    std::cout   << double_delimiter
                                << "ROLLING STOCK REPAIR DEPARTMENT" << std::endl;
                    outputWorker(rollStRepairmanList);

                    std::cout   << double_delimiter
                                << "ROAD REPAIR DEPARTMENT" << std::endl;
                    outputWorker(roadRepairmanList);

                    std::cout   << double_delimiter
                                << "CASH DEPARTMENT" << std::endl;
                    outputWorker(cashierList);

                    std::cout   << double_delimiter
                                << "WAREHOUSE DEPARTMENT" << std::endl;
                    outputWorker(warehousemanList);

                    std::cout   << double_delimiter
                                << "HELP DESK DEPARTMENT" << std::endl;
                    outputWorker(helperList);

                    std::cout   << double_delimiter
                                << "ACCOUNTING DEPARTMENT" << std::endl;
                    outputWorker(accounterList);

                    Menu();
                    break;
                }
                else if(second_choise == workers_by_dep)
                {
                    //outputting all employees data sorted by department
                    worker_second_menu("sorted by department");
                    std::cin >> third_choise;

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
                    
                    if(third_choise == 1)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputAdminBySex(adminList, fourth_choise);
                    }
                    else if(third_choise == 2)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputDriverBySex(driverList, fourth_choise);
                    }
                    else if(third_choise == 3)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(dispatcherList, fourth_choise);
                    }
                    else if(third_choise == 4)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(rollStRepairmanList, fourth_choise);
                    }
                    else if(third_choise == 5)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(roadRepairmanList, fourth_choise);
                    }
                    else if(third_choise == 6)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(cashierList, fourth_choise);
                    }
                    else if(third_choise == 7)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(warehousemanList, fourth_choise);
                    }
                    else if(third_choise == 8)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

                        outputWorkerBySex(helperList, fourth_choise);
                    }
                    else if(third_choise == 9)
                    {
                        men_or_women_menu();
                        std::cin >> fourth_choise;

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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Display brigade from all departments\n"
                            << "(2) Display brigade in chosen department\n"
                            << "(3) Display the locomotives' brigade\n"
                            << "(4) Display brigade (sorted by age)\n"
                            << "(5) Display brigade (sorted by summary salary)\n"
                            << "(6) Display brigade (sorted by avarage salary)\n"
                            << "Your choise: ";
                
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
                    std::cout   << double_delimiter
                                << "DRIVER DEPARTMENT" << std::endl
                                << "First crew" << std::endl;
                    outputDriver(firstDriverCrew);
                    std::cout   << single_delimiter
                                << "Second crew" << std::endl;
                    outputDriver(secondDriverCrew);

                    //outputting crews of rolling stock repair department
                    std::cout   << double_delimiter
                                << "ROLLING STOCK REPAIR DEPARTMENT" << std::endl
                                << "First crew" << std::endl;
                    outputWorker(firstRollStRepairmanCrew);
                    std::cout   << single_delimiter
                                << "Second crew" << std::endl;
                    outputWorker(secondRollStRepairmanCrew);

                    //outputting crews of road repair department
                    std::cout   << double_delimiter
                                << "ROAD REPAIR DEPARTMENT" << std::endl
                                << "First crew" << std::endl;
                    outputWorker(firstRoadRepairmanCrew);
                    std::cout   << single_delimiter
                                << "Second crew" << std::endl;
                    outputWorker(secondRoadRepairmanCrew);
                    
                    Menu();
                    break;
                }
                else if(second_choise == brig_by_dep)
                {
                    brig_second_menu("sorted by department");
                    std::cin >> third_choise;
                    
                    if(third_choise == 1)
                    {
                        std::cout   << "First crew" << std::endl;
                        outputDriver(firstDriverCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << "First crew" << std::endl;
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << "First crew" << std::endl;
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
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

                    if(third_choise == 1)
                    {
                        std::cout   << "First crew (locomotive #001)" << std::endl;
                        outputDriver(firstDriverCrew);
                        std::cout   << single_delimiter
                                    << "Second crew (locomotive #002)" << std::endl;
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << "First crew (locomotive #001)" << std::endl;
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew (locomotive #002)" << std::endl;
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << "First crew (locomotive #001)" << std::endl;
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew (locomotive #002)" << std::endl;
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
                    
                    if(third_choise == 1)
                    {
                        std::cout   << "First crew" << std::endl;
                        sortDriverByAge(firstDriverCrew);
                        outputDriver(firstDriverCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
                        sortDriverByAge(secondDriverCrew);
                        outputDriver(secondDriverCrew);
                    }
                    else if(third_choise == 2)
                    {
                        std::cout   << "First crew" << std::endl;
                        sortWorkerByAge(firstRollStRepairmanCrew);
                        outputWorker(firstRollStRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
                        sortWorkerByAge(secondRollStRepairmanCrew);
                        outputWorker(secondRollStRepairmanCrew);
                    }
                    else if(third_choise == 3)
                    {
                        std::cout   << "First crew" << std::endl;
                        sortWorkerByAge(firstRoadRepairmanCrew);
                        outputWorker(firstRoadRepairmanCrew);
                        std::cout   << single_delimiter
                                    << "Second crew" << std::endl;
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

                    if(third_choise == 1)
                    {
                        if(sortDriverBySumSalary(firstDriverCrew) > sortDriverBySumSalary(secondDriverCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputDriver(firstDriverCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputDriver(secondDriverCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputDriver(secondDriverCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
                            outputDriver(firstDriverCrew);
                        }
                    }
                    else if(third_choise == 2)
                    {
                        if(sortWorkerBySumSalary(firstRollStRepairmanCrew) > sortWorkerBySumSalary(secondRollStRepairmanCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                        }
                    }
                    else if(third_choise == 3)
                    {
                        if(sortWorkerBySumSalary(firstRoadRepairmanCrew) > sortWorkerBySumSalary(secondRoadRepairmanCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
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

                    if(third_choise == 1)
                    {
                        if(sortDriverByAvgSalary(firstDriverCrew) > sortDriverByAvgSalary(secondDriverCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputDriver(firstDriverCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputDriver(secondDriverCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputDriver(secondDriverCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
                            outputDriver(firstDriverCrew);
                        }
                    }
                    else if(third_choise == 2)
                    {
                        if(sortWorkerByAvgSalary(firstRollStRepairmanCrew) > sortWorkerByAvgSalary(secondRollStRepairmanCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputWorker(secondRollStRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
                            outputWorker(firstRollStRepairmanCrew);
                        }
                    }
                    else if(third_choise == 3)
                    {
                        if(sortWorkerByAvgSalary(firstRoadRepairmanCrew) > sortWorkerByAvgSalary(secondRoadRepairmanCrew))
                        {
                            std::cout   << "First crew" << std::endl;
                            outputWorker(firstRoadRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "Second crew" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                        }
                        else
                        {
                            std::cout   << "Second crew" << std::endl;
                            outputWorker(secondRoadRepairmanCrew);
                            std::cout   << single_delimiter
                                        << "First crew" << std::endl;
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about driver's medical examination (sorted by sex)\n"
                            << "(2) Show data about driver's medical examination (sorted by age)\n"
                            << "(3) Show data about driver's medical examination (sorted by salary)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_c)
                {
                    Menu();
                    break;
                }
                else if(second_choise == mexam_sex)
                {
                    men_or_women_menu();
                    std::cin >> fourth_choise;

                    outputDriverMedBySex(driverList, fourth_choise);
                }
                else if(second_choise == mexam_age)
                {
                    sortDriverByAge(driverList);
                    outputDriverMedByAge(driverList);
                }
                else if(second_choise == mexam_salary)
                {
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about the locomotives sorted by staying at the station\n"
                            << "(2) Show locomotives data sorted by come back time\n"
                            << "(3) Show locomotives data sorted by number of routes\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_d)
                {
                    Menu();
                    break;
                }
                else if(second_choise == loc_stay)
                {
                    sortLocByStaying(locomList);
                    outputLocomotive(locomList);
                }
                else if(second_choise == loc_comeback)
                {
                    //show information about locomotive come back time data
                }
                else if(second_choise == loc_count_trips)
                {
                    //show information about the number of trips of the locomotive
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show locomotive inspection data (sorted by time period)\n"
                            << "(2) Show locomotive inspection data (sorted by repair time)\n"
                            << "(3) Show data on the number of repairs of the locomotive\n"
                            << "(4) Show locomotive inspection data (sorted by routes before overhaul)\n"
                            << "(5) Show locomotive inspection data (sorted by age)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_e)
                {
                    Menu();
                    break;
                }
                else if(second_choise == insp_by_time)
                {
                    //show information about locomotive inspection data (sorted by time period)
                }
                else if(second_choise == insp_by_repair)
                {
                    //show information about locomotive inspection data (sorted by repair time)
                }
                else if(second_choise == insp_by_rep_count)
                {
                    //show information about the number of repairs of the locomotive
                }
                else if(second_choise == insp_by_flights)
                {
                    //show information about locomotive inspection data (sorted by flights before overhaul)
                }
                else if(second_choise == insp_by_age)
                {
                    //show information about locomotive inspection data (sorted by age)
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about train (sorted by selected route)\n"
                            << "(2) Show data about train (sorted by route duration)\n"
                            << "(3) Show data about train (sorted by ticket price)\n"
                            << "(4) Show data about train (sorted by all categories)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_f)
                {
                    Menu();
                    break;
                }
                else if(second_choise == train_flight)
                {
                    //show information about train (sorted by selected flight)
                }
                else if(second_choise == train_f_duration)
                {
                    //show information about train (sorted by flight duration)
                }
                else if(second_choise == train_price)
                {
                    //show information about train (sorted by ticket price)
                }
                else if(second_choise == train_category)
                {
                    //show information about train (sorted by all categories)
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
                enum{menu_g, can_directions, can_routes};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about canceled routes in a given direction\n"
                            << "(2) Show canceled routes on the specified route\n"
                            << "Your choise: ";
                
                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_g)
                {
                    Menu();
                    break;
                }
                else if(second_choise == can_directions)
                {
                    //show information about canceled flights in a given direction
                }
                else if(second_choise == can_routes)
                {
                    //show information about canceled flights on the specified route
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show route delays (sorted by reason)\n"
                            << "(2) Show route delays (sorted by specified route)\n"
                            << "(3) Show the number of tickets handed in during the delay\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout <<  single_delimiter;

                if(second_choise == menu_h)
                {
                    Menu();
                    break;
                }
                else if(second_choise == flight_reason)
                {
                    //show information about flight delays (sorted by reason)
                }
                else if(second_choise == flight_route)
                {
                    //show information about flight delays (sorted by specified route)
                }
                else if(second_choise == handedIn_tickets)
                {
                    //show information about the number of tickets handed in during the delay
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
                enum{menu_i, tickets_period, tickets_per_route, tickets_route_duration,
                        tickets_by_price};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show the average number of tickets sold over a given period of time\n"
                            << "(2) Show the average number of tickets sold per route\n"
                            << "(3) Show the average number of tickets sold by route duration\n"
                            << "(4) Show the average number of tickets sold (sorted by ticket price)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_i)
                {
                    Menu();
                    break;
                }
                else if(second_choise == tickets_period)
                {
                    //show information about the average number of tickets sold over a given period of time
                }
                else if(second_choise == tickets_per_route)
                {
                    //show information about the average number of tickets sold per route
                }
                else if(second_choise == tickets_route_duration)
                {
                    //show information about the average number of tickets sold by route duration
                }
                else if(second_choise == tickets_by_price)
                {
                    //show information about the average number of tickets sold (sorted by ticket price)
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show list of routes of the specified category\n"
                            << "(2) Show list of categories along the specified route\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_j)
                {
                    Menu();
                    break;
                }
                else if(second_choise == list_route)
                {
                    //show information about routes of the specified category
                }
                else if(second_choise == list_category)
                {
                    //show information about categories along the specified route
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

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show passenger data (sorted by specified flight)\n"
                            << "(2) Show passenger data (sorted by departure on the specified day)\n"
                            << "(3) Show passenger data (sorted by departure abroad on the specified day)\n"
                            << "(4) Show passenger data (sorted by delivery of things to the luggage compartment)\n"
                            << "(5) Show passenger data (sorted by sex)\n"
                            << "(6) Show passenger data (sorted by age)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_k)
                {
                    Menu();
                    break;
                }
                else if(second_choise == pass_flight)
                {
                    //show information about passenger data (sorted by specified flight)
                }
                else if(second_choise == pass_dep_day)
                {
                    //show information about passenger data (sorted by departure on the specified day)
                }
                else if(second_choise == pass_dep_abr)
                {
                    //show information about passenger data (sorted by departure abroad on the specified day)
                }
                else if(second_choise == pass_luggage)
                {
                    //show information about passenger data (sorted by delivery of things to the luggage compartment)
                }
                else if(second_choise == pass_sex)
                {
                    //show information about passenger data (sorted by sex)
                }
                else if(second_choise == pass_age)
                {
                    //show information about passenger data (sorted by age)
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
                enum{menu_l, unp_tick_flight, unp_tick_day, unp_tick_route};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data on unpurchased tickets on the specified route\n"
                            << "(2) Show data on unpurchased tickets on the specified day\n"
                            << "(3) Show data on unpurchased tickets on the specified route\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_l)
                {
                    Menu();
                    break;
                }
                else if(second_choise == unp_tick_flight)
                {
                    //show information about unpurchased tickets on the specified flight
                }
                else if(second_choise == unp_tick_day)
                {
                    //show information about unpurchased tickets on the specified day
                }
                else if(second_choise == unp_tick_route)
                {
                    //show information about unpurchased tickets on the specified route
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
                enum{menu_m, ret_tick_flight, ret_tick_day, ret_tick_route};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show the data of returned tickets on the specified route\n"
                            << "(2) Show returned tickets details on the specified day\n"
                            << "(3) Show the data of returned tickets on the specified route\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_m)
                {
                    Menu();
                    break;
                }
                else if(second_choise == ret_tick_flight)
                {
                    //show information about returned tickets on the specified flight
                }
                else if(second_choise == ret_tick_day)
                {
                    //show information about returned tickets details on the specified day
                }
                else if(second_choise == ret_tick_route)
                {
                    //show information about returned tickets on the specified route
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
                            << "      ---> Creator of this program: git-user-cpp (m!haly4) <---     \n"
                            << "           ---> Link: https://github.com/git-user-cpp <---          \n"
                            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                            << "====================================================================\n";

                Menu();
            break;
            
            default:
                std::cout << errorM << std::endl;
            break;
        }
    }

    std::cout << "The program is stopped" << std::endl;

    return 0;
}