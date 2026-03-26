
#include <iostream>
#include <vector>
using namespace std;
int main()

{
 
 vector<int> numbers;
 
 numbers.push_back(10);
 numbers.push_back(20);
 numbers.push_back(30);
 numbers.push_back(40);
 
 //print vector elements
 cout << "vector elements are : " << endl;
 
 for (int i = 0; i <numbers.size(); i++)
 
 {
     
     cout << numbers [i] << "    " << endl;
     
 }
//modify vector

numbers[2]= 35;
cout << "modified vector is now: " << endl;
for (int num: numbers)

cout << num << "    " <<endl;
cout << endl;
//remove the last element from vector
numbers.pop_back();
for (int num: numbers)
cout << num << "    ";
cout << endl;
// clear a vector

numbers.clear();

//check see if the vector is empty
if (numbers.empty())
{

cout << "vector is empty" <<endl;
}
else
{
cout << "vector is not empty" << endl;
}

    return 0;
}