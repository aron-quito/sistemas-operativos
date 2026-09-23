#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
	cout<<" PID del proceso: "<<getpid()<<endl;
	cout<<" PID del proceso padre: "<<getppid()<<endl;
	sleep(20);
	return 0;
}
