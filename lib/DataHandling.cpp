#ifndef dataHandlingCPP
#define dataHandlingCPP

#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iterator>
#include <vector>
#include <utility>


#include "DataHandling.hpp"

int dataInterface::pushData(std::string sAutherSurname,  std::string sTitle)
{

    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::out|std::ios::app);

   
    sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));

    if(biblotek.is_open())
    {
        for(int i = 0; i < sVpBuff.size(); i++)
        {
            
        }
    }

    //sorter dataen før den sendet til bake

         
    biblotek.close();

    return 0;
}

int dataInterface::pullData()
{
    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::in);

    if(biblotek.is_open())
    {
        std::string sAutherSurname;  
        std::string sTitle;

        while(true)
        {
            biblotek >> sAutherSurname >> sTitle;
            sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));
        }
    }
    biblotek.close();

    std::sort(sVpBuff.begin(), sVpBuff.end());

    for(int k = 0;k < sVpBuff.size();k++)
    {
        std::cout << sVpBuff[k].first << sVpBuff[k].second << std::endl;
    }

    return 0;

}


int dataInterface::searchData()
{

    char liste[200];

    std::string ole;

    



    return 0;
}




#endif