#include<iostream>
using namespace std;

void printO(int x,int y){
    if ((x <= 0) || (y <= 0)){
		cout << "Invalid input";
	}
	else{
      for(int i =1 ;i<=x ;i++){
        for(int j = 1;j <= y;j++){
            cout << 'O' ;
        }
        cout << "\n";
      }
    }
}
int main()
{   int a,b ;
    cout << "input : " ;
    cin >> a >> b ;
    cout << printO(a,b) ;

}