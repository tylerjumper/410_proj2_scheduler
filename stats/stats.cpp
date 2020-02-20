/*
 * Stats.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 */

#include "../includes/stats.h"

	//something needs to be done about this
    //initalize things and find how to access the PCB values through vec
	//also need to run calc stats but idk where
	Stats::Stats(std::vector<PCB> &finished_vector){
		//Stats::calcStats();
		Stats::av_response_time = UNINITIALIZED;
		Stats::av_turnaround_time = UNINITIALIZED;
		Stats::av_wait_time = UNINITIALIZED;
		Stats::vec = &finished_vector;
	}

	//loops thru vec, prints 1 line for each process using the following format
	//Process 1 Required CPU time:2  arrived:0 started:0 finished:2
	//if there are 10 processes in vector, should print 10 lines
	void Stats::showAllProcessInfo(){
		//loop through vec
		for(int i = 0 ; i < int(vec->size()) ; i++){
			//create a tmp pointer equal to the value at vec[i]
//			PCB *tmp = vec[i];
//			//print the stated values at the tmp pointer
//			std::cout<<"Process " << tmp->process_number <<" Required CPU time:"<<
//						tmp->required_cpu_time <<" arrived:"<< tmp->arrival_time <<" started:"<< tmp->start_time <<
//						" finished:"<< tmp->finish_time <<std::endl;
		}
	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		//response_time per process = start_time - arrival_time
		//returns average over all processes

		//loop through vec, start_time minus arrival_time
		//set av_response_time equal to the sum difference of the two and return it
//		for(int i = 0 ; i < int(vec->size()) ; i++){
//			//create a tmp pointer equal to the value at vec[i]
//			PCB *tmp = &vec[i];
//			av_response_time = (tmp->start_time - tmp->arrival_time);
//		}
		return 0.0;
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		//turnaround time per process = finish_time - arrival_time
		//returns average over all processes

		//loop through vec, finish_time minus arrival_time
		//set av_turnaround_time equal to the sum difference of the two and return it
		return 0.0;
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time-required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		//wait time per process = finish_time - arrival_time-required_CPU_time
		//returns average over all processes

		//loop through vec, finish_time minus arrival_time minus required_CPU_time
		//set av_wait_time equal to the sum difference of the two and return it
		return 0.0;
	}
