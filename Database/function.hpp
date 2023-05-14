/*
MIT License

Copyright (c) 2022 Andrew Kushyk

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

#pragma once
#include "data.hpp"


//functions for outputting info
void outputAdmin(std::vector<Administration> &vec);
void outputDriver(std::vector<Rolling_stock_driver> &vec);
void outputWorker(std::vector<Worker> &vec);
void outputLocomotive(std::vector<Locomotive> &vec);
void outputVagon(std::vector<Vagon> &vec);
void outputPassenger(std::vector<Passenger> &vec);


//ADMINISTRATION CLASS

//function for sorting data of "Administration" class by experience
void sortAdminByExp(std::vector<Administration> &vec);

//function for sorting data of "Administration" class by sex
void outputAdminBySex(std::vector<Administration> &vec, int sex);

//function for sorting data of "Administration" class by age
void sortAdminByAge(std::vector<Administration> &vec);

//function for sorting data of "Administration" class by the presence of child
void outputAdminByChild(std::vector<Administration> &vec);

//function for sorting data of "Administration" class by number of children
void sortAdminByChildNum(std::vector<Administration> &vec);

//function for sorting data of "Administration" class by salary
void sortAdminBySalary(std::vector<Administration> &vec);


//DRIVER CLASS

//function for sorting data of "Rolling_stock_driver" class by experience
void sortDriverByExp(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by sex
void outputDriverBySex(std::vector<Rolling_stock_driver> &vec, int sex);

//function for sorting data of "Rolling_stock_driver" class by age
void sortDriverByAge(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by the presence of child
void outputDriverByChild(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by number of children
void sortDriverByChildNum(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by salary
void sortDriverBySalary(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by sum of salary
double sortDriverBySumSalary(std::vector<Rolling_stock_driver> &vec);

//function for sorting data of "Rolling_stock_driver" class by avg salary
double sortDriverByAvgSalary(std::vector<Rolling_stock_driver> &vec);

//function for sorting medical examination data of "Rolling_stock_driver" class by sex
void outputDriverMedBySex(std::vector<Rolling_stock_driver> &vec, int sex);

//function for sorting medical examination data of "Rolling_stock_driver" class by age
void outputDriverMedByAge(std::vector<Rolling_stock_driver> &vec);

//function for sorting medical examination data of "Rolling_stock_driver" class by salary
void outputDriverMedBySalary(std::vector<Rolling_stock_driver> &vec);


//WORKER CLASS

//function for sorting data of "Worker" class by experience
void sortWorkerByExp(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by sex
void outputWorkerBySex(std::vector<Worker> &vec, int sex);

//function for sorting data of "Worker" class by age
void sortWorkerByAge(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by the presence of child
void outputWorkerByChild(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by number of children
void sortWorkerByChildNum(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by salary
void sortWorkerBySalary(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by sum of salary
double sortWorkerBySumSalary(std::vector<Worker> &vec);

//function for sorting data of "Worker" class by avg salary
double sortWorkerByAvgSalary(std::vector<Worker> &vec);


//TRAIN

//outputting the first train
void outputFirstTrain(std::vector<Locomotive> &vec, std::vector<Vagon> &vag);

//outputting the second train
void outputSecondTrain(std::vector<Locomotive> &vec, std::vector<Vagon> &vag);

//function for sorting data of trains by route duration
void outputTrainsByRouteDuration(std::vector<Locomotive> &vec, std::vector<Vagon> &vag);

//function for sorting data of trains by ticket price
void outputTrainsByTicketPrice(std::vector<Locomotive> &vec, std::vector<Vagon> &vag, std::vector<Ticket> &tick);

//function for outputting the trains data by category
void outputTrainByPassCategory(std::vector<Locomotive> &vec, std::vector<Vagon> &vag);
void outputTrainByCargoCategory(std::vector<Locomotive> &vec, std::vector<Vagon> &vag);


//LOCOMOTIVE CLASS

//function for sorting data of "Locomotive" class by days spent for staying on station
void sortLocByStaying(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by comeback date
void sortLocByComeBack(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by number of routes
void sortLocByNumOfRoutes(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by examination period
void outputLocByExamPeriod(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by examination time
void sortLocByExamTime(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by number of repairs
void sortLocByRepairNum(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by number of routes before overhaul
void sortLocByNumOfRoutesBefore(std::vector<Locomotive> &vec);

//function for sorting data of "Locomotive" class by age
void sortLocByAge(std::vector<Locomotive> &vec);


//ROUTE

//function for sorting data of route by status
void outputRouteByStatus(std::vector<Locomotive> &vec);

//function for sorting data of route by reason
void outputRouteByReason(std::vector<Locomotive> &vec);

//function for sorting data of route by reason by handed tickets
void outputRouteByHandedTick(std::vector<Locomotive> &vec);

//function for sorting data of route by category
void outputRouteByCategory(std::vector<Locomotive> &vec, int choise);


//TICKET

//function for sorting data of tickets sold
void outputTickBySold(std::vector<Locomotive> &vec);

//function for sorting data of tickets by route duration
void outputTickByDuration(std::vector<Locomotive> &vec);

//function for sorting data of tickets by price
void outputTickByPrice(std::vector<Locomotive> &vec, std::vector<Ticket> &ticket);

//function for sorting data of unpurchased tickets by route
void outputUnpTickByRoute(std::vector<Locomotive> &vec, int route);

//function for sorting data of unpurchased tickets by date
void outputUnpTickByDate(std::vector<Locomotive> &vec, int choise);

//function for sorting data of unpurchased tickets by route
void outputHandOverTickByRoute(std::vector<Locomotive> &vec, int route);

//function for sorting data of handed back tickets by date
void outputHandedOverTickByDate(std::vector<Locomotive> &vec, int choise);


//CATEGORY

//function for sorting data of category
void outputCategoryByRoutes(std::vector<Locomotive> &vec);


//PASSENGER

//function for sorting data of "Passenger" class by route
void outputPassByRoute(std::vector<Passenger> &vec, int route);

//function for sorting data of "Passenger" class by departure day
void sortPassByDep(std::vector<Passenger> &vec);

//function for sorting data of "Passenger" class by departure abroad day
void sortPassByDepAbr(std::vector<Passenger> &vec);

//function for sorting data of "Passenger" class by luggage
void outputPassByLuggage(std::vector<Passenger> &vec);

//function for sorting data of "Passenger" class by age
void sortPassByAge(std::vector<Passenger> &vec);

//function for sorting data of "Passenger" class by sex
void outputPassBySex(std::vector<Passenger> &vec, int sex);
