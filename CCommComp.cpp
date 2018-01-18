/*
 * CCommComp.cpp
 *
 *  Created on: Dec 14, 2017
 *      Author: vmuser
 */

#include "CCommComp.h"


CCommComp::CCommComp(CContainer &pContainer) : myContainer(pContainer)
{
}

void CCommComp::run()
{
	SContent myContent;


	while (true)
	{
		myContainer.getContent(true, myContent);		// semaphore take
		cout<<"Torque:"<<myContent.mMotorTorque<<endl;


		// Socket an Matlab
		mServer.transmitMessage(myContent);

	}

}

void CCommComp::init()
{
	cout<<"CommunicationInit"<<endl;
	mServer.init();
	mServer.waitForClient();

}
