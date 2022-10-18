//Employee Database Implementation in C++ Programming using Structures and Arrays of Structures by 047pegasus.
#include <iostream>
#include <math.h>
using namespace std;

// Basic Employee Structure
struct emp_data
{
    int Emp_id = 0;
    string Emp_name;
    string Emp_city;
};

struct emp_data ed[100];

// Custom Functions
void emp_entry(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Enter employee number for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_id;
        cout << "Enter employee name for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_name;
        cout << "Enter employee city for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_city;
    }
    cout << "Data entered successfully!!" << endl;
}

void search_emp(int n, int k)
{
    cout << "Searching for Emp_ID:" << n << endl;
    for (int j = 0; j < k; j++)
    {
        if (ed[j].Emp_id == n)
        {
            cout << "Data found!!" << endl;
            cout << "Data: Employee ID: " <<ed[j].Emp_id << " Employee name: " <<ed[j].Emp_name << " Employee city: " << ed[j].Emp_city << endl;
            goto V;
        }
        else
        {
        }
    }
    cout << "Data not found for given Employee ID!!" << endl;
V:
{
}
}

void emp_sort(int l)
{
    cout << "Sorting started for given Emp_ID's in the database:" << endl;
    int max_id = ed[0].Emp_id;
    int temp_emp_id = 0;
    string temp_emp_name;
    string temp_emp_city;
    for (int i = 0; i < l; i++)
    {
        if (ed[i].Emp_id >= max_id)
        {
            temp_emp_id = ed[i].Emp_id;
            ed[i].Emp_id = ed[i + 1].Emp_id;
            ed[i + 1].Emp_id = temp_emp_id;

            temp_emp_name = ed[i].Emp_name;
            ed[i].Emp_name = ed[i + 1].Emp_name;
            ed[i + 1].Emp_name = temp_emp_name;

            temp_emp_city = ed[i].Emp_city;
            ed[i].Emp_city = ed[i + 1].Emp_city;
            ed[i + 1].Emp_city = temp_emp_city;
        }
        else
        {
        }
        cout << "Data sorted successfully!!" << endl
             << "Printing sorted now:" << endl;
        for (int i = 0; i < l; i++)
        {
            cout << "Data: Employee ID: " <<ed[i].Emp_id << " Employee name: " <<ed[i].Emp_name << " Employee city: " <<ed[i].Emp_city << endl;
        }
    }
}

int count = 0;

void count_emp()
{
    int n = 11;
    while (n != 0)
    {
        if (ed->Emp_id != 0)
        {
            count++;
            n--;
        }
        else
        {
            n--;
        }
    }
}

void add_emp(int cnt)
{
    cout << "Add 5 more employees to the database:"<< endl;
    for (int i = cnt; i < cnt + 5; i++)
    {
        cout << "Enter employee number for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_id;
        cout << "Enter employee name for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_name;
        cout << "Enter employee city for Employee number:" << i + 1 << endl;
        cin >> ed[i].Emp_city;
    }
}

int main()
{

    int no_of_emp = 0;
    cout << "Enter the number of Employees in the database:" << endl;
    cin >> no_of_emp;
    cout << "Enter employee database values:" << endl;
    emp_entry(no_of_emp);
    // Custom functions
    int i = 0;
    cout << " Enter the Employee ID of employee to be searched:";
    cin >> i;
    search_emp(i, no_of_emp);
    emp_sort(no_of_emp);
    count_emp();
    add_emp(5);
    return 0;
}