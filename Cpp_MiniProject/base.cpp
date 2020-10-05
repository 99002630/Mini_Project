#include "base.h"
#include <list>
#include <iterator>
#include<iostream>
#include <fstream>
//#include <ofstream>
#include <sstream>
#include <iostream>
#include<vector>
base::base(){}
base::base(string m_name,string m_calo,string m_fat,string m_carbo, string m_fiber,string m_pro, string m_vit, string m_cal, string m_iron):name(m_name),calories(m_calo),fat(m_fat),carbohydrates(m_carbo),fiber(m_fiber),protein(m_pro),vitaminA(m_vit),calcium(m_cal),iron(m_iron){}
string base::get_name()
{
	return(name);
}
string base::get_calories()
{
	return(calories);
}
string base::get_fat()
{
	return(fat);
}
string base::get_carbohydrates()
{
	return(carbohydrates);
}
string base::get_fiber()
{
	return(fiber);
}
string base::get_protein()
{
	return(protein);
}
string base::get_vitaminA()
{
	return(vitaminA);
}
string base::get_calcium()
{
	return(calcium);
}
string base::get_iron()
{
	return(iron);
}

void base::display()
{
	cout<< name;
	cout<< calories;
	cout<< fat;
    cout<< carbohydrates;
    cout<<fiber;
    cout<< protein;
    cout<< vitaminA;
    cout<< calcium;
    cout<< iron;
}
