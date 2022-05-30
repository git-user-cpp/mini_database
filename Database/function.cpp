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

#include "function.h"


//functions for outputting info
void outputAdmin(std::vector<Administration> &vec)
{
    for(auto &el : vec)
    {
        el.output(el);
    }
}

void outputDriver(std::vector<Rolling_stock_driver> &vec)
{
    for(auto &el : vec)
    {
        el.output(el);
    }
}

void outputWorker(std::vector<Worker> &vec)
{
    for(auto &el : vec)
    {
        el.output(el);
    }
}


void outputLocomotive(std::vector<Locomotive> &vec)
{
    for(auto &el : vec)
    {
        el.outputLoc(el);
    }
}

void outputVagon(std::vector<Vagon> &vec)
{
    for(auto &el : vec)
    {
        el.outputVag(el);
    }
}


//FUNCTIONS FOR SORTING DATA OF "Administration" CLASS

//function for sorting data of "Administration" class by experience
void sortAdminByExp(std::vector<Administration> &vec)
{
    Administration tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getExperience()) > (vec.at(j).getExperience()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Administration" class by sex
void outputAdminBySex(std::vector<Administration> &vec, int sex)
{
    for(auto &el : vec)
    {
        if(sex == 1 && el.getSex() == "man")
        {
            el.output(el);
        }
        else if(sex == 2 && el.getSex() == "woman")
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Administration" class by age
void sortAdminByAge(std::vector<Administration> &vec)
{
    Administration tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getAge()) > (vec.at(j).getAge()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Administration" class by the presence of child
void outputAdminByChild(std::vector<Administration> &vec)
{
    for(auto &el : vec)
    {
        if(el.getThePresenceOfChildren() == true)
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Administration" class by number of children
void sortAdminByChildNum(std::vector<Administration> &vec)
{
    Administration tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfChildren()) > (vec.at(j).getNumOfChildren()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Administration" class by salary
void sortAdminBySalary(std::vector<Administration> &vec)
{
    Administration tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getSalary()) > (vec.at(j).getSalary()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}


//FUNCTIONS FOR SORTING DATA OF "Rolling_stock_driver" CLASS

//function for sorting data of "Rolling_stock_driver" class by experience
void sortDriverByExp(std::vector<Rolling_stock_driver> &vec)
{
    Rolling_stock_driver tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getExperience()) > (vec.at(j).getExperience()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Rolling_stock_driver" class by sex
void outputDriverBySex(std::vector<Rolling_stock_driver> &vec, int sex)
{
    for(auto &el : vec)
    {
        if(sex == 1 && el.getSex() == "man")
        {
            el.output(el);
        }
        else if(sex == 2 && el.getSex() == "woman")
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Rolling_stock_driver" class by age
void sortDriverByAge(std::vector<Rolling_stock_driver> &vec)
{
    Rolling_stock_driver tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getAge()) > (vec.at(j).getAge()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Rolling_stock_driver" class by the presence of child
void outputDriverByChild(std::vector<Rolling_stock_driver> &vec)
{
    for(auto &el : vec)
    {
        if(el.getThePresenceOfChildren() == true)
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Rolling_stock_driver" class by number of children
void sortDriverByChildNum(std::vector<Rolling_stock_driver> &vec)
{
    Rolling_stock_driver tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfChildren()) > (vec.at(j).getNumOfChildren()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Rolling_stock_driver" class by sum of salary
double sortDriverBySumSalary(std::vector<Rolling_stock_driver> &vec)
{
    double sum = 0;

    for(auto &el : vec)
    {
        sum += el.getSalary();
    }

    return sum;
}

//function for sorting data of "Rolling_stock_driver" class by avg salary
double sortDriverByAvgSalary(std::vector<Rolling_stock_driver> &vec)
{
    double sum = 0;

    for(auto &el : vec)
    {
        sum += el.getSalary();
    }

    sum /= vec.size();

    return sum;
}

//function for sorting data of "Rolling_stock_driver" class by salary
void sortDriverBySalary(std::vector<Rolling_stock_driver> &vec)
{
    Rolling_stock_driver tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getSalary()) > (vec.at(j).getSalary()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting medical examination data of "Rolling_stock_driver" class by sex
void outputDriverMedBySex(std::vector<Rolling_stock_driver> &vec, int sex)
{
    for(auto &el : vec)
    {
        if(sex == 1 && el.getSex() == "man" && el.getYearOfMed() == 2022)
        {
            el.output(el);
        }
        else if(sex == 2 && el.getSex() == "woman" && el.getYearOfMed() == 2022)
        {
            el.output(el);
        }
    }
}

//function for sorting medical examination data of "Rolling_stock_driver" class by age
void outputDriverMedByAge(std::vector<Rolling_stock_driver> &vec)
{
    for(auto &el : vec)
    {
        if(el.getYearOfMed() == 2022)
        {
            el.output(el);
        }
    }
}

//function for sorting medical examination data of "Rolling_stock_driver" class by salary
void outputDriverMedBySalary(std::vector<Rolling_stock_driver> &vec)
{
    for(auto &el : vec)
    {
        if(el.getYearOfMed() == 2022)
        {
            el.output(el);
        }
    }
}


//FUNCTIONS FOR SORTING DATA OF "Worker" CLASS

//function for sorting data of "Worker" class by experience
void sortWorkerByExp(std::vector<Worker> &vec)
{
    Worker tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getExperience()) > (vec.at(j).getExperience()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Worker" class by sex
void outputWorkerBySex(std::vector<Worker> &vec, int sex)
{
    for(auto &el : vec)
    {
        if(sex == 1 && el.getSex() == "man")
        {
            el.output(el);
        }
        else if(sex == 2 && el.getSex() == "woman")
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Worker" class by age
void sortWorkerByAge(std::vector<Worker> &vec)
{
    Worker tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getAge()) > (vec.at(j).getAge()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Worker" class by the presence of child
void outputWorkerByChild(std::vector<Worker> &vec)
{
    for(auto &el : vec)
    {
        if(el.getThePresenceOfChildren() == true)
        {
            el.output(el);
        }
    }
}

//function for sorting data of "Worker" class by number of children
void sortWorkerByChildNum(std::vector<Worker> &vec)
{
    Worker tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfChildren()) > (vec.at(j).getNumOfChildren()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Worker" class by sum of salary
double sortWorkerBySumSalary(std::vector<Worker> &vec)
{
    double sum = 0;

    for(auto &el : vec)
    {
        sum += el.getSalary();
    }

    return sum;
}

//function for sorting data of "Worker" class by avg salary
double sortWorkerByAvgSalary(std::vector<Worker> &vec)
{
    double sum = 0;

    for(auto &el : vec)
    {
        sum += el.getSalary();
    }

    sum /= vec.size();

    return sum;
}

//function for sorting data of "Worker" class by salary
void sortWorkerBySalary(std::vector<Worker> &vec)
{
    Worker tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getSalary()) > (vec.at(j).getSalary()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}



//FUNCTIONS FOR SORTING DATA OF "Train" CLASS

//outputting the first train
void outputFirstTrain(std::vector<Locomotive> &vec, std::vector<Vagon> &vag)
{
    std::cout << "First train" << std::endl;
    vec[0].outputLoc(vec[0]);
    vag[0].outputVag(vag[0]);
    vag[1].outputVag(vag[1]);
}

//outputting the second train
void outputSecondTrain(std::vector<Locomotive> &vec, std::vector<Vagon> &vag)
{
    std::cout << "Second train" << std::endl;
    vec[1].outputLoc(vec[1]);
    vag[2].outputVag(vag[2]);
    vag[3].outputVag(vag[3]);
}

//function for sorting data of trains by route duration
void outputTrainsByRouteDuration(std::vector<Locomotive> &vec, std::vector<Vagon> &vag)
{
    if(vec[0].getRouteDuration() > vec[0].getRouteDuration())
    {
        outputFirstTrain(vec, vag);
        outputSecondTrain(vec, vag);
    }
    else
    {
        outputSecondTrain(vec, vag);
        outputFirstTrain(vec, vag);
    }
}

//function for sorting data of trains by ticket price
void outputTrainsByTicketPrice(std::vector<Locomotive> &vec, 
                                std::vector<Vagon> &vag,
                                std::vector<Ticket> &tick)
{
    for(auto &el : tick)
    {
        if((el.getRoute() == vec[0].getRoute()) && (el.getTicketPrice() > 100))
        {
            outputFirstTrain(vec, vag); 
            outputSecondTrain(vec, vag);
            break;
        }
        else
        {
            outputSecondTrain(vec, vag);
            outputFirstTrain(vec, vag);
            break;
        }
    }

}

//function for outputting the trains data by category
void outputTrainByPassCategory(std::vector<Locomotive> &vec, std::vector<Vagon> &vag)
{
    if(vec[0].getCategory() == "passenger")
    {
        outputFirstTrain(vec, vag);
    }
}
void outputTrainByCargoCategory(std::vector<Locomotive> &vec, std::vector<Vagon> &vag)
{
    if(vec[1].getCategory() == "cargo")
    {
        outputSecondTrain(vec, vag);
    }
}


//FUNCTIONS FOR SORTING DATA OF "Locomotive" CLASS

//function for sorting data of "Locomotive" class by days spent for staying on station
void sortLocByStaying(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getDaysOnStation()) > (vec.at(j).getDaysOnStation()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by comeback date
void sortLocByComeBack(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getDateOfComeback()) < (vec.at(j).getDateOfComeback()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by number of routes
void sortLocByNumOfRoutes(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfRoutes()) > (vec.at(j).getNumOfRoutes()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by examination period
void outputLocByExamPeriod(std::vector<Locomotive> &vec)
{
    for(auto &el : vec)
    {
        if(el.getYearOfTechExam() == "2022")
        {
            el.outputLoc(el);
        }
    }
}

//function for sorting data of "Locomotive" class by examination time
void sortLocByExamTime(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getYearOfTechExam()) > (vec.at(j).getYearOfTechExam()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by number of repairs
void sortLocByRepairNum(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfRepair()) > (vec.at(j).getNumOfRepair()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by number of routes before overhaul
void sortLocByNumOfRoutesBefore(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getNumOfRoutesBeforeRepair()) > (vec.at(j).getNumOfRoutesBeforeRepair()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by age
void sortLocByAge(std::vector<Locomotive> &vec)
{
    Locomotive tmp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < (i + 1); j++)
        {
            if((vec.at(i).getDateOfProd()) < (vec.at(j).getDateOfProd()))
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
    }
}

//function for sorting data of "Locomotive" class by status
void outputLocByStatus(std::vector<Locomotive> &vec)
{
    for(auto &el : vec)
    {
        if(el.getRouteStatus() == "Canceled")
        {
            std::cout << el.getRoute() << std::endl;
            break;
        }
    }
}

//function for sorting data of "Locomotive" class by status
void outputLocByReason(std::vector<Locomotive> &vec)
{
    for(auto &el : vec)
    {
        if(el.getRouteReason() == "technical")
        {
            std::cout   << el.getRoute() << std::endl
                        << el.getRouteReason() << std::endl;
            break;
        }
    }
}

//function for sorting data of "Locomotive" class by handed tickets
void outputLocByHandedTick(std::vector<Locomotive> &vec)
{
    for(auto &el : vec)
    {
        if(el.getRoute() == "Kyiv-Lviv")
        {
            std::cout   << el.getRoute() << std::endl
                        << el.getNumOfHandedTickets() << std::endl;
        }
        if(el.getRoute() == "Uzhhorod-Lviv")
        {
            std::cout   << el.getRoute() << std::endl
                        << el.getNumOfHandedTickets() << std::endl;
        }
    }
}