#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

}
int main(){
vector <int> vec1;
int size,element ;
cout<<"Enter the size of the vector :"<<endl;
cin>>size;
for (int i = 0; i < size; i++)
{
    cout<<"Enter the value in index :"<<endl;
    cin>>element;
    vec1.push_back(element);
}

    display(vec1);
    // vec1.pop_back();//to remob=ve one element
    //to add one element
    vector<int> ::iterator itr = vec1.begin();
    vec1.insert(itr , 2323);

    display(vec1);
    return 0;
}