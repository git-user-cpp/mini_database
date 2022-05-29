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
        el.output(el);
    }
}
/*
void outputVagon(std::vector<Vagon> &vec)
{
    for(auto &el : vec)
    {
        el.output(el);
    }
}*/


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