/*
 * Scheduler.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 *
 *      Chooses which process to run next also determines when its time to switch processes
 */

#include <queue>
#include "../includes/scheduler.h"

	//add a process, either a new one or one that
	//had been running on the CPU and has been preempted
	void Scheduler::add(PCB p){
		if(!p.isEmpty()){
		ready_q->push(p);

		return;
		}
		//if p is empty
		//call sort before returning

	}

	//get next process
	PCB Scheduler::getNext(){
		PCB tmp = ready_q->front();
		ready_q->pop();
		return tmp;
	}

	//returns true if there are no jobs in the readyQ
	//false otherwise
	bool Scheduler::isEmpty(){
		return ready_q->empty();
	}

	//if process has completed (used all its remaining_cpu_time) or
	//if we are using a preemptive scheduling algorithm and the
	//time slice is over then its time to switch processes
	//returns:
	//true - switch processes
	//false - do not switch
	bool   Scheduler::time_to_switch_processes(int tick_count, PCB &p){
		//process has completed (used all its remaining_cpu_time)
		//or
		//(using a preemptive scheduling algorithm AND time slice is over)
		//meaning tick_count is less than or equal to time slice to
		if(p.remaining_cpu_time <= 0 ||(preemptive = true && tick_count >= time_slice)){
			return true;
		}
		return false;
	}
