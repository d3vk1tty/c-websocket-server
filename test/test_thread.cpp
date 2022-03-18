#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork() {
    using namespace std::literals::chrono_literals;

    while(!s_Finished){
        std::cout << "Working.." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main() {
    std::thread worker(DoWork);

    std::cin.get();
    s_Finished = true;

    worker.join(); //block main thread until this thread finished work

    std::cin.get();
}   