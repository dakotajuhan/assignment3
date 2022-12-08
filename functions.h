#include <string>
#include <queue>
using namespace std;


queue<int> theQueue; // declare queue 

void move_to_rear(){ // function to move front to rear

int num=theQueue.front();

theQueue.pop();

theQueue.push(num);
}

