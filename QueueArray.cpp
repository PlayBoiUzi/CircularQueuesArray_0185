// membuat library untuk antrian menggunakan array
#include <iostream>
using namespace std;
// Membuat kelas antrian
class Queues 
{
// Kelas antrian menggunakan array
    private:
    static const int max = 5;
    int FRONT, REAR;
    int queue_array[5];
   
    
