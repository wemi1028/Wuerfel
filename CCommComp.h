/*
 * CCommComp.h
 *
 *  Created on: Dec 11, 2017
 *      Author: vmuser
 */

#ifndef CCOMMCOMP_H_
#define CCOMMCOMP_H_
#include "CContainer.h"
#include "IRunnable.h"
#include "CServer.h"
#include "SContent.h"


#include <iostream>

using namespace std;

class CCommComp: public IRunnable
{
public:
	CCommComp(CContainer &pContainer);

	void run();
	void init();

private:
	CContainer &myContainer;
	CServer mServer;


};


#endif /* CCOMMCOMP_H_ */
