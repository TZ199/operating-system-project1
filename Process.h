class Process {

public:
	Process(std::string pid, int iat, int cbt, int nb, int it);
	std::string get_proc_id() const;

private:
	std::string proc_id;
	int initial_arrival_time;
	int cpu_burst_time;
	int num_bursts;
	int io_time;
};

void simulate_FCFS(std::vector<Process> processes);