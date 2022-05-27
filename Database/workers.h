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

// std::vector<Administration> adminList;

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