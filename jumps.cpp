#include <iostream>
using namespace std;

int main() {
  int days, money;
  cin>>days>>money;

  for(int day=1; day<=days ; day++) {
    if (day % 2 == 0) {
        continue;
    }
    if (money == 0) {
        cout<<"no money"<<endl;
        break;
    }
    cout<<"go out have money"<<endl;
    money = money - 500;

  }

  return 0;
}
