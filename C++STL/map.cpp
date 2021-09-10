//MAPS IN STL
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    //making a marks map
    map<string, int> marksMap;
    marksMap["Abinash"] = 98;
    marksMap["Aayush"] = 90;
    marksMap["Deep"] = 92;
    marksMap["Aaquib"] = 10;
    marksMap.insert({{"Tanisha", 97}, {"Rucha", 90}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "MarksMap size returns: " << marksMap.size() << endl;
    cout << "MarksMap max_size returns: " << marksMap.max_size() << endl;
    cout << "MarksMap empty returns: " << marksMap.empty() << endl;
}