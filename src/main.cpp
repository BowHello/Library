#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <utility>
#include <string>

int main(int, char**) {
    
    std::string sAutherSurname = "bob";  
    std::string sTitle = "Novelle";
    std::vector <std::pair <std::string, std::string>> sVpBuff;

    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::out|std::ios::app|std::ios::in);

   
    sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));

    if(biblotek.is_open())
    {
        for(int i = 0; i < sVpBuff.size(); i++)
        {
            biblotek << sVpBuff[i].first << sVpBuff[i].second << std::endl;

        }

        std::string fBuff;
        std::string tBuff;
        std::vector <std::pair <std::string, std::string>> sVpConvBuff;

        int info = biblotek.tellg();



        while(!biblotek.eof())
        {
            biblotek.getline(fBuff,500, '\n');
            std::cout << fBuff << std::endl;
        }
/*

        for(int j = 0; j < biblotek.tellg(); j++)
        {
            biblotek >> fBuff;
            //sVpConvBuff.push_back(make_pair(fBuff, tBuff));
            std::cout << fBuff << std::endl;
        } 

        for(int f = 0; f < sVpConvBuff.size(); f++)
        {
            std::cout << sVpConvBuff.at(f).first << " " << sVpConvBuff.at(f).second << std::endl;
        }
*/

    }


    biblotek.close();

}
