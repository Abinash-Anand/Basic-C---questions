//C++ STL - VECTORS
//using push_back, pop_back and insert
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int element, size;
    vector<int> vec1;
    vector<char> vec2(6);
    vector<char> vec3(vec2);
    vector<int> vec4(4, 10);

    cout << "Enter the size of the vector: " << endl;
    cin >> size;

    //to push in all the elements inside the vector
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements in the vector: " << endl;
        cin >> element;
        vec1.push_back(element);
        cout << vec1.at(i) << endl;
    }

    //to pop out all the elements in the vector
    // for (int i = 0; i < size; i++)
    // {
    //     vec1.pop_back();
    // }
    //inserting an element in the vector
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 365);

    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    return 0;
}
