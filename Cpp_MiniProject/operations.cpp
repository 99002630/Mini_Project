#include <sstream>
#include <iostream>
#include<fstream>
#include<vector>
#include<list>
//#include "base.h"
#include "operations.h"
#include<iostream>

using namespace std;

list <base> datal;
derived::derived(){}
derived::derived(string m_name,string m_calo,string m_fat,string m_carbo, string m_fiber,string m_pro, string m_vit, string m_cal, string m_iron):base(m_name,m_calo,m_fat, m_carbo, m_fiber, m_pro,m_vit,m_cal,m_iron){}

vector<std::string> derived::make_data(std::string line)
{
vector<std::string> data ;
//vector<string> :: iterator iter;
std::string word;
std::stringstream s(line);  
data.clear();   
    while (getline(s, word, ',')) 
{ 
    data.push_back(word);
} 
return data;
}

void derived::get_data()
{
  std::string line,word,temp;
  ifstream data;
    data.open("food1.csv");
    int row_count =0 ;
    while(getline(data,line))
    {
        row_count +=1;

      //  std::stringstream  lineStream(line);
        std::string        cell;
        int column_count = 0 ;
	vector<string> dat = make_data(line);
	//std::cout<<dat[2]<<endl;
	datal.push_back(base(dat[0],dat[1],dat[2],dat[3],dat[4],dat[5],dat[6],dat[7],dat[8]));
    }
  /*list<base>::iterator iter;
	for(iter=datal.begin();iter!=datal.end;++iter)
	iter->display();*/	
}
base* derived::get_detailsbyname(string name)
{
    std::list<base>::iterator iter;
    for(iter=datal.begin();iter!=datal.end();++iter)
    { //cout<<"hii"<<endl;
        if(iter->get_name()==name)
        {	//cout<<"hii"<<endl;
            return &(*iter);
        }
    }
   return NULL;
}

int derived::get_maxprotein()
{
	int temp, max;
	max=0;
       temp=0;
 	std::list<base>::iterator iter;
	auto iter1=iter;
	for(iter=datal.begin();iter!=datal.end();++iter)	
 	{
		//std::cout<<iter->getdate;
	temp=stoi(iter->get_protein());
        if(temp>max)
        {
            max=temp;
	    iter1=iter;
        }
	}
	//iter1->display_date();
	//cout<<max<<endl;
       return(max);
		
}
int derived::get_minfat()

{
	int temp, min;
	min=1000000;
        temp=0;
 	std::list<base>::iterator iter;
	auto iter1=iter;
	for(iter=datal.begin();iter!=datal.end();++iter)	
 	{
		//std::cout<<iter->getdate;
	temp=stoi(iter->get_protein());
        if(temp<min)
        {
            min=temp;
	    iter1=iter;
        }
	}
	//iter1->display_date();
	//cout<<min<<endl;
	return(min);	
}

/*int main()
{
	derived d;
	//d.make_data();
	d.get_data();
	d.get_detailsbyname("BellPepper");
return 0;
}*/
