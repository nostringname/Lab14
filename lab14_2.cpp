#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

    void showImage(const bool image[N][M]) {
        for(int i=1;i<=M+2;i++) cout << "-";
        cout << endl;
        for(int i=1;i<=N;i++){
            cout << "|";
            for (int j=1;j<=M;j++) {
                if (image[i-1][j-1] == 0) 
                cout << " ";
                else if (image[i-1][j-1] == 1) 
                cout << "*";
            }
            cout << "|\n";
        }
        for(int i=1;i<=M+2;i++) cout << "-";
        cout << endl;
    }
    
    
       void updateImage(bool image[N][M],int s,int x,int y) {


       for(int i=1;i<=N;i++){
            for (int j=1;j<=M;j++) {
                if((sqrt((pow((i-1-x),2))+(pow((j-1-y),2)))) <= s-1) {
                image[i-1][j-1] = 1 ;
                }
            }

        }
    }