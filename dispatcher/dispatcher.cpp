/*
 * Dispatcher.h
 *
 *  Created on: Feb 18, 2020
 *      Author: Jumper
 *
 *      moves processes on and off the CPU
 */

#include "../includes/dispatcher.h"

	//pull current process (if any) off CPU and return it
	//if nothing on CPU returns an uninitialized PCB
	PCB Dispatcher::get_from_CPU(){
		if(!is_valid_job_on_cpu){
			return PCB();
		}
		is_valid_job_on_cpu = false;
		PCB pcb_var = cpu->get_process_off_core();
		return pcb_var;
	}

	//place the current process on the CPU for execution
	void Dispatcher::put_on_CPU(PCB  &process){
		if(!is_valid_job_on_cpu){
			is_valid_job_on_cpu = true;
			cpu->put_process_on_core(process);
		}
	}

	//is CPU idle or working
	bool Dispatcher::isValidJobOnCPU(){
		return is_valid_job_on_cpu;
	}
