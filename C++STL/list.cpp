//ALL ABOUT LISTS IN STL
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(1);
    display(list1);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 10;
    iter++;
    *iter = 13;
    iter++;
    *iter = 14;
    iter++;
    *iter = 11;
    iter++;
    *iter = 12;
    //sorting the list 1 AND LIST 2
    list1.sort();
    list2.sort();
    cout << "List 1 after sorting: ";
    display(list1);
    cout << "List 2 after sorting: ";
    display(list2);
    //MERGING LIST 2 IN LIST 1
    list1.merge(list2);
    cout << "Both list after merging" << endl;
    display(list1);
    //POPING OUT THE ELEMENTS IN LIST1 AND LIST2
    cout << "list1 and list2 before poping:" << endl;
    display(list1);
    cout << "Both list after poping_back" << endl;
    list1.pop_back();
    list2.pop_back();
    display(list1);
    //poping front
    cout << "Both list after poping_front: " << endl;
    list1.pop_front();
    list2.pop_front();
    display(list1);
    //removing any element from the list1 and list2
    cout << "List1 after removing specific elements:" << endl;
    list1.remove(3);
    list1.remove(10);
    list1.remove(5);
    display(list1);
}