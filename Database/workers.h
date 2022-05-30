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
#include "data.h"

//Administration staff
std::vector<Administration> adminList
{
    Administration("Randy", "Garden", 25, "man", 0, false, 150000.0, 2, "Administration", "Director of the Administration Department"),
    Administration("Gordon", "Freeman", 27, "man", 0, false, 150000.0, 9, "Administration", "Director of the Drivers Department"),
    Administration("Natalie", "Chornozem", 40, "woman", 2, true, 145000.0, 20, "Administration", "Director of the Dispatch Department"),
    Administration("Gabe", "Sourse", 50, "man", 1, true, 147000.0, 30, "Administration", "Director of the Rolling Stock Repair Department"),
    Administration("Antony", "Du", 35, "man", 10, true, 145000.0, 15, "Administration", "Director of the Road Repair Department"),
    Administration("Litt", "Nnamednil", 60, "man", 2, true, 146000.0, 35, "Administration", "Director of the Cash Department"),
    Administration("Oleksii", "Digger", 45, "man", 0, false, 144000.0, 6, "Administration", "Director of the Warehouse Department"),
    Administration("Lida", "Smart", 30, "woman", 1, true, 150000.0, 10, "Administration", "Director of the Help Desk Department"),
    Administration("Wordlana", "Tou", 45, "woman", 2, true, 149000.0, 20, "Administration", "Director of the Accounting Department")
};

//Staff of rolling stock drivers
std::vector<Rolling_stock_driver> driverList
{
    Rolling_stock_driver("Peter", "Griphin", 45, "man", 3, true, 120000, 20, "Drivers Department", 2022),
    Rolling_stock_driver("Rongshin", "Friend", 29, "man", 0, false, 115000, 5, "Drivers Department", 2022),
    Rolling_stock_driver("John", "Cena", 45, "man", 2, true, 122000, 21, "Drivers Department", 2021),
    Rolling_stock_driver("Lana", "Loop", 32, "woman", 0, false, 125000, 8, "Drivers Department", 2022),
    Rolling_stock_driver("Rohn", "Unicorn", 22, "man", 0, false, 120000, 1, "Drivers Department", 2021),
    Rolling_stock_driver("Dr", "Noper", 60, "man", 0, false, 135000, 45, "Drivers Department", 2022),
    Rolling_stock_driver("Pavlo", "Syla", 27, "man", 0, false, 129000, 2, "Drivers Department", 2022),
    Rolling_stock_driver("Yrii", "Shkvarok", 20, "man", 0, false, 100000, 1, "Drivers Department", 2021)
};

//The crew of drivers
std::vector<Rolling_stock_driver> firstDriverCrew
{
    driverList[0],
    driverList[1],
    driverList[2],
    driverList[3]
};

//The crew of drivers
std::vector<Rolling_stock_driver> secondDriverCrew
{
    driverList[4],
    driverList[5],
    driverList[6],
    driverList[7]
};

//Dispatcher staff
std::vector<Worker> dispatcherList
{
    Worker("Alex", "Simple", 20, "man", 3, true, 110000, 2, "Dispatch Department"),
    Worker("Mary", "Strange", 25, "woman", 5, true, 110000, 7, "Dispatch Department"),
    Worker("G", "Man", 50, "man", 0, false, 110000, 4, "Dispatch Department"),
    Worker("Ellie", "Sallinger", 52, "woman", 3, true, 110000, 30, "Dispatch Department")
};

//Rolling stock repair staff
std::vector<Worker> rollStRepairmanList
{
    Worker("Leonid", "Dendrovskyi", 65, "man", 6, true, 105000, 45, "Rolling Stock Repair Department"),
    Worker("Petro", "Dendy", 50, "man", 0, false, 110000, 4, "Rolling Stock Repair Department"),
    Worker("Lida", "K", 40, "woman", 1, true, 115000, 15, "Rolling Stock Repair Department"),
    Worker("Marta", "Blossom", 22, "woman", 0, false, 110000, 1, "Rolling Stock Repair Department"),
    Worker("Stepan", "Labudiak", 20, "man", 0, false, 120000, 3, "Rolling Stock Repair Department"),
    Worker("Antony", "Rab", 50, "man", 0, false, 110000, 4, "Rolling Stock Repair Department"),
    Worker("Evkakii", "Pidzapoinyi", 60, "man", 15, true, 118000, 42, "Rolling Stock Repair Department"),
    Worker("Vika", "Beauty", 19, "woman", 0, false, 109000, 1, "Rolling Stock Repair Department")
};

//The crew of rolling stock repairmen
std::vector<Worker> firstRollStRepairmanCrew
{
    rollStRepairmanList[0],
    rollStRepairmanList[1],
    rollStRepairmanList[2],
    rollStRepairmanList[3]
};

//The crew of rolling stock repairmen
std::vector<Worker> secondRollStRepairmanCrew
{
    rollStRepairmanList[4],
    rollStRepairmanList[5],
    rollStRepairmanList[6],
    rollStRepairmanList[7]
};

//Road repair staff
std::vector<Worker> roadRepairmanList
{
    Worker("Wiki", "Aidep", 30, "woman", 3, true, 102000, 8, "Road Repair Department"),
    Worker("Luke", "Sky", 54, "man", 0, false, 100000, 31, "Road Repair Department"),
    Worker("Lana", "Lux", 23, "woman", 0, false, 106000, 4, "Road Repair Department"),
    Worker("Piter", "Ripper", 50, "man", 5, true, 107000, 4, "Road Repair Department"),
    Worker("Sam", "Vector", 93, "man", 12, true, 108000, 4, "Road Repair Department"),
    Worker("Martin", "Pepe", 23, "man", 0, false, 107500, 4, "Road Repair Department"),
    Worker("Li", "A", 60, "woman", 4, true, 111000, 40, "Road Repair Department"),
    Worker("Andy", "Coocker", 50, "man", 0, false, 110000, 4, "Road Repair Department")
};

//The crew of road repairmen
std::vector<Worker> firstRoadRepairmanCrew
{
    roadRepairmanList[0],
    roadRepairmanList[1],
    roadRepairmanList[2],
    roadRepairmanList[3]
};

//The crew of road repairmen
std::vector<Worker> secondRoadRepairmanCrew
{
    roadRepairmanList[4],
    roadRepairmanList[5],
    roadRepairmanList[6],
    roadRepairmanList[7]
};

//Cash desk staff
std::vector<Worker> cashierList
{
    Worker("Maddie", "Mad", 60, "woman", 4, true, 111000, 40, "Cash Department"),
    Worker("Lisa", "Salt", 62, "woman", 10, true, 115050, 40, "Cash Department"),
    Worker("Isabella", "Damn", 75, "woman", 0, false, 100000, 55, "Cash Department"),
    Worker("Katie", "Dream", 66, "woman", 1, true, 111000, 46, "Cash Department")
};

//Warehouse staff
std::vector<Worker> warehousemanList
{
    Worker("Tom", "Dream", 66, "man", 1, true, 150000, 46, "Warehouse Department"),
    Worker("Teddie", "Bear", 67, "man", 6, true, 145000, 45, "Warehouse Department"),
    Worker("Daniel", "Founder", 66, "man", 1, true, 112000, 5, "Warehouse Department"),
    Worker("Roman", "Buriak", 60, "man", 2, true, 135000, 21, "Warehouse Department")
};

//Support staff
std::vector<Worker> helperList
{
    Worker("Roman", "Freeze", 35, "man", 2, true, 90000, 10, "Help Desk Department"),
    Worker("Lara", "Freeze", 28, "woman", 2, true, 95000, 7, "Help Desk Department")
};

//Accounting staff
std::vector<Worker> accounterList
{
    Worker("Tetiana", "Korobka", 35, "woman", 0, false, 149000, 10, "Accounting Department"),
    Worker("Iryna", "Med", 30, "woman", 1, true, 148500, 6, "Accounting Department")
};

std::vector<Ticket> ticketList
{
    Ticket("Kyiv-Lviv", 150.50),
    Ticket("Uzhhorod-Lviv", 75.50)
};

std::vector<Locomotive> locomList
{
    Locomotive(45, 1, 1974, 35, "LAZ", "diesel", 9576, 9, 150, "20.05.2022", 2, "2022", "Canceled", "-", "passenger", 9, "Kyiv-Lviv", 50),
    Locomotive(67, 2, 1975, 35, "LAZ", "diesel", 9214, 12, 143, "22.05.2022", 1, "2021", "Delayed", "technical", "cargo", 3, "Uzhhorod-Lviv", 5)
};

std::vector<Vagon> vagonList
{
    Vagon(122, 1, 1974, "LAZ", 9576, 5, 147, "20.05.2022", 2, "2022"),
    Vagon(123, 2, 1974, "LAZ", 9576, 6, 144, "20.05.2022", 2, "2022"),
    Vagon(124, 3, 1974, "LAZ", 9214, 12, 140, "22.05.2022", 1, "2022"),
    Vagon(125, 4, 1974, "LAZ", 9214, 10, 157, "22.05.2022", 1, "2022")
};