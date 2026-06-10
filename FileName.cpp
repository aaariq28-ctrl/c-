//#include <iostream>
//#include <cmath>
//using namespace std;
//int getfactorial(int num) {
  //  int f = 1;
    //for (int i = 1;i <= num;i++)
      //  f *= i;
    //return f;
//}
//int main() {
  //  int num;
    //cout << "entre num 1:\n";
    //cin >> num;
   //cout<< getfactorial(num);  
    //return 0;
//}


///////////////////////////////


//#include <iostream>
//#include <cmath>
//using namespace std;
//double avg(double sum, int n) {
  //  return sum/n;
//}
//int main() {
  //  int n;
    //double sum;
    //cout << "enter the sum of valuoe and total of marks :\n";
    //cin >> sum >> n;
    //cout << avg(sum, n);
//    return 0;
//}


///////////////////////


//#include <iostream>
//#include <cmath>
//using namespace std;
//int getmax(int n1, int n2) {
    //if (n1 > n2)
     //   return n1;
   // else 
  //  return n2;
//}
//int main() {
    //int n1, n2;
    //cout << "enter two num :";
    //cin >> n1 >> n2;
    //cout << "max num between " << n1 << " and " << n2
    //    << " is " << getmax(n1, n2);
  //  return 0;
//}





////////////////////////////////



//#include <iostream>
//using namespace std;
//int getmin(int n1, int n2) {
    //if (n1 > n2)
      //  return n2;
    //else
  // return n1;
//}
//int main() {
    //int n1, n2;
   // cout << "Enter two numbers: ";
    //cin >> n1 >> n2;
    //cout << "Min number between " << n1 << " and " << n2
    //    << " is " << getmin(n1, n2);
  //  return 0;
//}




/////////////////////////



//#include <iostream>
//using namespace std;
//int getmax(int n1, int n2) {
    //if (n1 > n2)
     //  return n1;
   //else 
  //  return n2;
//}
//int f1(int n1, int n2, int n3) {
  //  return getmax(n1, getmax(n2, n3));
//}
//int main() {
    //int n1, n2, n3;
    //cout << "entre 3 num :";
    //cin >> n1 >> n2 >> n3;
    //cout << "max num between" << n1 <<","<< n2 <<","<< n3 <<
    //    "is" << f1(n1, n2, n3) << endl;
  //  return 0;
//}



//////////////////////////


//#include <iostream>
//#include<cmath> 
//using namespace std;
//int getvol1(double n) {
    //    return  n * n * n;
//}
//int main() {
  //  int n ;
  //  cout << "enter num:";
  //  cin >> n;
  //  cout << " The volume of a cube:" << getvol1(n) << endl;
   // double volume = getvol1(n);
  //return 0;
//}



//////////////////////////////////////




//#include<iostream> 
//#include<cmath> 
//using namespace std;
//double f1(double r , double h ) {
    //double π = 3.14;
  //  return  π * r * r * h;
//}
//int main(){
    //int r, h;
    //cout << "Enter radius and height of a cylinder:" << endl;
    //cin >> r>> h;
    //cout << " Volume of cylinder is " << f1(r, h)<< endl;
  //  return 0;
//}




///////////////////////////////////



//#include<iostream> 
//#include<cmath> 
//using namespace std;
//double f1(double r) {
  //  double π = 3.14;
    //return (4.0 / 3.0) * π * r * r * r;
//}
//int main() {
  //  int r;
    //cout << "enter r :";
   // cin >> r;
    //cout << "Volume of sphere is " << f1(r) << endl;
    //return 0;
//}



/////////////////////////////






//#include<iostream> 
//#include<cmath> 
//using namespace std;
//void printEven() {
    //for (int i = 1; i <= 100; i++) {
        //if (i % 2 == 0) {
      //      cout << i << " ";
    //    }  
  //  }
//}
//int main() {
    //printEven(); 
   // return 0;
//}





///////////////////////////////////


// #include<iostream>
//#include<cmath> 
//using namespace std;
//void f1(int x) {
 //   if (x % 2 == 0) {
     //   cout << "even\n";
   // }
    //if (x % 2 != 0) {
      //  cout << "odd";
    //}
//}
//int main() {
  //  int x;
   // cout << "enter x :";
   // cin >> x;
  //  f1(x);
  //  return 0;
//}








/////////////////////////////////







//#include <iostream>
//using namespace std;
//double calculateAverage(double sum, int count) {
   // if (count == 0)
       // return 0;
    //return sum / count;
//}
//char getGrade(double mark) {
   // int m = mark / 10;   
   // switch (m) {
   // case 10:
    //case 9: return 'A';   
    //case 8: return 'B';   
   // case 7: return 'C';   
   // case 6: return 'D';    
  //  case 5: return 'E';    
  //  default: return 'F';  
  //  }
//}
//char getResult(double average) {
   // if (average >= 50)
   //     return 'P';
  //  else
   //     return 'F';
//}
//void printResult(double average) {
   // char result = getResult(average);
   // /if (result == 'P')
     //   cout << "Congratulations!!! You Passed!!!" << endl;
    ///else
    //    cout << "Sorry!!! You Failed!!!" << endl;
//}
//int main() {
   // double mark, sum = 0;
  //  int count = 0;
  //  cout << "Enter marks (negative number to stop):" << endl;
  //  while (true) {
       // cin >> mark;
      //  if (mark < 0)
      //      break;
      //  sum += mark;
       // count++;
     //   cout << "Grade: " << getGrade(mark) << endl;
    //}
  //  double average = calculateAverage(sum, count);
  //  cout << "Average = " << average << endl;
    //printResult(average);
   // return 0;
//}








