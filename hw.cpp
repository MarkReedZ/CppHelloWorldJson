#include <iostream>
#include <iomanip>
#include "json.hpp"

using json = nlohmann::json;

int main()
{
    json j =
    {
        {"User", "Mark"},
        {"None", nullptr},
        {"True", true},
        {"Friends", 
            {
                {
                  {"name","Kevin"},
                  {"number",1},
                },
                {
                  {"name","Tom"},
                  {"number",2},
                }
            }
        },
        {"Favorite Numbers", {1, 2, 3}},
    };

    // Add a new list
    j["Installed Apps"]["games"] = {"Hell Divers", "Vermintide"};

    // Parse a (raw) json string
    auto jlst = json::parse(R"([1,2,3,4,5])");
    j["New List"] = jlst;

    auto sz = j.size();
    std::cout << sz << " elements" << std::endl;

    // pretty print with indent of 4 spaces
    std::cout << std::setw(4) << j << '\n';

    std::string s = j.dump();

}


/*
    // read a JSON file
    std::ifstream i("file.json");
    json j;
    i >> j;

    std::ofstream o("out.json");
    o << j << std::endl;
*/
