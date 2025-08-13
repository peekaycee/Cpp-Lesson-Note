#include <iostream>
using namespace std;

int main() {
  
  // Check this out please and see if you can understand it... 

    int time = 20;
    int condition = (time < 12) ? 1 : (time > 12) ? 2 : (time == 12) ? 3 : 0; 
    
    switch(condition) {
      case 1:
        cout << "Good Morning" << endl;
        break;
      case 2:
        cout << "Good Afternoon" << endl;
        break;
      case 3:
        cout << "It's Mid-day" << endl;
        break;
    }

    return 0;
}
