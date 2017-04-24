/*
 * bla.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: thea
 */

#include <iostream>
#include "Unicorns.h"
using namespace std;

void unicorn::setNAME(string set){ name = set;}
void unicorn::setCOLOR(string set){ color = set;}
void unicorn::setFUR(string set){ fur = set;}
void unicorn::setF_NAME(string set){ f_name = set;}
void unicorn::setFRIEND(bool set){ friends = set;}
string unicorn::tellmeNAME() {return name;}
string unicorn::tellmeCOLOR() {return color;}
string unicorn::tellmeFUR() {return fur;}
string unicorn::tellmeF_NAME() {return f_name;}
bool unicorn::tellmeFRIEND() {return friends;}



unicorn test() {
		char c;
		string name;
		string color;
		string fur;
		string f_name;
		unicorn uni;
		bool friends;
		cout << "Eingabe (j,n):" << endl;
		cin >> c ;
		if( c == 'j'){
			cout << "YEAHHHH. Hello! Who are you?" << endl;
			cin >> name;
			uni.setNAME(name);
			cout << "Hey there " << name << " ! What color are you?" << endl;
			cin >> color;
			uni.setCOLOR(color);
			cout << "Please tell us the magical texture of your furrrr?" << endl;
			cin >> fur;
			uni.setFUR(fur);
			cout << color <<" "<< fur <<" "<< "unicorns" << endl;
			cout << "dancing on rainbows" << endl;
			cout << "Do you have a best friend?(j,n)" << endl;
			cin >> c;
			if (c == 'j'){ cout << "Yayy ^_^ What's the name of your friend?" << endl;
				cin >> f_name;
				uni.setF_NAME(f_name);
			}
			else{ cout << "Owwww.. You have no friends. How sad :(" << endl;
				cout << "Than I'll be your friend!" << endl;
				f_name = "Me";
				uni.setF_NAME(f_name);
			}
			cout << "Do you want to continue? (j,n)" << endl;
			cin >> c;
			if (c == 'j'){ cout << color <<" "<< fur <<" "<< "unicorns" << endl;
				cout << "dancing on rainbows" << endl;
				cout << "One last time? For friendship?" << endl;
				cin >> c;
				if (c == 'j'){ cout << color <<" "<< fur <<" "<< "unicorns" << endl;
					cout << "dancing on rainbows" << endl;
					cout << "Congrats you and " << f_name << " are friends now!" << endl;
					uni.setFRIEND(true);
				}
				else{ cout << "BUUUHHHH!!! U SUCK!!!" << endl;
				uni.setFRIEND(false);
				}
			}
			else{ cout << "BUUUHHHH!!! U SUCK!!!" << endl;
			uni.setFRIEND(false);
			}

		}
		else{
			cout << "NOOOO. U SUCK!!!" << endl;
			uni.setFRIEND(false);
		}
		return uni;
}


int main(){

	unicorn uni;
	uni = test();
	if(uni.tellmeFRIEND() == true){
	cout << uni.tellmeF_NAME() << " and " << uni.tellmeNAME() << " are best friends for ever!!!!!" << endl;
	}
	else cout << "Wow... You really suck and have no friends!" << endl;
	return 0;
}



