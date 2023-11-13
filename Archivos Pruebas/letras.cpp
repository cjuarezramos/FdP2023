// // writing on a text file
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main () {
//   ofstream myfile ("example.txt");
//   if (myfile.is_open())
//   {
//     myfile << "This is a line.\n" << 10;
//     myfile << "This is another line.\n";
//     myfile.close();
//   }
//   else cout << "Unable to open file";
//   return 0;
// }
// /// reading a text file
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main () {
//   string line;
//   ifstream myfile ("example.txt");
//   if (myfile.is_open())
//   {
//     while ( getline (myfile,line) )
//     {
//       cout << line << '\n';
//     }
//     myfile.close();
//   }

//   else cout << "Unable to open file"; 

//   return 0;
// }
// ///
// setprecision example
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  double f =3.14159;
  std::cout << std::setprecision(4) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(4) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}