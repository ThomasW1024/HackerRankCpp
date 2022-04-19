#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshop {
    int startTime;
    int endTime;
    int duration;  
};


struct Available_Workshops {
    int n;    
    Workshop* workshops;
};


Available_Workshops* initialize (int start_time[], int duration[], int n) {
    Available_Workshops* obj = new Available_Workshops();
    obj->n = n;
    obj->workshops = new Workshop[n];
    for (auto i=0; i<n; i+=1) {
        Workshop ws = Workshop();
        ws.startTime =start_time[i];
        ws.duration = duration[i];
        ws.endTime = duration[i] + start_time[i];
        obj->workshops[i] = ws;
    }
    return obj;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int max = 0;
    sort(ptr->workshops, ptr->workshops +ptr->n, [](Workshop lhs, Workshop rhs)-> bool{
        return lhs.startTime < rhs.startTime;
    } );
    
    // int previousTime = 0;
    Workshop last;
    for(auto i=0; i<ptr->n; i+=1) {
        auto ws = ptr->workshops[i];
        if (max == 0){
            last = ws;
            max +=1;
        }else if (ws.startTime >= last.endTime){
            max +=1;
            last = ws;
        }else if (ws.endTime < last.endTime){
            last = ws;
        }
    }
    
    return max;
}

int main(int argc, char *argv[]) {
