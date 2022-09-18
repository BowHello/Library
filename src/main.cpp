#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <utility>
#include <string>

int main(int, char**) {
    
   
    std::vector <std::pair <std::string, std::string>> sVpBuff;

    std::fstream biblotek;
    biblotek.open("biblotek.txt", std::ios::out|std::ios::in);
//  biblotek.open("biblotek.txt", std::ios::out|std::ios::app|std::ios::in);
   
   // sVpBuff.push_back(std::make_pair(sAutherSurname, sTitle));

    if(biblotek.is_open())
    { 
      /* 
        for(int i = 0; i < sVpBuff.size(); i++)
        {
            biblotek << sVpBuff[i].first << sVpBuff[i].second << std::endl;

        }
*/
        std::string sInBuffData1;
        std::string sInBuffData2;
/*
      while(true)
      {
            biblotek >> sInBuffData1 >> sInBuffData2;
            std::cout << sInBuffData1 << " " << sInBuffData2 << std::endl;
            if(biblotek.eof()){goto LOOP;}
      } 
        LOOP:
        */
        std::cout << " -------------------------- " << std::endl;

        std::string sInBuffData3;
        std::string sInBuffData4;

        
        while(true)
        {
            biblotek >> sInBuffData3 >> sInBuffData4;
            sVpBuff.push_back(std::make_pair(sInBuffData3, sInBuffData4));
            if(biblotek.eof()){break;};
        }
    }
    biblotek.close();

    std::sort(sVpBuff.begin(), sVpBuff.end());

    for(int k = 0;k < sVpBuff.size();k++)
    {
        std::cout << sVpBuff[k].first << " " << sVpBuff[k].second << std::endl;
    }
    


    biblotek.close();

}
