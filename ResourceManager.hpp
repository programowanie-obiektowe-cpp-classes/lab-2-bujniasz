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

    private:
        Resource res; //zarządzany obiekt klasy resource
};
