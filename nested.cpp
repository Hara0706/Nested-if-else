#include <iostream>

using namespace std;


int main() {


  int a;

  cin>>a;


  if(a<=100) cout<<"5.00";

  else if(a>100 && a<=500) cout<<"8.00";

  else if(a>500 && a<1000) cout<<"10.00";

  else cout<<"12.00";


   return 0;

}
