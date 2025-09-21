#include<iostream>
using namespace std;

class Tracker{
    int PersonID, step_count, stair_count;
    public: 
    Tracker(int id, int steps=0, int stairC = 0){
        PersonID = id;
        step_count = steps;
        stair_count= stairC;
    };

    void incrementCount(int n);
    friend void convertStep(Tracker &t);
    void displayCount(){
        cout<<"ID: "<<PersonID<<"\n";
        convertStep(*this);
        cout<<"stair_steps: "<<stair_count<<"\n";
        cout<<"total steps: "<<step_count<<"\n";
    }
};

void convertStep(Tracker &t){
    t.step_count = t.step_count+(t.stair_count*2);
}

void Tracker::incrementCount(int n){
    {
        step_count+=n;
        stair_count+=n;
    }
}

int main(){
    Tracker ob1(1,10);
    ob1.displayCount();
    ob1.incrementCount(10);
    ob1.displayCount();
    return 0;
}