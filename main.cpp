#include <iostream>
using namespace std;
int main() {
  cout << "*************************\n";
  cout << "------PRIME__NUMBER------\n";
  cout << "*************************\n";
  
  for (int j =0; j<8;j++){
    int min,max,count=0;
    cout << "\nMin : ";
    cin >> min;
    cout << "Max : ";
    cin >> max;
    for (int i = min; i <= max;i++){
      if(i==1 || i==2 || i==3 || i==5 || i==7 || i==11 || i==19){
        cout << i << " ";
        count ++;
      }
      else if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0 && i%19!=0){
        cout << i << " ";
        count ++;
      }else{
        continue;
      }
    }
    cout << "\n" << count << "\n\n";
  }
}
