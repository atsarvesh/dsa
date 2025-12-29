/* 
    maps are associated containers that hold pairs of data key-value 

    has a unique key but associated values don't have to be unique

    elements are stored by their keys


*/

#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){

    map<int, string> student = {{1,"sarvesh"},{2,"ram"},{3,"rohan"},{4,"vipin"}};

    map<int, string> stud = {{24,"alice"},{52,"bob"},{88,"john"},{94,"jacqueline"}};

    // add values in map

    map<int, string> course;

    course[1] = "c";
    course[2] = "c++";
    course[3] = "go";
    course[4] = "java";

    course.insert(make_pair(5,"suryansh"));
    course.insert(make_pair(6,"aaradhya"));
    course.insert(make_pair(7,"shreya"));
    course.insert(make_pair(8,"riya"));

    for (int i = 1; i <= course.size(); i++){
        cout << "course[" << i << "]: " << course[i] << endl;
    }

    // access keys and values

    map<int, string>:: iterator iter;

    for (iter = course.begin(); iter != course.end(); iter++){
        cout << iter->first << " - " << iter->second << endl; 
    }

    /*
        begin - returns an iterator that points to the first element
        end - returns an iterator that points to an element following the last element

    */

    // dereference 

    cout << (*iter).first << " - "; // * derreferences iterators for direct access to map element
    cout << (*iter).second;

    // find() for seacrhing keys

    iter = course.find(3); // value that key 3 holds

    // delete elements from maps

    cout << student.size();

    student.clear(); // delete aal the elements of map

    cout << student.size();

    // erase() function

    map<string, int> stud_rank {{"josh",2},{"rachel",4},{"betty",6}};

    stud_rank.erase("rachel");

    map<string, int>::iterator itr = stud_rank.begin();
    itr++;
    stud_rank.erase(itr);

    map<int, string>::iterator itr2;
    
    cout << "initial values: " << endl;
    for (iter = stud.begin(); itr2 != stud.end(); itr2++){
        cout << itr2->second << " , "; 
    }
    cout << endl;

    itr2 = stud.begin();
    stud.erase(itr2);
    stud.erase(94);
    cout << "final values: " << endl;
    for (iter = stud.begin(); itr2 != stud.end(); itr2++){
        cout << itr2->second << " , "; 
    }

    return 0;
}

