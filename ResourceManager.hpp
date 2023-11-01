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

    private:
        std::unique_ptr<Resource> res; //zarządzany obiekt klasy resource - wskaznik inteligentny
};
