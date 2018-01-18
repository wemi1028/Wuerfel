/*
 * main.cpp
 *
 *  Created on: Dec 11, 2017
 *      Author: Michael Weber, Nikola Fischer
 *      Aufgabe 1-5, Aufgabenblatt 3
 */
#include <iostream>
#include <unistd.h>
#include "CContainer.h"
#include "CThread.h"
#include "IRunnable.h"
#include "CCommComp.h"
#include "CControlComp.h"


using namespace std;

CContainer myContainer;
CCommComp CommuncationObject(myContainer);
CControlComp ControlObject(myContainer);


int main()
{
	CThread CCommCompThread(&CommuncationObject,CThread::PRIORITY_ABOVE_NORM);
	CThread CControlCompThread(&ControlObject,CThread::PRIORITY_ABOVE_NORM);

	CCommCompThread.start();
	CControlCompThread.start();

	CCommCompThread.join();
	CControlCompThread.join();

	return 0;
}



