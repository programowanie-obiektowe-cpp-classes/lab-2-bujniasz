#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
        //kontruktor domyslny, czerpiacy z Resource
        ResourceManager() : res() {}

        //funkcja zwracajaca wartosc metody get dla obiektu klasy Resource
        double get()
        {
            return res.get();
        }

        //METODY SPECJALNE:

        //1.Destruktor
        ~ResourceManager() = default;


        //2.Konstruktor kopiujacy
        ResourceManager(const ResourceManager& rm) : res(rm.res)
        {

        }

        //3.Kopiujacy operator przypisania
        ResourceManager& operator=(const ResourceManager& rm)
        {
            if (this != &rm)
            {
                res = rm.res;
            }
            return *this;
        }




    private:
        Resource res; //zarządzany obiekt klasy resource
};
