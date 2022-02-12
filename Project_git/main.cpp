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

    std::cout << "---------------------------------------------\n";
}

//second menu for displaying department information
void worker_second_menu(std::string sort_by)
{
    std::cout   << "(0) Show administrative department " << sort_by << std::endl
                << "(1) Show driver department " << sort_by << std::endl
                << "(2) Show dispatch department " << sort_by << std::endl
                << "(3) Show the department of rolling stock repairmen " << sort_by << std::endl
                << "(4) Show the department of road repairmen " << sort_by << std::endl
                << "(5) Show checkout department " << sort_by << std::endl
                << "(6) Show warehouse department " << sort_by << std::endl
                << "(7) Show help desk department " << sort_by << std::endl
                << "(8) Show accounting department " << sort_by << std::endl
                << "\nYour choise: ";
}

//second menu for displaying brigades information
void brig_second_menu(std::string sort_by)
{
    std::cout   << "(0) Display drivers brigades " << sort_by << std::endl
                << "(1) Display dispatchers brigades " << sort_by << std::endl
                << "(2) Show repair brigades " << sort_by << std::endl
                << "(3) Show brigades of road repairmen " << sort_by << std::endl
                << "\nYour choise: ";
}

//menu for displaying information sorted by sex
void men_or_women_menu()
{
    std::cout   << "(0) Display men\n"
                << "(1) Display women\n"
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

    //delimiters for better look in the terminal
    std::string single_delimiter = "\n______________________________________________________________\n";
    std::string double_delimiter = "\n==============================================================\n";

    //the main cycle of the program
    Menu();
    while(choise != exit_the_prog)
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
                }
                else if(second_choise == all_employers)
                {
                    worker_second_menu("");
                    //show all directors and employees here (not sorted)
                }
                else if(second_choise == workers_by_dep)
                {
                    worker_second_menu("sorted by department");
                    //show all information about workers (sort by department)
                }
                else if(second_choise == workers_by_exp)
                {
                    worker_second_menu("sorted by experience");
                    //show all information about workers (sort by experience)
                }
                else if(second_choise == workers_by_sex)
                {
                    worker_second_menu("sorted by sex");
                    //show all information about workers (sort by sex)
                }
                else if(second_choise == workers_by_age)
                {
                    worker_second_menu("sorted by age");
                    //show all information about workers (sort by age)
                }
                else if(second_choise == workers_by_child)
                {
                    worker_second_menu("sorted by the presence of children");
                    //show all information about workers (sort by presence of children)
                }
                else if(second_choise == workers_by_num_child)
                {
                    worker_second_menu("sorted by number of children");
                    //show all information about workers (sort by number of children)
                }
                else if(second_choise == workers_by_salary)
                {
                    worker_second_menu("sorted by salary");
                    //show all information about workers (sort by salary)
                }
                else if(second_choise == directors)
                {
                    //show all information about all directors
                }
                else
                {
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                }
                else if(second_choise == all_brig)
                {
                    //show information about all brigades
                }
                else if(second_choise == brig_by_dep)
                {
                    //show information about brigades (sort by department)
                }
                else if(second_choise == brig_by_loc)
                {
                    //show information about brigades (sort by locomotives)
                }
                else if(second_choise == brig_by_age)
                {
                    //show information about brigades (sort by age)
                }
                else if(second_choise == brig_by_sum_salary)
                {
                    //show information about brigades (sort by summary salary)
                }
                else if(second_choise == brig_by_avar_salary)
                {
                    //show information about brigades (sort by avarage salary)
                }
                else
                {
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                }
                else if(second_choise == mexam_sex)
                {
                    //show information about driver's medical examination (sorted by sex)
                }
                else if(second_choise == mexam_age)
                {
                    //show information about driver's medical examination (sorted by age)
                }
                else if(second_choise == mexam_salary)
                {
                    //show information about driver's medical examination (sorted by salary)
                }
                else
                {
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case locomotives:
                //enum type to use the menu (for code readability)
                enum{menu_d, loc_stay, loc_comeback, loc_count_trips};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about the locomotive's stay at the station\n"
                            << "(2) Show locomotive come back time data\n"
                            << "(3) Show data on the number of trips of the locomotive\n"
                            << "Your choise: ";

                std::cin >> second_choise;;
                std::cout << single_delimiter;

                if(second_choise == menu_d)
                {
                    Menu();
                }
                else if(second_choise == loc_stay)
                {
                    //show information about the locomotive's stay at the station
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                            << "(4) Show locomotive inspection data (sorted by flights before overhaul)\n"
                            << "(5) Show locomotive inspection data (sorted by age)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_e)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case trains:
                //enum type to use the menu (for code readability)
                enum{menu_f, train_flight, train_f_duration, train_price, train_category};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about train (sorted by selected flight)\n"
                            << "(2) Show data about train (sorted by flight duration)\n"
                            << "(3) Show data about train (sorted by ticket price)\n"
                            << "(4) Show data about train (sorted by all categories)\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_f)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case cancelled_flights:
                //enum type to use the menu (for code readability)
                enum{menu_g, can_directions, can_routes};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data about canceled flights in a given direction\n"
                            << "(2) Show canceled flights on the specified route\n"
                            << "Your choise: ";
                
                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_g)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case delayed_flights:
                //enum type to use the menu (for code readability)
                enum{menu_h, flight_reason, flight_route, handedIn_tickets};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show flight delays (sorted by reason)\n"
                            << "(2) Show flight delays (sorted by specified route)\n"
                            << "(3) Show the number of tickets handed in during the delay\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout <<  single_delimiter;

                if(second_choise == menu_h)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case unredeemed_tickets:
                //enum type to use the menu (for code readability)
                enum{menu_l, unp_tick_flight, unp_tick_day, unp_tick_route};

                std::cout   << "Select the required data: \n"
                            << "(0) Return to the menu\n"
                            << "(1) Show data on unpurchased tickets on the specified flight\n"
                            << "(2) Show data on unpurchased tickets on the specified day\n"
                            << "(3) Show data on unpurchased tickets on the specified route\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_l)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            case handed_over_tickets:
                //enum type to use the menu (for code readability)
                enum{menu_m, ret_tick_flight, ret_tick_day, ret_tick_route};

                std::cout   << "Select the required data: "
                            << "(0) Return to the menu"
                            << "(1) Show the data of returned tickets on the specified flight"
                            << "(2) Show returned tickets details on the specified day\n"
                            << "(3) Show the data of returned tickets on the specified route\n"
                            << "Your choise: ";

                std::cin >> second_choise;
                std::cout << single_delimiter;

                if(second_choise == menu_m)
                {
                    Menu();
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
                    std::cout << "ERROR: Choose the correct option" << std::endl;
                    Menu();
                }

                Menu();
            break;

            /*WRITE HERE NAME & SURNAME*/
            case Creator_of_the_program:
                std::cout   << "====================================================================\n"
                            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                            << "University\n"
                            << "           Work made by student\n"
                            << "                       name surname\n"
                            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
                            << "====================================================================\n";

                Menu();
            break;
            
            default:
                std::cout << "ERROR: Choose the correct option" << std::endl;
            break;
        }
    }

    return 0;
}