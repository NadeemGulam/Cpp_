#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Nadeem"] = 58;
    marksMap["Itach"] = 57;
    marksMap["KIshimoto"] = 78;
    marksMap["Sakura"] = 0;
    marksMap["Eno"] = 100;
 
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}
