#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double d[],int N,double B[]) {

    double sd;
    double geo = 1;
    double hamo = 0;
    double min = 12.5;
    double max = 0;
    
    for(int i=0;i<N;i++) B[0] += d[i];

    B[0] /= N;
    double mean = B[0];

    for (int i=0;i<N;i++) sd += pow(d[i] - mean,2);

    B[1] = sqrt(sd/N);
    for (int i=0;i<N;i++) 
    geo *= d[i];

    B[2] = pow(geo,1.0/N);
    for(int i=0;i<N;i++)
    hamo += 1.0/d[i];
    
    B[3] = N/hamo;
    for(int i=0;i<N;i++) {
        if (d[i] >= max) {
            max = d[i];
        } 
    }
    B[4] = max;
        for(int i=0;i<N;i++) {
        if (d[i] <= min) {
            min = d[i];
        } 
    }
    B[5] = min;
}
