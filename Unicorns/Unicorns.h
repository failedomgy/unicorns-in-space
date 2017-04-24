/*
 * unicorns.h
 *
 *  Created on: Apr 5, 2017
 *      Author: thea
 */

#ifndef UNICORNS_H_
#define UNICORNS_H_
using namespace std;

class unicorn{
private:
	string name ;
	string color;
	string fur;
	string f_name;
	bool friends;
public:
	void setNAME(string set);
	void setCOLOR(string set);
	void setFUR(string set);
	void setF_NAME(string set);
	void setFRIEND(bool set);
	string tellmeNAME();
	string tellmeCOLOR();
	string tellmeFUR();
	string tellmeF_NAME();
	bool tellmeFRIEND();

};




#endif /* UNICORNS_H_ */
