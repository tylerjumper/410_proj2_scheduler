/*
 * scheduler_RR.h
 *
 *  Created on: Feb, 18, 2020
 *      Author: Jumper
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */

#include "scheduler.h"

class Scheduler_RR: public Scheduler {
public:

	//this is a preemptive scheduler,set the preemptive member variable to true
	//when calling the base class
	Scheduler_RR(std::queue<PCB> &queue,int time_slice =UNINITIALIZED):Scheduler(queue,true,time_slice){};
	virtual ~Scheduler_RR(){};

	//override base class behaviour if necessary, otherwise call it
	virtual bool  time_to_switch_processes(int tick_count, PCB &p){
		return false;
	}

	//RR - preemptive - no sorting of ready_q needed.
	virtual void sort(){

	}
};

