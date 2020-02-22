/*
 * SchedulerSRTF.h
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *     implements SRTF scheduling algorithm
 *     pre-emptive
 */

#include "../includes/scheduler_SRTF.h"

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
		return Scheduler::time_to_switch_processes(tick_count, p);
;
	}

	//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p) or time_to_switch_processes is called
	void Scheduler_SRTF::sort(){
		//create vector

		//loop through and put queue into a vector
		for(int i = 0 ; i < int(ready_q->size()) ; i++){

		}

	}

