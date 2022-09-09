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

   
    //std::vector <std::pair <std::string, std::string>> sVpBuff;

    sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));

    if(biblotek.is_open())
    {
        
    }

    //sorter dataen før den sendet til bake

         
    biblotek.close();

    return 0;
}

int dataInterface::pullData()
{
 /*

    På presser jeg ut data på "std::cout". Senere vil jeg
    endre det til "return" slik at jeg ikke får det i
    terminalen 
    info om dette ligger på:
    https://stackoverflow.com/questions/15138785/how-to-read-a-file-into-vector-in-c

    */

    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::in);

    std::istream_iterator <std::string> iterator(biblotek), end; // Kopierer .txt filen med å iterere igjennom dataen og kopiere

    std::vector <std::string>  data(iterator, end); // Kopierer dataen inn på vecteren

    std::sort(data.begin(), data.end()); // Sortere dataen etter rekkefølge

// her går det igjennom vekteren og printer den ut på terminalen.
    for(auto i: data)
    {
        std::cout << i << std::endl;
    }    

    biblotek.close();

    return 0;

}


int dataInterface::searchData()
{

    char liste[200];

    std::string ole;

    



    return 0;
}




#endif