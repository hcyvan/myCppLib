//This file is use to test the python-like classes
#include "pyList.h"
#include <iostream>
int main()
{
	List a={1,"cheng",'z',"cheng",1.2};
	a.show_lst();
	a.pyappend("yi");
	a.show_lst();
	std::cout <<a.pycount("cheng")<<std::endl;
}
