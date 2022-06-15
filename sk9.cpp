#include <iostream>
using namespace std;

class Program{
	public:
		void input();
		void proses();
		void output();
	private:
		int data[24]; 
		int bil[4][6];
		int x, y, temp;
};

void Program::input(){
	for(int i=0; i<24; i++){
		cout << "Masukkan nomor buku ke-" << i+1 << " = " ;
		cin >> data[i];
    }
    cout << endl;
}

void Program::proses(){
    for(int x=0; x<23; x++){
      for(int y=x+1; y<24; y++){
        if(data[x]>data[y]){
          temp = data[x];
          data[x] = data[y];
          data[y] = temp;
        }
      }
    }
    
    int i = 0;
    while(i<20){
      for(x=0; x<4; x++){
        for(y=0; y<6; y++){
          bil[x][y] = data[i];
          i++;
        }
      }
    }
    
}

void Program::output(){
	cout << "Nomor buku setelah diurutkan : ";
	for (int i=0; i<24; i++){
 	  cout << data[i] << " ";
    }
    cout << "\nTampilan nomor buku pada rak : " << endl;
    for(int i=0; i<4; i++){
	  for (int j=0; j<6; j++){
        cout << bil[i][j] << " ";
      }
      cout << endl;
    }
    
}

int main(){
	Program a;
	a.input();
	a.proses();
	a.output();
	return 0;
}
