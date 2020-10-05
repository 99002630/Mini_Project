#ifndef __base_h
#define __base_h
#include <string>
#include<list>
#include<vector>
using namespace std;
class base
{
	string name;
	string calories;
	string fat;
    string carbohydrates;
    string fiber;
    string protein;
    string vitaminA;
    string calcium;
    string iron;

	public:
	base();
	base(string,string,string,string,string,string,string,string,string);
	string get_name();
	string get_calories();
	string get_fat();
	string get_carbohydrates();
	string get_fiber();
	string get_protein();
	string get_vitaminA();
	string get_calcium();
	string get_iron();
	//list<base> get_data();
	//vector<string> make_data(string);
	void display();
};
#endif
