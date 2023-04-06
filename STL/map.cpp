#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
  map<string, string> planets;

  planets["Mercury"] = "Hot planet";
  planets["Venus"] = "Atmosphere of sulfuric acid";
  planets["Earth"] = "Home";
  planets["Mars"] = "The Red Planet";
  planets["Jupiter"] = "Largest planet in our solar system";
  planets["Saturn"] = "Has rings";
  planets["Uranus"] = "Tilts on it's side";
  planets["Neptune"] = "1500 mile-per-hour winds";
  planets["Pluto"] = "Dwarf planet";
  cout<<"Entry of Mercury - "<<planets["Mercury"]
    <<endl<<endl;
  if(planets.find("Mercury") != planets.end())
    cout << "Mercury is in the map. "<< endl;
  if(planets.find("Ceres") == planets.end())
    cout <<"Ceres is not in the map." << endl << endl;
  map<string,string>:: const_iterator iter;
  for(iter = planets.begin(); iter != planets.end(); iter++)
  {
    cout << iter->first<<" - "<<iter->second<<endl;

  }

  return 0;
}
