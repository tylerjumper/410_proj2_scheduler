/*
 * Stats.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 */

//#include <vector>
//#include "../includes/PCB.h"
#include "../includes/stats.h"

//class Stats {
//	private:
//		std::vector<PCB> *vec;
//
//		//does the work (only needs to run once)
//		void calcStats();
//
//		//calcStats() saves the results here
//		float av_wait_time;
//		float av_turnaround_time;
//		float av_response_time;
//
//public:
	Stats::Stats(std::vector<PCB> &finished_vector){

	}
	//virtual ~Stats(){};

	//loops thru vec, prints 1 line for each process using the following format
	//Process 1 Required CPU time:2  arrived:0 started:0 finished:2
	//if there are 10 processes in vector, should print 10 lines
	void Stats::showAllProcessInfo(){

	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		return 0.0;
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		return 0.0;
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time-required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		return 0.0;
	}
//};
