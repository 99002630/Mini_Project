#ifndef __OPERATIONS_H
#define OPERATIONS_H
#include <string>
#include<list>
#include<vector>
#include "base.h"

using namespace std;



class derived : public base
{
	public:
	derived();
	derived(string,string,string,string,string,string,string,string,string);
	base* get_detailsbyname(string);
	int get_maxprotein();
	int get_minfat();
	int get_avgcalories();
	void display();
	void get_data();
	vector<string> make_data(string);
	//void display();
};
#endif
