//implementasi program c++ Insertion Sort (Bubble sort)
#include <iostream>
using namespace std;

//fungsi void untuk mengurutkan array
void bubbleSort(int arr[], int n){
	//deklarasi variabel
  int i, j, tmp;
  for (i = 0; i < n; i++){
  	//membandingkan nilai array nilai yang lebih kecil dipindah ke kiri/depan
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main(){
	//fungsi void untuk input array
  int array[100], n, i, j;
  //menampilkan kalimat
  cout<<"PROGRAM BILANGAN BUBBLE SORT \n\n";
  //elemen input
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;
  cout << "Masukkan bilangan: ";
  //fungsi void mencetak array yang dimasukan
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  //fungsi void untuk menampilkan hasil sorting array
  cout << "Hasil array yang sudah disorting :\n";
  for (i = 0; i < n; i++){
    cout <<"["<< array[i] << "]";
  }
  cout << "\n";
  //jejak develop
  cout << "develop_putri dwinatryska_21091397075_kel 6";
}
