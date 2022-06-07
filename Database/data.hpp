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

#pragma once
#include <iostream>
#include <string>
#include <vector>

class Human
{
    private:
        std::string name;
        std::string surname;

        int age;
        std::string sex;
        int number_of_children;
        bool the_presence_of_children;

    public:
        Human();
        ~Human();

        //setters
        void setName(std::string name);
        void setSurname(std::string surname);
        void setAge(int age);
        void setSex(std::string sex);
        void setNumOfChildren(int num);
        void setThePresenceOfChildren(bool ch);

        //getters
        std::string getName();
        std::string getSurname();
        int getAge();
        std::string getSex();
        int getNumOfChildren();
        bool getThePresenceOfChildren();

        void output(Human &el);
};

class Passenger : public Human
{
    private:
        std::string route;
        std::string depDate;
        std::string depAbroadDate;
        std::string luggage;
    public:
        Passenger();
        Passenger(std::string name, std::string surname, int age, std::string sex,
                    std::string route, std::string depDate, std::string depAbroadDate, std::string luggage);
        ~Passenger();

        //setters
        void setRoute(std::string route);
        void setDepDate(std::string date);
        void setDepAbroadDate(std::string date);
        void setLuggage(std::string luggage);

        //getters
        std::string getRoute();
        std::string getDepDate();
        std::string getDepAbroadDate();
        std::string getLuggage();

        //function for outputting data
        void outputPass(Passenger &el);
};

class Worker : public Human
{
    private:
        double salary;
        int experience;
        std::string department;

    public:
        Worker();
        Worker(std::string name, std::string surname, int age, 
                    std::string sex, int number_of_children, bool the_presence_of_children,
                    double salary, int experience, std::string department);
        ~Worker();

        //setters
        void setSalary(double salary);
        void setExperience(int experience);
        void setDepartment(std::string department);

        //getters
        double getSalary();
        int getExperience();
        std::string getDepartment();

        //function for outputting data
        void output(Worker &el);
};

class Administration : public Worker
{
    private:
        std::string position;

    public:
        Administration();
        Administration(std::string name, std::string surname, int age, 
                std::string sex, int number_of_children, bool the_presence_of_children,
                double salary, int experience, std::string department, std::string position);
        ~Administration();
        
        //setters
        void setPosition(std::string position);
        
        //getters
        std::string getPosition();

        //function for outputting data
        void output(Administration &el);
};

class Rolling_stock_driver : public Worker
{
    private:
        int year_of_medical_examination;

    public:
        Rolling_stock_driver();
        Rolling_stock_driver(std::string name, std::string surname, int age, 
                std::string sex, int number_of_children, bool the_presence_of_children,
                double salary, int experience, std::string department, int year_of_medical_examination);
        ~Rolling_stock_driver();

        //setters
        void setYearOfMed(int year_of_medical_examination);

        //getters
        int getYearOfMed();

        //function for outputting data
        void output(Rolling_stock_driver &el);
};

class Ticket
{
    private:
        std::string route;
        double ticketPrice;
    public:
        Ticket(std::string route, double price)
        {
            this->route = route;
            this->ticketPrice = price;
        }

        //setters
        void setRoute(std::string route);
        void setTicketPrice(double price);

        //getters
        std::string getRoute();
        double getTicketPrice();
};

class Locomotive;
class Vagon;

class Train
{
    private:
        std::string route;
        int serialNum;
        int workspaceNum;
        int dateOfProd;
        int maxspeed;
        std::string brand;
        std::string fuel;
        int numOfRoutes;
        int numOfRoutesBeforeRepair;
        int numOfRepair;
        std::string dateOfComeBack;
        int daysOnStation;
        std::string yearOfTechExam;
        std::string routeStatus;
        std::string routeReason;
        std::string category;
        int routeDuration;
        int numOfSoldTickets;
        int numOfHandedTickets;
        int totalNumOfTickets;

    public:
        Train();
        ~Train();

        //setters
        void setSerialNum(int num);
        void setWorkspaceNum(int num);
        void setDateOfProd(int date);
        void setMaxSpeed(int max);
        void setBrand(std::string brand);
        void setFuel(std::string fuel);
        void setNumOfRoutes(int routes);
        void setNumOfRoutesBeforeRepair(int routesBeforeRepair);
        void setNumOfRepair(int numOfRepair);
        void setDateOfComeback(std::string date);
        void setDaysOnStation(int days);
        void setYearOfTechExam(std::string year);
        void setRouteStatus(std::string status);
        void setRouteReason(std::string reason);
        void setCategory(std::string category);
        void setRouteDuration(int duration);
        void setRoute(std::string route);
        void setNumOfHandedTickets(int num);
        void setNumOfSoldTickets(int num);
        void setTotalNumOfTickets(int num);


        //getters
        int getSerialNum();
        int getWorkspaceNum();
        int getDateOfProd();
        int getMaxSpeed();
        std::string getBrand();
        std::string getFuel();
        int getNumOfRoutes();
        int getNumOfRoutesBeforeRepair();
        int getNumOfRepair();
        std::string getDateOfComeback();
        int getDaysOnStation();
        std::string getYearOfTechExam();
        std::string getRoute();
        std::string getRouteStatus();
        std::string getCategory();
        int getRouteDuration();
        std::string getRouteReason();
        int getNumOfHandedTickets();
        int getNumOfSoldTickets();
        int getTotalNumOfTickets();
};

class Locomotive : public Train
{
            
    public:
        Locomotive();
        Locomotive(int serialNum, int workspaceNum, int dateOfProd, int maxspeed,
                    std::string brand, std::string fuel, int numOfRoutes, int numOfRoutesBeforeRepair,
                    int numOfRepair, std::string dateOfComeBack, int daysOnStation, std::string yearOfTechExam,
                    std::string routeStatus, std::string routeReason, std::string category, int routeDuration,
                    std::string route, int numOfSoldTickets, int numOfHandedTickets, int totalNumOfTick);
        ~Locomotive();

        void outputLoc(Locomotive &el);
};

class Vagon : public Locomotive
{
    public:
        Vagon();
        Vagon(int serialNum, int workspaceNum, int dateOfProd,
                    std::string brand, int numOfRoutes, int numOfRoutesBeforeRepair,
                    int numOfRepair, std::string dateOfComeBack, int daysOnStation, std::string yearOfTechExam);
        ~Vagon();

        void outputVag(Vagon &el);
};

#include "function.hpp"