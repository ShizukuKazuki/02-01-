#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
    std::list<const char*>eki{"Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamchi","Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya",
        "Harajuku","Yoyogi","Shinjuki","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka","Sugamo","Komagome","Tabata","Nippori",
        "Uguisudani","Ueno","Okachimachi","Akihabara","Kanda\n"};
    eki.push_front("1970\n");
    for (std::list<const char*>::iterator itr = eki.begin(); itr != eki.end(); ++itr)
    {
        if (*itr == "Nippori")
        {

            itr = eki.insert(itr, "Nishi-Nippori");
            ++itr;
        }
        std::cout << *itr << "   ";
    }
    //printf("" );
    eki.pop_front();
 
    eki.push_front("\n2019\n");
    for (std::list<const char*>::iterator itr = eki.begin(); itr != eki.end(); ++itr)
    {
        if (*itr == "Shinagawa")
        {

            itr = eki.insert(itr, "Takanawa Gateway");
            ++itr;
        }
        std::cout << *itr << "   ";
    }
    eki.pop_front();

    eki.push_front("\n2022\n");
    for (auto itr = eki.begin(); itr != eki.end(); ++itr)
    {
        std::cout << *itr << "   ";
    }
    return 0;
}