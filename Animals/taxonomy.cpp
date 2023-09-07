// #include stdio.h
#include <string>

/*
What to include in the class :
A
*/

enum class Taxonomy {
    Kingdom,
    Phylum,
    Class,
    Order,
    Family,
    Genus,
    Species
};

class Creatures {
    public :
       Creature (
        const std::string& scientific_name,
        const std::string& common_name)
        :
       scientific_name(scientific_name)
       common_name(common_name),
       ) 
       f
