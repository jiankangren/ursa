#include <task.h>
#include <stdlib.h>

Message msg;

int main()
{

	int i,t;

    Echo("synthetic28 task F started.");
	Echo(itoa(GetTick()));

for(i=0;i<100;i++){
	
		Receive(&msg,taskE_28);
			for(t=0;t<1000;t++){
		}
		Receive(&msg,taskD_28);

	}

	Echo(itoa(GetTick()));
    Echo("synthetic28 task F finished.");

	exit();

}