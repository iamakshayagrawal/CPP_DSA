#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  cin>>a>>b;

  for(int n=a; n<=b; n++) {

    for(int i=2; i<n; i++) {
      if (n % i == 0) {
          cout<<"Non prime : "<<n<<endl;
          break;
      }
      if (i == n-1) {
        cout<<"Prime : "<<n<<endl;
      }
    }
  }

  return 0;
}
