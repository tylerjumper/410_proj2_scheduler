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
			//print the stated values at the tmp pointer
			std::cout<<"Process " << vec->at(i).process_number <<
						" Required CPU time:"<< vec->at(i).required_cpu_time <<
						" arrived:"<< vec->at(i).arrival_time <<
						" started:"<< vec->at(i).start_time <<
						" finished:"<< vec->at(i).finish_time <<std::endl;
		}
	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		float tmp;
		int i;
		//loop through vec, start_time minus arrival_time
		for(i = 0 ; i < int(vec->size()) ; i++){
			tmp += (vec->at(i).start_time - vec->at(i).arrival_time);
		}
		return tmp/(i+1);
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		float tmp;
		int i;
		for(i = 0 ; i < int(vec->size()) ; i++){
			tmp += (vec->at(i).start_time - vec->at(i).arrival_time);
		}
		return tmp/(i+1);
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time - required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		float tmp;
		int i;
		//loop through vec, finish_time minus arrival_time minus required_CPU_time
		for(i = 0 ; i < int(vec->size()) ; i++){
			std::cout<<"first :"<<av_wait_time<<std::endl;
			tmp += (vec->at(i).finish_time - vec->at(i).arrival_time - vec->at(i).required_cpu_time);
			std::cout<<"second :"<< av_wait_time<<std::endl;
		}
		return tmp/(i+1);
	}
