#include <iostream>;
#include <string>;
using std::string;

class Zoo{
    public:
        string Species;
        int Age;
        int Weight;
        string Id;
        string Sex;
        string KnownFor;
        string Diet;
        string Name;

    void Details() {
        std::cout << "Species: " << Species << std::endl;
        std::cout << "Age: " << Age << std::endl;
        std::cout << "Weight: " << Weight << std::endl;
        std::cout << "Id: " << Id << std::endl;
        std::cout << "Sex: " << Sex << std::endl;
        std::cout << "Known For: " << KnownFor << std::endl;
        std::cout << "Diet: " << Diet << std::endl;
        std::cout << "Name: " << Name << std::endl;
    };

    bool isHerbivore(){
        return Diet == "herbivore";
    }

    bool isCarnivore(){
        return Diet == "carnivore";
    }
    bool isOmniivore(){
        return Diet == "omnivore";
    }
};
