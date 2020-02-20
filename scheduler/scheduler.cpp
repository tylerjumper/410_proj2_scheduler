/*
 * Scheduler.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 *
 *      Chooses which process to run next also determines when its time to switch processes
 */


#include <queue>
//#include "constants.h"
//#include "PCB.h"
#include "../includes/scheduler.h"

//class Scheduler {
//	protected:
//	//holds jobs that are in memory and ready to run
//	//for this program they are leaded into memory at arrival time
//	//this is initialized from a reference, it cannot be null
//	std::queue<PCB> *ready_q;
//
//	//preemptive algorithm or not
//	bool preemptive;
//
//	//number of clock ticks a process can run before its switched out
//	int     time_slice;
//public:
//	Scheduler::Scheduler(std::queue<PCB> &queue, bool preemptive, int time_slice) :
//		ready_q(&queue), preemptive(preemptive), time_slice(time_slice){
//
//	}
//	Scheduler::~Scheduler(void) {
//
//	}

	//add a process, either a new one or one that
	//had been running on the CPU and has been preempted
	void Scheduler::add(PCB p){
		if(!p.isEmpty()){
		ready_q->push(p);
		}
		//if p is empty
	}

	//get next process
	PCB Scheduler::getNext(){
		return ready_q->front();
	}

	//returns true if there are no jobs in the readyQ
	//false otherwise
	bool Scheduler::isEmpty(){
		if(ready_q->empty()){
			return true;
		}
			return false;
	}

	//if process has completed (used all its remaining_cpu_time) or
	//if we are using a preemptive scheduling algorithm and the
	//timeslice is over then its time to switch processes
	//returns:
	//true - switch processes
	//false - do not switch
	bool   Scheduler::time_to_switch_processes(int tick_count, PCB &p){
		return false;
	}

	// sort  ready_q based on the scheduler algorithm used whenever add(PCB p) is called
	//pure virtual function
	void Scheduler::sort(){

	}

//};
