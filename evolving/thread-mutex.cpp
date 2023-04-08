#include<iostream>
#include<thread>
#include<mutex>

using std::cout;
using std::endl;
using std::thread;
using std::mutex;

mutex globalLock;

void func(int a)
{
  globalLock.lock();
  cout << "Hello world: "<< a << " "
    <<std::this_thread::get_id() << endl;
  globalLock.unlock();
}

int main()
{
  thread tArr[10];
  for(int i = 0; i < 10; i++)
    tArr[i] = thread(func, i);
  for(int i = 0; i < 10; i++)
    tArr[i].join();
}
