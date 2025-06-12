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
   
    // Inisialisasi antrian dengan nilai awal
    public:
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }
    // Membuat fungsi untuk memasukkan elemen ke dalam antrian
    void insert()
    {
        int num;
        cout << "Enter a number";
        cin >> num;
        cout << endl;

        //1. cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1));
        {
            cout << "\nQueue overflow\n"; //1.a
            return; //1.b
        }

        