#include<bits/stdc++.h>

using namespace std;

// Define a struct named Workshop
struct Workshop {
    int start_time; // Workshop's start time
    int duration; // Workshop's duration
    int end_time; // Workshop's end time
};

// Define a struct named Available_Workshops
struct Available_Workshops {
    int n; // Number of workshops available
    Workshop* arr; // Pointer to an array of Workshop objects
};

// Implement a function to initialize the Available_Workshops object
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops(); // Create a new Available_Workshops object
    ptr->n = n; // Set the number of workshops
    ptr->arr = new Workshop[n]; // Allocate memory for an array of n Workshop objects

    for (int i = 0; i < n; i++) {
        ptr->arr[i].start_time = start_time[i]; // Set the start time of the ith Workshop object
        ptr->arr[i].duration = duration[i]; // Set the duration of the ith Workshop object
        ptr->arr[i].end_time = start_time[i] + duration[i]; // Calculate and set the end time of the ith Workshop object
    }

    return ptr; // Return a pointer to the Available_Workshops object
}

// Implement a function to calculate the maximum number of non-overlapping workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->arr, ptr->arr + ptr->n, [](Workshop w1, Workshop w2) { // Sort the Workshop objects by end time using a lambda function
        return w1.end_time < w2.end_time;
    });

    int count = 0; // Initialize a count of non-overlapping workshops
    int end_time = 0; // Initialize the end time of the last attended workshop to be 0

    for (int i = 0; i < ptr->n; i++) {
        if (ptr->arr[i].start_time >= end_time) { // If the start time of the ith Workshop object is after or equal to the end time of the last attended workshop
            count++; // Increment the count of non-overlapping workshops
            end_time = ptr->arr[i].end_time; // Update the end time of the last attended workshop to be the end time of the ith Workshop object
        }
    }

    return count; // Return the maximum number of non-overlapping workshops
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}


// https://www.hackerrank.com/challenges/attending-workshops/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen