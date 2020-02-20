/*
 * scheduler_FIFO.h
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */


#include "../includes/scheduler_FIFO.h"

//class Scheduler_FIFO: public Scheduler {
//public:
//	//this is a non - preemptive scheduler, set the preemptive member variable to false
//	//when calling the base class
//	//I thinking fixing the scheduler base class will fix this
//	Scheduler_FIFO(std::queue<PCB> &queue):Scheduler(queue,false,UNINITIALIZED){};
//	virtual ~Scheduler_FIFO(){};

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
		return false;
	}

	//FIFO - not preemptive - no sorting needed
	void Scheduler_FIFO::sort(){

	}
//};

