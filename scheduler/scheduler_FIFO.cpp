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

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
		return Scheduler::time_to_switch_processes(tick_count, p);
	}

	//FIFO - not preemptive - no sorting needed
	void Scheduler_FIFO::sort(){

	}

