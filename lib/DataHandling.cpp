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
    // Function push data out to data storage
    

    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::out|std::ios::app);

   
    sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));


    std::string sSortBuffAut;
    std::string sSortBuffTit;
    bool bLoopJump = true;


    if(biblotek.is_open())
    {
        
        while(bLoopJump)
        {
            biblotek >> sSortBuffAut >> sSortBuffTit;
            sVpBuff.push_back(std::make_pair(sSortBuffAut, sSortBuffTit));
            if(biblotek.eof()){bLoopJump = false;
                                std::cout << "done with cooping data storage" << std::endl;};
        }
        
        std::sort(sVpBuff.begin(), sVpBuff.end());

        for(int i = 0; i < sVpBuff.size(); i++)
        {
            std::transform(sVpBuff[i].first.begin(), sVpBuff[i].first.end(), sVpBuff[i].first.begin(), ::tolower);
            std::transform(sVpBuff[i].second.begin(), sVpBuff[i].second.end(), sVpBuff[i].second.begin(), ::tolower);
            biblotek << sVpBuff[i].first << sVpBuff[i].second << std::endl;
        }

        std::cout << "done with pushing data to sotorage" << std::endl;
    }

         
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