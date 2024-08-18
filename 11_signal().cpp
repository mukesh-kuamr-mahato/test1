#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signal)
{
    cout << "Interrupt "<<signal<<" signal" << endl;


    exit(signal);

}

int main()
{
    signal(SIGINT, signalHandler);
    
    while(1)
    {
        cout << "Hello World!" << endl;
        sleep(1);
    }
}
