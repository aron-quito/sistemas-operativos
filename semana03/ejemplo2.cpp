#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
	cout<<"Inicio del programa"<<"\n";
	fork();
	fork();
	cout<<"Proceso PID = "<<getpid()<<", PPID ="<<getppid()<<"\n";
	sleep(20);
	return 0;
}
