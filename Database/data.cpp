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
    std::cout   << "--------------------------------------------------------------" << std::endl
                << "Name & surname: " << el.getName() << ' '
                << el.getSurname() << std::endl
                << "Age: " << el.getAge() << std::endl
                << "Sex: " << el.getSex() << std::endl
                << "Num. of children: " << el.getNumOfChildren() << std::endl
                << "Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "Salary: " << el.getSalary() << std::endl
                << "Experience: " << el.getExperience() << std::endl
                << "Department: " << el.getDepartment() << std::endl
                << "--------------------------------------------------------------" << std::endl;
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
    std::cout   << "--------------------------------------------------------------" << std::endl
                << "Name & surname: " << el.getName() << ' '
                << el.getSurname() << std::endl
                << "Age: " << el.getAge() << std::endl
                << "Sex: " << el.getSex() << std::endl
                << "Num. of children: " << el.getNumOfChildren() << std::endl
                << "Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "Salary: " << el.getSalary() << std::endl
                << "Experience: " << el.getExperience() << std::endl
                << "Department: " << el.getDepartment() << std::endl
                << "Position: " << el.getPosition() << std::endl
                << "--------------------------------------------------------------" << std::endl;
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
    std::cout   << "--------------------------------------------------------------" << std::endl
                << "Name & surname: " << el.getName() << ' '
                << el.getSurname() << std::endl
                << "Age: " << el.getAge() << std::endl
                << "Sex: " << el.getSex() << std::endl
                << "Num. of children: " << el.getNumOfChildren() << std::endl
                << "Presence of children(0-no; 1-yes): " << el.getThePresenceOfChildren() << std::endl
                << "Salary: " << el.getSalary() << std::endl
                << "Experience: " << el.getExperience() << std::endl
                << "Department: " << el.getDepartment() << std::endl
                << "Year of med. ex.: " << el.getYearOfMed() << std::endl
                << "--------------------------------------------------------------" << std::endl;
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


//LOCOMOTIVE CLASS

//default constructor for "Locomotive" class
Locomotive::Locomotive(){};

//overloaded constructor for "Locomotive" class
Locomotive::Locomotive(int serialNum, int workspaceNum, int dateOfProd, int maxspeed,
                    std::string brand, std::string fuel, int numOfRoutes, int numOfRoutesBeforeRepair,
                    int numOfRepair, std::string dateOfComeBack, int daysOnStation, std::string yearOfTechExam,
                    std::string routeStatus, std::string routeReason, std::string category, int routeDuration,
                    std::string route, int numOfHandedTickets)
{
    this->serialNum = serialNum;
    this->workspaceNum = workspaceNum;
    this->dateOfProd = dateOfProd;
    this->maxspeed = maxspeed;
    this->brand = brand;
    this->fuel = fuel;
    this->numOfRoutes = numOfRoutes;
    this->numOfRoutesBeforeRepair = numOfRoutesBeforeRepair;
    this->numOfRepair = numOfRepair;
    this->dateOfComeBack = dateOfComeBack;
    this->daysOnStation = daysOnStation;
    this->yearOfTechExam = yearOfTechExam;
    this->routeStatus = routeStatus;
    this->routeReason = routeReason;
    this->category = category;
    this->routeDuration = routeDuration;
    this->route = route;
    this->numOfHandedTickets = numOfHandedTickets;
};

//default destructor for "Locomotive" class
Locomotive::~Locomotive(){};

//setters for the "Locomotive" class
void Locomotive::setSerialNum(int num)
{
    this->serialNum = num;
}
void Locomotive::setWorkspaceNum(int num)
{
    this->workspaceNum = num;
}
void Locomotive::setDateOfProd(int date)
{
    this->dateOfProd = date;
}
void Locomotive::setBrand(std::string brand)
{
    this->brand = brand;
}
void Locomotive::setNumOfRoutes(int routes)
{
    this->numOfRoutes = routes;
}
void Locomotive::setNumOfRoutesBeforeRepair(int routesBeforeRepair)
{
    this->numOfRoutesBeforeRepair = routesBeforeRepair;
}
void Locomotive::setNumOfRepair(int numOfRepair)
{
    this->numOfRepair = numOfRepair;
}
void Locomotive::setDateOfComeback(std::string date)
{
    this->dateOfComeBack = date;
}
void Locomotive::setDaysOnStation(int days)
{
    this->daysOnStation = days;
}
void Locomotive::setYearOfTechExam(std::string year)
{
    this->yearOfTechExam = year;
}

//getters for the "Locomotive" class
int Locomotive::getSerialNum()
{
    return serialNum;
}
int Locomotive::getWorkspaceNum()
{
    return workspaceNum;
}
int Locomotive::getDateOfProd()
{
    return dateOfProd;
}
int Locomotive::getMaxSpeed()
{
    return maxspeed;
}
std::string Locomotive::getBrand()
{
    return brand;
}
std::string Locomotive::getFuel()
{
    return fuel;
}
int Locomotive::getNumOfRoutes()
{
    return numOfRoutes;
}
int Locomotive::getNumOfRoutesBeforeRepair()
{
    return numOfRoutesBeforeRepair;
}
int Locomotive::getNumOfRepair()
{
    return numOfRepair;
}
std::string Locomotive::getDateOfComeback()
{
    return dateOfComeBack;
}
int Locomotive::getDaysOnStation()
{
    return daysOnStation;
}
std::string Locomotive::getYearOfTechExam()
{
    return yearOfTechExam;
}
std::string Locomotive::getRoute()
{
    return route;
}
std::string Locomotive::getRouteStatus()
{
    return routeStatus;
}
std::string Locomotive::getCategory()
{
    return category;
}
int Locomotive::getRouteDuration()
{
    return routeDuration;
}
std::string Locomotive::getRouteReason()
{
    return routeReason;
}
int Locomotive::getNumOfHandedTickets()
{
    return numOfHandedTickets;
}

//output function for the "Locomotive" class
void Locomotive::output(Locomotive &el)
{
    std::cout   << "--------------------------------------------------------------" << std::endl
                << "Serial number: " << el.getSerialNum() << std::endl
                << "Workspace number: " << el.getWorkspaceNum() << std::endl
                << "Production date: " << el.getDateOfProd() << std::endl
                << "Max. speed: " << el.getMaxSpeed() << std::endl
                << "Brand: " << el.getBrand() << std::endl
                << "Fuel: " << el.getFuel() << std::endl
                << "Num. of routes: " << el.getNumOfRoutes() << std::endl
                << "Num. of routes before repair: " << el.getNumOfRoutesBeforeRepair() << std::endl
                << "Num. of repair: " << el.getNumOfRepair() << std::endl
                << "Date of come back: " << el.getDateOfComeback() << std::endl
                << "Days on station: " << el.getDaysOnStation() << std::endl
                << "Year of tech. exam: " << el.getYearOfTechExam() << std::endl
                << "Route status: " << el.getRouteStatus() << std::endl
                << "Route reason: " << el.getRouteReason() << std::endl
                << "Category: " << el.getCategory() << std::endl
                << "Route duration: " << el.getRouteDuration() << std::endl
                << "Route: " << el.getRoute() << std::endl
                << "Num. of handed tickets: " << el.getNumOfHandedTickets() << std::endl
                << "--------------------------------------------------------------" << std::endl;
}


//VAGON CLASS
/*
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
}

//default destructor for "Vagon" class
Vagon::~Vagon(){};

void output(Vagon &el)
{
    std::cout   << "--------------------------------------------------------------" << std::endl
                << "Serial number: " << el.getSerialNum() << std::endl
                << "Workspace number: " << el.getWorkspaceNum() << std::endl
                << "Production date: " << el.getDateOfProd() << std::endl
                << "Brand: " << el.getBrand() << std::endl
                << "Num. of routes: " << el.getNumOfRoutes() << std::endl
                << "Num. of routes before repair: " << el.getNumOfRoutesBeforeRepair() << std::endl
                << "Num. of repair: " << el.getNumOfRepair() << std::endl
                << "Date of come back: " << el.getDateOfComeback() << std::endl
                << "Days on station: " << el.getDaysOnStation() << std::endl
                << "Year of tech. exam: " << el.getYearOfTechExam() << std::endl
                << "--------------------------------------------------------------" << std::endl;
}*/