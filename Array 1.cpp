// /*Program Mencari bilangan terkecil dan terbesar  di dalam array*/
#include <iostream>
using namespace std;

int main() {
    int x[10] = {45,34,23,34,32,12,65,76,34,23};
    int i;
    int maks    = -1000; //asumsi paling minimum
    int min     = 1000; //asumsi paling maksimum
for (i=0;i<10;i++){
    if (x[i]>maks){
        maks = x[i];
    }
    else (x[i]<min);
        min = x [i];
}
cout<<"Nilai maksimum   :   "<<maks<<endl;
cout<<"Nilai minimum    :   "<<min<<endl;
}
