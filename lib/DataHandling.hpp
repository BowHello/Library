#ifndef dataHandlingHPP
#define dataHandlingHPP

#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>


class dataInterface
{
    public:
    int pushData(std::string sAutherSurname,  std::string sTitle);
    int pullData();
    int searchData();
    
    private:
    std::vector <std::pair <std::string, std::string>> sVpBuff;
};
#endif