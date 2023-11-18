#include <iostream>
using namespace std;

int rectangle(int i, int j) {
  for(int row=1; row<=i; row++) {
    for(int col=1; col<=j; col++) {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}

int hollow_rectangle(int i, int j) {
  for(int row=1; row<=i; row++) {
    for(int col=1; col<=j; col++) {
      if (row > 1 && row < i && col > 1 && col < j) {
        cout<<" ";
      } else {
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}

int inverted_half_pyramid(int i, int j) {
  for(int row=1; row>=0; row--) {
    for(int col=1; col<=j; col++) {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}

int main() {
  int i, j;
  cin>>i>>j;
  rectangle(i, j);
  cout<<"--------------------------"<<endl;
  hollow_rectangle(i, j);
  cout<<"--------------------------"<<endl;
  inverted_half_pyramid(i, j);

}