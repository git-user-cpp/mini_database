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

#include "data.hpp"


//HUMAN CLASS

//default constructor and default destructor for the Human class
Human::Human(){};
Human::~Human(){};

//setters for the Human class
void Human::setName(std::string name)
{
    this->name = name;
}
void Human::setSurname(std::string surname)
{
    this->surname = surname;
}
void Human::setAge(int age)
{
    this->age = age;
}
void Human::setSex(std::string sex)
{
    this->sex = sex;
}
void Human::setNumOfChildren(int num)
{
    this->number_of_children = num;
}
void Human::setThePresenceOfChildren(bool ch)
{
    this->the_presence_of_children = ch;
}

//getters for the Human class
std::string Human::getName()
{
    return name;
}
std::string Human::getSurname()
{
    return surname;
}
int Human::getAge()
{
    return age;
}
std::string Human::getSex()
{
    return sex;
}
int Human::getNumOfChildren()
{
    return number_of_children;
}
bool Human::getThePresenceOfChildren()
{
    return the_presence_of_children;
}


//PASSENGER CLASS

//default constructor for the Passenger class
Passenger::Passenger()
{
    this->setName("");
    this->setSurname("");
    this->setAge(0);
    this->setSex("");

    this->setRoute("");
    this->setLuggage("");
    this->setDepDate("");
    this->setDepAbroadDate("");
};

//overloaded constructor for the Passenger class
Passenger::Passenger(std::string name, std::string surname, int age, std::string sex,
                    std::string route, std::string depDate, std::string depAbroadDate, std::string luggage)
{
    this->setName(name);
    this->setSurname(surname);
    this->setAge(age);
    this->setSex(sex);

    this->setRoute(route);
    this->setDepDate(depDate);
    this->setDepAbroadDate(depAbroadDate);
    this->setLuggage(luggage);
};

//default destructor for the Passenger class
Passenger::~Passenger(){};

//setters for the Passenger class
void Passenger::setRoute(std::string route)
{
    this->route = route;
}
void Passenger::setDepDate(std::string date)
{
    this->depDate = date;
}
void Passenger::setDepAbroadDate(std::string date)
{
    this->depAbroadDate = date;
}
void Passenger::setLuggage(std::string luggage)
{
    this->luggage = luggage;
}

//getters for the Passenger class
std::string Passenger::getRoute()
{
    return route;
}

std::string Passenger::getDepDate()
{
    return depDate;
}

std::string Passenger::getDepAbroadDate()
{
    return depAbroadDate;
}

std::string Passenger::getLuggage()
{
    return luggage;
}

//overloaded output function for Worker class
void Passenger::outputPass(Passenger &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name & surname: " << el.getName() << ' ' << el.getSurname() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << el.getAge() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << el.getSex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Luggage: " << el.getLuggage() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Route: " << el.getRoute() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Day of departure: " << el.getDepDate() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Day of departure abroad: " << el.getDepAbroadDate() << std::endl
                << "|_____________________________________________________________" << std::endl;
}


//WORKER CLASS

//default constructor for the Worker class
Worker::Worker()
{
    this->setName("");
    this->setSurname("");
    this->setAge(0);
    this->setSex("");
    this->setNumOfChildren(0);
    this->setThePresenceOfChildren(false);

    this->salary = 0;
    this->experience = 0;
    this->department = "";
};

//overloaded constructor for the Worker class
Worker::Worker(std::string name, std::string surname, int age, 
                std::string sex, int number_of_children, bool the_presence_of_children,
                double salary, int experience, std::string department)
{
    this->setName(name);
    this->setSurname(surname);
    this->setAge(age);
    this->setSex(sex);
    this->setNumOfChildren(number_of_children);
    this->setThePresenceOfChildren(the_presence_of_children);
    
    this->setSalary(salary);
    this->setExperience(experience);
    this->setDepartment(department);
}

//default destructor for the Worker class
Worker::~Worker(){};

//setters for the Worker class
void Worker::setSalary(double salary)
{
    this->salary = salary;
}
void Worker::setExperience(int experience)
{
    this->experience = experience;
}
void Worker::setDepartment(std::string department)
{
    this->department = department;
}

//getters for the Worker class
double Worker::getSalary()
{
    return salary;
}
int Worker::getExperience()
{
    return experience;
}
std::string Worker::getDepartment()
{
    return department;
}

//overloaded output function for Worker class
void Worker::output(Worker &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name & surname: " << el.getName() << ' ' << el.getSurname() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << el.getAge() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << el.getSex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of children: " << el.getNumOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Salary: " << el.getSalary() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Experience: " << el.getExperience() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Department: " << el.getDepartment() << std::endl
                << "|_____________________________________________________________" << std::endl;
}


//ADMINISTRATION CLASS

//default constructor for the Administration class
Administration::Administration(){};

//overloaded constructor for the Administration class
Administration::Administration(std::string name, std::string surname, int age, 
                std::string sex, int number_of_children, bool the_presence_of_children,
                double salary, int experience, std::string department, std::string position)
{
    this->setName(name);
    this->setSurname(surname);
    this->setAge(age);
    this->setSex(sex);
    this->setNumOfChildren(number_of_children);
    this->setThePresenceOfChildren(the_presence_of_children);
    this->setSalary(salary);
    this->setExperience(experience);
    this->setDepartment(department);

    this->setPosition(position);
};

//default destructor for the Administration class
Administration::~Administration(){};

//setters for the Administration class
void Administration::setPosition(std::string position)
{
    this->position = position;
}

//getters for the Administration class
std::string Administration::getPosition()
{
    return position;
}

//overloaded output function for the Administration class
void Administration::output(Administration &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name & surname: " << el.getName() << ' ' << el.getSurname() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << el.getAge() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << el.getSex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of children: " << el.getNumOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Salary: " << el.getSalary() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Experience: " << el.getExperience() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Department: " << el.getDepartment() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Position: " << el.getPosition() << std::endl
                << "|_____________________________________________________________" << std::endl;
}


//ROLLING STOCK DRIVER CLASS

//default constructor for Rolling_stock_driver class
Rolling_stock_driver::Rolling_stock_driver(){};

//overloaded constructor for the Rolling_stock_driver class
Rolling_stock_driver::Rolling_stock_driver(std::string name, std::string surname, int age, 
                std::string sex, int number_of_children, bool the_presence_of_children,
                double salary, int experience, std::string department, int year_of_medical_examination)
{
    this->setName(name);
    this->setSurname(surname);
    this->setAge(age);
    this->setSex(sex);
    this->setNumOfChildren(number_of_children);
    this->setThePresenceOfChildren(the_presence_of_children);
    this->setSalary(salary);
    this->setExperience(experience);
    this->setDepartment(department);

    this->setYearOfMed(year_of_medical_examination);
};

//default destructor for the Rolling_stock_driver class
Rolling_stock_driver::~Rolling_stock_driver(){};

//setters for the Rolling_stock_driver class
void Rolling_stock_driver::setYearOfMed(int year_of_medical_examination)
{
    this->year_of_medical_examination = year_of_medical_examination;
}

//getters for the Rolling_stock_driver class
int Rolling_stock_driver::getYearOfMed()
{
    return year_of_medical_examination;
}

//overloaded output function for the Rolling_stock_driver class
void Rolling_stock_driver::output(Rolling_stock_driver &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name & surname: " << el.getName() << ' ' << el.getSurname() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << el.getAge() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << el.getSex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of children: " << el.getNumOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Salary: " << el.getSalary() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Experience: " << el.getExperience() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Department: " << el.getDepartment() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Year of med. ex.: " << el.getYearOfMed() << std::endl
                << "|_____________________________________________________________" << std::endl;
}


//TICKET CLASS

//setters for the "Ticket" class
void Ticket::setRoute(std::string route)
{
    this->route = route;
}
void Ticket::setTicketPrice(double price)
{
    this->ticketPrice = price;
}

//getters for the "Ticket" class
std::string Ticket::getRoute()
{
    return route;
}
double Ticket::getTicketPrice()
{
    return ticketPrice;
}


//TRAIN CLASS

//default constructor for "Train" class
Train::Train(){};

//default destructor for "Train" class
Train::~Train(){};

//setters for the "Locomotive" class
void Train::setSerialNum(int num)
{
    this->serialNum = num;
}
void Train::setWorkspaceNum(int num)
{
    this->workspaceNum = num;
}
void Train::setDateOfProd(int date)
{
    this->dateOfProd = date;
}

void Train::setMaxSpeed(int max)
{
    this->maxspeed = max;
}
void Train::setBrand(std::string brand)
{
    this->brand = brand;
}
void Train::setFuel(std::string fuel)
{
    this->fuel = fuel;
}
void Train::setNumOfRoutes(int routes)
{
    this->numOfRoutes = routes;
}
void Train::setNumOfRoutesBeforeRepair(int routesBeforeRepair)
{
    this->numOfRoutesBeforeRepair = routesBeforeRepair;
}
void Train::setNumOfRepair(int numOfRepair)
{
    this->numOfRepair = numOfRepair;
}
void Train::setDateOfComeback(std::string date)
{
    this->dateOfComeBack = date;
}
void Train::setDaysOnStation(int days)
{
    this->daysOnStation = days;
}
void Train::setYearOfTechExam(std::string year)
{
    this->yearOfTechExam = year;
}
void Train::setRouteStatus(std::string status)
{
    this->routeStatus = status;
}
void Train::setRouteReason(std::string reason)
{
    this->routeReason = reason;
}
void Train::setCategory(std::string category)
{
    this->category = category;
}
void Train::setRouteDuration(int duration)
{
    this->routeDuration = duration;
}
void Train::setRoute(std::string route)
{
    this->route = route;
}
void Train::setNumOfHandedTickets(int num)
{
    this->numOfHandedTickets = num;
}
void Train::setNumOfSoldTickets(int num)
{
    this->numOfSoldTickets = num;
}
void Train::setTotalNumOfTickets(int num)
{
    this->totalNumOfTickets = num;
}

//getters for the "Locomotive" class
int Train::getSerialNum()
{
    return serialNum;
}
int Train::getWorkspaceNum()
{
    return workspaceNum;
}
int Train::getDateOfProd()
{
    return dateOfProd;
}
int Train::getMaxSpeed()
{
    return maxspeed;
}
std::string Train::getBrand()
{
    return brand;
}
std::string Train::getFuel()
{
    return fuel;
}
int Train::getNumOfRoutes()
{
    return numOfRoutes;
}
int Train::getNumOfRoutesBeforeRepair()
{
    return numOfRoutesBeforeRepair;
}
int Train::getNumOfRepair()
{
    return numOfRepair;
}
std::string Train::getDateOfComeback()
{
    return dateOfComeBack;
}
int Train::getDaysOnStation()
{
    return daysOnStation;
}
std::string Train::getYearOfTechExam()
{
    return yearOfTechExam;
}
std::string Train::getRoute()
{
    return route;
}
std::string Train::getRouteStatus()
{
    return routeStatus;
}
std::string Train::getCategory()
{
    return category;
}
int Train::getRouteDuration()
{
    return routeDuration;
}
std::string Train::getRouteReason()
{
    return routeReason;
}
int Train::getNumOfHandedTickets()
{
    return numOfHandedTickets;
}
int Train::getNumOfSoldTickets()
{
    return numOfSoldTickets;
}
int Train::getTotalNumOfTickets()
{
    return totalNumOfTickets;
}

//output function for the "Locomotive" class
void Locomotive::outputLoc(Locomotive &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Serial number: " << el.getSerialNum() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Workspace number: " << el.getWorkspaceNum() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Production date: " << el.getDateOfProd() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Max. speed: " << el.getMaxSpeed() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Brand: " << el.getBrand() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Fuel: " << el.getFuel() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of routes: " << el.getNumOfRoutes() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of routes before repair: " << el.getNumOfRoutesBeforeRepair() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of repair: " << el.getNumOfRepair() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Date of come back: " << el.getDateOfComeback() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Days on station: " << el.getDaysOnStation() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Year of tech. exam: " << el.getYearOfTechExam() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Route status: " << el.getRouteStatus() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Route reason: " << el.getRouteReason() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Category: " << el.getCategory() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Route duration: " << el.getRouteDuration() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Route: " << el.getRoute() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of handed tickets: " << el.getNumOfHandedTickets() << std::endl
                << "|_____________________________________________________________" << std::endl;
}

//output function for the "Vagon" class
void Vagon::outputVag(Vagon &el)
{
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Serial number: " << el.getSerialNum() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Workspace number: " << el.getWorkspaceNum() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Production date: " << el.getDateOfProd() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Brand: " << el.getBrand() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of routes: " << el.getNumOfRoutes() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of routes before repair: " << el.getNumOfRoutesBeforeRepair() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Num. of repair: " << el.getNumOfRepair() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Date of come back: " << el.getDateOfComeback() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Days on station: " << el.getDaysOnStation() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Year of tech. exam: " << el.getYearOfTechExam() << std::endl
                << "|_____________________________________________________________" << std::endl;
}


//LOCOMOTIVE CLASS

//default constructor for "Locomotive" class
Locomotive::Locomotive(){};

//overloaded constructor for "Locomotive" class
Locomotive::Locomotive(int serialNum, int workspaceNum, int dateOfProd, int maxspeed,
                    std::string brand, std::string fuel, int numOfRoutes, int numOfRoutesBeforeRepair,
                    int numOfRepair, std::string dateOfComeBack, int daysOnStation, std::string yearOfTechExam,
                    std::string routeStatus, std::string routeReason, std::string category, int routeDuration,
                    std::string route, int numOfSoldTickets, int numOfHandedTickets, int totalNumOfTick)
{
    this->setSerialNum(serialNum);
    this->setWorkspaceNum(workspaceNum);
    this->setDateOfProd(dateOfProd);
    this->setMaxSpeed(maxspeed);
    this->setBrand(brand);
    this->setFuel(fuel);
    this->setNumOfRoutes(numOfRoutes);
    this->setNumOfRoutesBeforeRepair(numOfRoutesBeforeRepair);
    this->setNumOfRepair(numOfRepair);
    this->setDateOfComeback(dateOfComeBack);
    this->setDaysOnStation(daysOnStation);
    this->setYearOfTechExam(yearOfTechExam);
    this->setRouteStatus(routeStatus);
    this->setRouteReason(routeReason);
    this->setCategory(category);
    this->setRouteDuration(routeDuration);
    this->setRoute(route);
    this->setNumOfSoldTickets(numOfSoldTickets);
    this->setNumOfHandedTickets(numOfHandedTickets);
    this->setTotalNumOfTickets(totalNumOfTick);
};

//default destructor for "Locomotive" class
Locomotive::~Locomotive(){};


//VAGON CLASS

//default constructor for "Vagon" class
Vagon::Vagon(){};

//overloaded constructor for "Vagon" class
Vagon::Vagon(int serialNum, int workspaceNum, int dateOfProd,
                    std::string brand, int numOfRoutes, int numOfRoutesBeforeRepair,
                    int numOfRepair, std::string dateOfComeBack, int daysOnStation, std::string yearOfTechExam)
{
    this->setSerialNum(serialNum);
    this->setWorkspaceNum(workspaceNum);
    this->setDateOfProd(dateOfProd);
    this->setBrand(brand);
    this->setNumOfRoutes(numOfRoutes);
    this->setNumOfRoutesBeforeRepair(numOfRoutesBeforeRepair);
    this->setNumOfRepair(numOfRepair);
    this->setDateOfComeback(dateOfComeBack);
    this->setDaysOnStation(daysOnStation);
    this->setYearOfTechExam(yearOfTechExam);
};

//default destructor for "Vagon" class
Vagon::~Vagon(){};
