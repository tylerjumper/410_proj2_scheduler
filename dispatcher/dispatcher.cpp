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
		CPU *cpu_var = new CPU();
		PCB pcb_var = cpu_var->get_COPY_of_Current_Process();
		return pcb_var;
	}

	//place the current process on the CPU for execution
	void Dispatcher::put_on_CPU(PCB  &process){
		CPU *cpu_var = new CPU();
		cpu_var->put_process_on_core(process);
	}

	//is CPU idle or working
	bool Dispatcher::isValidJobOnCPU(){
		return is_valid_job_on_cpu;
	}
