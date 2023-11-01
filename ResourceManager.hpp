#pragma once

#include "Resource.hpp"

class ResourceManager
{
        public:
        //kontruktor domyslny, czerpiacy z Resource
        ResourceManager() : res() {}

        //funkcja zwracajaca wartosc metody get dla obiektu klasy Resource
        double get(Resource obiekt)
        {
            return obiekt.get();
        }

        //METODY SPECJALNE:

        //1.Destruktor
        ~ResourceManager()
        {
            //std::cout << "destruktor nisczy obiekt" << "\n";
        }

        //2.Konstruktor kopiujacy
        ResourceManager(const ResourceManager& rm)
        {

        }

        //3.Kopiujacy operator przypisania
        ResourceManager& operator=(const ResourceManager& rm)
        {
            
        }




    private:
        Resource res; //zarządzany obiekt klasy resource
};
