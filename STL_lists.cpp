#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
     list<int> :: iterator it;
   for( it=lst.begin();it != lst.end(); ++it) {

    cout<<*it<<" ";}
    cout<<endl;
}

int main(){
    list <int> list1;
    list1.push_back(3423);
    list1.push_back(354);
    list1.push_back(5534);
    list1.push_back(345);
    list1.push_back(5435);
    


    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);
    display(list2);

    return 0;
}