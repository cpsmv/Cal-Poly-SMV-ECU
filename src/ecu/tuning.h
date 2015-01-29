#include "table.h"
/* The following is table data.
   Each section contains table data,
   as well a list of numbers for each axis.
   This is the section where we would "tune" the ECU. */
float yAxisVE[] = {30.1, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 98, 100};
float xAxisVE[] = {501, 801, 1101, 1401, 2001, 2601, 3101, 3700, 4300, 4900, 5400, 6000, 6500, 7000, 7200, 15000};
float dataVE[][16] = {
   {28, 30, 30, 37, 36, 36, 36, 36, 35, 35, 35, 35, 34, 34, 34, 34},
   {31, 31, 31, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38},
   {31, 31, 31, 39, 39, 39, 40, 40, 40, 41, 41, 41, 41, 42, 42, 42},
   {32, 32, 32, 40, 40, 41, 41, 42, 43, 43, 44, 44, 45, 45, 46, 46},
   {32, 33, 33, 41, 42, 42, 43, 44, 45, 46, 47, 48, 48, 49, 49, 50},
   {33, 33, 34, 39, 40, 41, 45, 46, 48, 49, 50, 51, 52, 53, 53, 54},
   {33, 34, 35, 31, 32, 34, 47, 48, 50, 51, 53, 54, 55, 57, 57, 58},
   {34, 35, 36, 32, 33, 35, 49, 51, 52, 54, 56, 57, 59, 60, 61, 62},
   {35, 36, 37, 33, 35, 37, 51, 53, 55, 57, 59, 61, 62, 64, 65, 66},
   {35, 36, 38, 34, 36, 38, 52, 55, 57, 60, 62, 64, 66, 68, 69, 70},
   {36, 37, 38, 35, 37, 40, 54, 57, 60, 62, 65, 67, 70, 72, 73, 74},
   {36, 38, 37, 38, 43, 46, 48, 51, 54, 57, 68, 71, 73, 76, 76, 78},
   {68, 69, 68, 74, 82, 85, 86, 86, 89, 92, 91, 92, 89, 87, 91, 93},
   {68, 70, 69, 75, 81, 83, 84, 84, 87, 91, 90, 91, 88, 87, 91, 93},
   {69, 72, 75, 79, 82, 84, 86, 86, 88, 92, 91, 93, 90, 89, 94, 95},
   {69, 72, 76, 80, 83, 85, 86, 87, 90, 93, 92, 94, 92, 91, 95, 97}
};

float yAxisSA[] = {20.1, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90, 100};
float xAxisSA[] = {701, 900, 1200, 1500, 2000, 2600, 3100, 3700, 4300, 4900, 5400, 15000};
float dataSA[][12] = {
   {18.6, 19.2, 20.0, 20.8, 22.4, 24.3, 25.3, 27.0, 28.7, 29.5, 30.2, 31.0},
   {18.5, 19.0, 19.9, 20.7, 22.3, 24.2, 25.2, 26.9, 28.6, 29.3, 30.0, 37.0},
   {18.3, 18.9, 19.7, 20.6, 22.2, 24.1, 25.1, 26.8, 28.5, 29.2, 29.8, 30.5},
   {18.2, 18.7, 19.6, 20.4, 22.0, 23.9, 24.9, 26.6, 28.3, 29.0, 29.5, 30.2},
   {18.0, 18.6, 19.4, 20.3, 21.9, 23.8, 24.8, 26.5, 28.2, 28.8, 29.3, 29.9},
   {17.9, 18.4, 19.3, 20.1, 21.7, 23.6, 24.7, 26.4, 28.1, 28.6, 29.1, 29.7},
   {17.7, 18.3, 19.1, 20.0, 21.6, 23.5, 24.5, 26.2, 28.0, 28.5, 28.9, 29.4},
   {17.4, 18.0, 18.8, 19.7, 21.3, 23.2, 24.3, 26.0, 27.7, 28.1, 28.4, 28.9},
   {17.8, 18.4, 19.2, 20.1, 21.7, 23.7, 24.7, 26.4, 28.8, 28.5, 28.7, 29.0},
   {17.8, 18.4, 19.2, 20.1, 21.8, 23.7, 24.7, 26.5, 28.8, 29.0, 29.2, 29.4},
   {17.5, 18.1, 18.9, 19.8, 21.5, 23.4, 24.5, 26.2, 28.6, 28.7, 28.7, 28.8},
   {17.2, 17.8, 18.7, 19.5, 21.2, 23.1, 24.2, 25.9, 28.3, 28.3, 28.3, 28.3}
};

/*  These are declarations so that programs that #include "tabledata.h"
   can also be aware of the SATable and VETable. */
extern table_t SATable;
extern table_t VETable;

/*    Here we allocate space for our various table_t's and
   and assign values into each field. */
table_t SATable = {xAxisSA, yAxisSA, (float*)dataSA, 12};
table_t VETable = {xAxisVE, yAxisVE, (float*)dataVE, 16};