# BAnkers Algorithm for resourse allocation
Assumption : the data will be entered in the following way
It gives the cuurent state as safe or not in the program
The used table below has following data :

    // P0, P1, P2, P3, P4 are the Process names here

    np = 5; // Number of processes
    nr = 3; // Number of resources

    int avm[5][3] = { { 0, 1, 0 }, // P0 // Allocation Matrix
                    { 2, 0, 0 }, // P1
                    { 3, 0, 2 }, // P2
                    { 2, 1, 1 }, // P3
                    { 0, 0, 2 } }; // P4

    int mm[5][3] = { { 7, 5, 3 }, // P0 // MAX Matrix
                    { 3, 2, 2 }, // P1
                    { 9, 0, 2 }, // P2
                    { 2, 2, 2 }, // P3
                    { 4, 3, 3 } }; // P4

    int avm[3] = { 3, 3, 2 }; // Available Resources

    int need[n][m] = { { 1, 1, 1 }, // P0 // MAX Matrix
                    { 1, 1, 1 }, // P1
                    { 1, 1, 1 }, // P2
                    { 1, 1, 1 }, // P3
                    { 1, 1, 1 } }; // P4

    Process number for request:
    1

    Needed resources: {1, 1, 1} //P1



Here is the output/input for question 2


(base) netrunner@dew:~/Desktop/sem 7/ass6$ g++ -o test ass6_2.cpp

(base) netrunner@dew:~/Desktop/sem 7/ass6$ ./test

Enter the Number of Processes 5

Enter the Number of resource types 3

Enter the Available matrix 3
3
2

Enter the Max matrix 7
5
3
3
2
2
9
0
2
2
2
2
4
3
3

Enter the Allocation matrix 0
1
0
2
0
0
3
0
2
2
1
1
0
0
2

Enter the Need matrix 1
1
1
1
1
1
1
1
1
1
1
1
1
1
1

Enter Process Number 1

Enter the resourse request matrix 1
1
1

Safe State

Request can be Fulfilled

(base) netrunner@dew:~/Desktop/sem 7/ass6$ 
