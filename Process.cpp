#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Process.h"

Process::Process(std::string pid, int iat, int cbt, int nb, int it){
	proc_id = pid;
	initial_arrival_time = iat;
	cpu_burst_time = cbt;
	num_bursts = nb;
	io_time = it;
}

std::string Process::get_proc_id() const {return proc_id;}


void simulate_FCFS(std::vector<Process> processes) {
  
  for (unsigned int timer = 0; timer < 1000; ++timer) {
		if (timer == 0) {
			std::cout << "time " << timer << "ms: <event-details> [Q <queue-contents>]\n";
		}
  }
}