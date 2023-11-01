#pragma once

#include "Resource.hpp"
#include <memory> //biblioteka do wskaznikow inteligentnych

class ResourceManager
{
    public:
        //kontruktor domyslny, czerpiacy z Resource, z ucyiem wsk intelegentnego
        ResourceManager() : res(std::make_unique<Resource>()) {}

        //funkcja zwracajaca wartosc metody get dla obiektu klasy Resource
        double get()
        {
            return res->get();
        }

        //METODY SPECJALNE:

        //1.Destruktor
        ~ResourceManager()
        {
        }

        //2.Konstruktor kopiujacy
        ResourceManager(const ResourceManager& rm) : res(std::make_unique<Resource>(*rm.res)) 
        {
        }

        //3.Kopiujacy operator przypisania
        ResourceManager& operator=(const ResourceManager& rm)
        {
            if (this != &rm)
            {
                res = std::make_unique<Resource>(*rm.res);
            }
            return *this;
        }

    private:
        std::unique_ptr<Resource> res; //zarządzany obiekt klasy resource - wskaznik inteligentny
};
